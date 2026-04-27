#include<iostream>
using namespace std;
int sum_of_digit(int number)
{
    int sum=0;
    while(number)
    {
        sum+=number%10;
        number=number/10;
    }
    return sum;
}
int main()
{
    cout<<"Enter the element"<<endl;
    int number;
    cin>>number;
    int result=sum_of_digit(number);
    cout<<endl;
    cout<<"The sum of digit is->"<<result;
}