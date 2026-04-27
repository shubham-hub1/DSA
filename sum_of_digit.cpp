#include<bits/stdc++.h>
using namespace std;
int main()
{
    cout<<"Enter the digit";
    int digit;
    cin>>digit;
    int sum=0;
    for(int i=1;i<=digit;i++)
    {
        sum+=i;

    }
    cout<<endl;
    cout<<"The sum of digit is->"<<sum;
    return 0;
}