#include<iostream>
using namespace std;
void printarray(int arr[],int size)
{
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
}
int main()
{
    int arr[]={10,9,8,7,6,5,4,3,2,1};
    int size =sizeof(arr)/sizeof(arr[0]);
    printarray(arr,size);
}