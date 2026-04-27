#include<iostream>
using namespace std;
void reverse(int number)
{  int rev=0;
    int orginal=number;
    if(number<0)
    {
        number=(-1)*number;
        if(number<=9)
    cout<<"The reverse of the number is->"<<(-1)*number;
    else{
        while(number!=0)
        { rev=rev*10+number%10;
         number=number/10;
        }
        cout<<"The reverse of "<<orginal<<" is->"<<(-1)*rev;
    }
}
else if(number==0)
cout<<"The reverse of the number is -"<<number;
else{
    if(number<=9)
    cout<<"The reverse of the number is-"<<number;
    else{
        while(number!=0)
        { rev=rev*10+number%10;
         number=number/10;
        }
        cout<<"The reverse of "<<orginal<<" is-"<<rev;
    }
}
}
int main()
{
    int number;
    cout<<"Enter the numbers";
    cin>>number;
    reverse(number);
    return 0;
}