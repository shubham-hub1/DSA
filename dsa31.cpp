#include <iostream>
#include <string>
using namespace std;
void addition()
{
    cout << "Enter the two numbers";
    int num1, num2;
    cin >> num1 >> num2;
    int sum = num1 + num2;
    cout << "The sum of number is -" << sum;
}
void subtraction()
{
    cout << "Enter the two numbers";
    int num1, num2;
    cin >> num1 >> num2;
    int sum = num1 - num2;
    cout << "The subtraction of number is -" << sum;
}
void multi()
{
    cout << "Enter the two numbers";
    int num1, num2;
    cin >> num1 >> num2;
    int sum = num1 * num2;
    cout << "The multiplication of number is -" << sum;
}
void divison()
{
    cout << "Enter the two numbers";
    int num1, num2;
    cin >> num1 >> num2;
    int sum = num1 / num2;
    cout << "The divison of number is -  " << sum;
}
int main()
{
    // A simple calucaltor
    cout << "---------------Calculator--------------------------" << endl;
    cout << "1.Addition" << endl;
    cout << "2.Subtraction" << endl;
    cout << "3.Multiplication" << endl;
    cout << "4.Divison" << endl;
    cout << "Enter your choice............." << endl;
    int choice;
    cin >> choice;
    switch (choice)
    {
    case 1:
        addition();
        break;
    case 2:
        subtraction();
        break;
    case 3:
        multi();
        break;
    case 4:
        divison();
        break;
    default:
        cout << "Enter a valid choice";
    }
}