#include<iostream>
#include<math.h>
using namespace std;
bool prime(int number)
{
    if(number==0||number==1)
    return false;
    else if(number==2)
    return true;
    else{
        for(int i=2;i<sqrt(number);i++)
        {
            if(number%i==0)
            return false;
        }
        return true;

    }
}
int main()
{
    int number;
    cout<<"Enter the numbers";
    cout<<endl;
    cin>>number;
    bool result=prime(number);
    if(result)
    cout<<"Enter the number is prime";
    else
    cout<<"The number is not prime";
}