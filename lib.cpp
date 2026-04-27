#include <iostream>
#include <vector>
#include <string>
#include <iomanip>
#include <fstream>
#include <sstream>
#include <limits>

using namespace std;

// --- SAFE INPUT HELPER ---
// Prevents the program from infinitely looping if you type a letter instead of a number
int getValidInteger() {
    int num;
    while (!(cin >> num)) {
        cout << "Invalid input. Please enter numbers only: ";
        cin.clear(); 
        cin.ignore(numeric_limits<streamsize>::max(), '\n'); 
    }
    return num;
}

// --- BOOK CLASS ---
class Book {
public:
    int id;
    string title;
    string author;
    bool isAvailable;

    Book(int id, string title, string author) {
        this->id = id;
        this->title = title;
        this->author = author;
        this->isAvailable = true; 
    }
};

// --- LIBRARY SYSTEM CLASS ---
class Library {
private:
    vector<Book> books;

public:
    // 1. Load data from the text file when the program starts
    void loadData() {
        ifstream inFile("library_data.txt");
        if (!inFile) return; // Completely normal if running for the first time

        string line;
        while (getline(inFile, line)) {
            stringstream ss(line);
            string tempId, title, author, tempAvailable;
            
            getline(ss, tempId, ',');
            getline(ss, title, ',');
            getline(ss, author, ',');
            getline(ss, tempAvailable, ',');

            if (tempId.empty()) continue; 

            Book loadedBook(stoi(tempId), title, author);
            loadedBook.isAvailable = (tempAvailable == "1");
            books.push_back(loadedBook);
        }
        inFile.close();
        cout << "--- Previous library data loaded successfully ---\n";
    }

    // 2. Save data to the text file before closing
    void saveData() {
        ofstream outFile("library_data.txt"); 
        if (!outFile) {
            cout << "Error: Could not open file for saving.\n";
            return;
        }

        for (const auto& book : books) {
            outFile << book.id << "," 
                    << book.title << "," 
                    << book.author << "," 
                    << book.isAvailable << "\n";
        }
        outFile.close();
        cout << "System data successfully saved to 'library_data.txt'.\n";
    }

    // 3. Add a new book
    void addBook(int id, string title, string author) {
        for (const auto& book : books) {
            if (book.id == id) {
                cout << "Error: A book with ID " << id << " already exists.\n";
                return;
            }
        }
        books.push_back(Book(id, title, author));
        cout << "Success: '" << title << "' has been added to the library.\n";
    }

    // 4. View all books
    void displayBooks() {
        if (books.empty()) {
            cout << "\nThe library is currently empty.\n";
            return;
        }
        
        cout << "\n----------------------------------------------------------------------\n";
        cout << left << setw(10) << "ID" << setw(30) << "Title" << setw(20) << "Author" << "Status" << endl;
        cout << "----------------------------------------------------------------------\n";
        
        for (const auto& book : books) {
            cout << left << setw(10) << book.id 
                 << setw(30) << book.title 
                 << setw(20) << book.author 
                 << (book.isAvailable ? "Available" : "Borrowed") << endl;
        }
        cout << "----------------------------------------------------------------------\n";
    }

    // 5. Borrow a book
    void borrowBook(int id) {
        for (auto& book : books) {
            if (book.id == id) {
                if (book.isAvailable) {
                    book.isAvailable = false;
                    cout << "Success: You checked out '" << book.title << "'.\n";
                } else {
                    cout << "Error: Sorry, '" << book.title << "' is currently checked out.\n";
                }
                return;
            }
        }
        cout << "Error: Book with ID " << id << " not found.\n";
    }

    // 6. Return a book
    void returnBook(int id) {
        for (auto& book : books) {
            if (book.id == id) {
                if (!book.isAvailable) {
                    book.isAvailable = true;
                    cout << "Success: You returned '" << book.title << "'.\n";
                } else {
                    cout << "Notice: This book is already in the library.\n";
                }
                return;
            }
        }
        cout << "Error: Book with ID " << id << " not found.\n";
    }
};

// --- MAIN PROGRAM LOOP ---
int main() {
    Library myLibrary;
    int choice, id;
    string title, author;

    // Load data silently on startup
    myLibrary.loadData();

    while (true) {
        cout << "\n=== Library Management Menu ===\n";
        cout << "1. Add New Book\n";
        cout << "2. Display All Books\n";
        cout << "3. Borrow a Book\n";
        cout << "4. Return a Book\n";
        cout << "5. Exit & Save Data\n";
        cout << "Enter your choice (1-5): ";
        
        choice = getValidInteger();

        switch (choice) {
            case 1:
                cout << "\nEnter Book ID (Numbers only): ";
                id = getValidInteger(); 
                
                // Clear the enter key press before asking for text
                cin.ignore(numeric_limits<streamsize>::max(), '\n'); 
                
                cout << "Enter Book Title: ";
                getline(cin, title);
                
                cout << "Enter Author Name: ";
                getline(cin, author);
                
                myLibrary.addBook(id, title, author);
                break;
                
            case 2:
                myLibrary.displayBooks();
                break;
                
            case 3:
                cout << "\nEnter the ID of the book you want to borrow: ";
                id = getValidInteger();
                myLibrary.borrowBook(id);
                break;
                
            case 4:
                cout << "\nEnter the ID of the book you want to return: ";
                id = getValidInteger();
                myLibrary.returnBook(id);
                break;
                
            case 5:
                myLibrary.saveData();
                cout << "\nData saved. Exiting system...\n";
                return 0;
                
            default:
                cout << "\nInvalid choice. Please enter a number between 1 and 5.\n";
        }
    }
    return 0;
}