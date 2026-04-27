#include<bits/stdc++.h>
using namespace std;
int main()
{
    cout<<"Enter the number"<<endl;
    int number;
    cin>>number;
    int sum=0;
    while(number)
    {
        sum+=number%10;
        if((number/10)!=0)
        number=number/10;
        else if((number/10)==0)
        {
            sum+=number%10;
            number=number/10;
        }
    }
    cout<<endl;
    cout<<"The sum of digit is->"<<sum;
}