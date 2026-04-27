#include<bits/stdc++.h>
using namespace std;
signed int reverse(int number)
{
    if(number==0)
    return number;
    else
    {  int flag=1;
        if(number<0)
        flag=-1;
        int x=number;
        int rev=0;
        while(x)
        { rev=rev*10;
          rev+=x%10;
          x=x/10;
        }
        
    int result=(flag)*(rev);
    return result;

    }
    
}
int main()
{
    int x;
    cout<<"Enter a number";
    cout<<endl;
    cin>>x;
   signed result=reverse(x);
    cout<<"The reverse of the digit"<<x<<" is->"<<result;
    cout<<endl;
}