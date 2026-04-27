#include<iostream>
#include<string>
using namespace std;
void reverse(char * ptr,int size)
{
int last =size-1;
while(ptr<=last)
}
int main()
{
    string s1="Shubham Jha";
    cout<<s1<<endl;
    int size=sizeof(s1)/sizeof(char);

    reverse(&s1,size);
    cout<<s1<<endl;

}