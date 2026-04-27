#include<iostream>
using namespace std;
int check(int number)
{
    if(number==0)
    return 1;
    else if(number<0)
    return -1;
    else{
        int rev=0;
        int original=number;
        while(number!=0)
       { 
        
         int remainder=number%10;
            rev=rev*10+remainder;
            number=number/10;
        }
        if(original==rev)
        return 1;
        else
        return -1;
    }
}
int main()
{
    int number;
    cout<<"Enter the number";
    cout<<endl;
    cin>>number;
    int result=check(number);
    if(result==-1)
    cout<<"Number is not palindrome";
    else
    cout<<"Number is palindrome";

}