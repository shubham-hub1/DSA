#include<iostream>
using namespace std;
int even_or_odd(int number)
{
    if(number%2==0)
    return 1;
    else
    return -1;
}
int main()
{
    int number;
    cout<<"Enter the number "<<endl;
    cin>>number;
    cout<<endl;
    int result=even_or_odd(number);
    if(result==-1)
    cout<<"Number is odd";
    else
    cout<<"Number is even";
    cout<<endl;
}