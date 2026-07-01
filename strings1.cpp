#include<string>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str="Shubham Jha";
    cout<<str;
    cout<<str[0];
    cout<<endl;
    int size=sizeof(str)/sizeof(str[0]);
    for(char i=size-1;i>=0;i++)
    cout<<str[i];
    cout<<endl;
}