#include<iostream>
using namespace std;
int factorial(int number)
{
if(number==0||number==1)
return 1;
else{
    return number*factorial(number-1);
}
}
int main()
{
    cout<<"Enter the number whose factorial you want to find out->"<<endl;
    int number;
    cin>>number;
    int result=factorial(number);
    cout<<"The factorial of the number "<<number<<" is->"<<result;

}