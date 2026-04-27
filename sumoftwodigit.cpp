#include<iostream>
#include<string>
using namespace std;
int sum_of_number(int x,int b)
{
    int sum=x+b;
    return sum;
}
int main()
{
    cout<<"Enter the two numbers->";
    cout<<endl;
    int a,b,sum;
    cin>>a>>b;
    sum=sum_of_number(a,b);
    cout<<"The sum of two numbers is->"<<sum;
}