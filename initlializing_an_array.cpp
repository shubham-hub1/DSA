#include<iostream>
using namespace std;
void initialze(int * ptr,int size)
{
    for(int i=0;i<size;i++)
    {
        cout<<"Enter the element at->"<<i<<"index->";
        cin>>ptr[i];
    }

}
void printarray(int * ptr,int size)
{
    for(int i=0;i<size;i++)
    cout<<ptr[i]<<" ";
}
int main()
{
    int arr[10];
    int size=sizeof(arr)/sizeof(arr[0]);
    initialze(arr,size);
    
    printarray(arr,size);
}