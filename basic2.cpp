#include<iostream>
#include<string>
using namespace std;
int main()
{
    int a;
    cin>>a;
    cout<<a;
    float f;
    cout<<endl;
    cin>>f;
    cout<<f;
    cout<<endl;
    char ch;
    cin>>ch;
    cout<<ch;
    
    string sh;

    cout<<endl;
    cin.ignore();
    getline(cin,sh);
    cout<<sh;
}