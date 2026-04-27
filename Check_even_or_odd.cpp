#include<iostream>
using namespace std;
bool even_or_not(int number)
{
    if(number%2==0)
    return true;
    else
    return false;
}
int main()
{
    cout<<"Enter the numbers";
    cout<<endl;
    int a;
    cin>>a;
    bool result=even_or_not(a);
    if(result)
    cout<<"Even";
    else
    cout<<"Odd";
}