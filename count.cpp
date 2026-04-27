#include<iostream>
using namespace std;
void intiliaze(int arr[],int size)
{
    cout<<"Enter the array element->";
    for(int i=0;i<size;i++)
    cin>>arr[i];
}
void printarray(int arr[],int size)
{
    for(int i=0;i<size;i++)
    cout<<arr[i]<<" ";
}
int main()
{
    int arr[10];
    intiliaze(arr,10);
    printarray(arr,10);
    cout<<endl;
}