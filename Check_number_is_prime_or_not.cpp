#include<iostream>
using namespace std;
int prime(int number)
{
    if(number==1)
    return -1;
    else if(number==2)
    return 1;
    else{
        for(int i=2;i<number;i++)
        if(number%i==0)
        return -1;

    }
    return 1;
}
int main()
{
    int number;
    cout<<"Enter the number ";
    cout<<endl;
    cin>>number;
    int result=prime(number);
    if(result==-1)
    cout<<"Number is not prime";
    else
    cout<<"Number is primw";
    cout<<endl;
}