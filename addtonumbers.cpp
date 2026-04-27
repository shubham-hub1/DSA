#include<iostream>
using namespace std;
int sum_function(int a,int b)
{
    int sum=a+b;
    return sum;
}
int main()
{
    cout<<"Enter two numbers";
    cout<<endl;
    int a,b;
    cin>>a>>b;
    int sum=sum_function(a,b);
    cout<<endl;
    cout<<"The sum of two numbers is-"<<sum;
    return 0;
}