#include<iostream>
using namespace std;
void printarray(int arr[],int size)
{
    for(int i=0;i<size;i++)
    cout<<arr[i]<<" ";
}
void swap(int arr[],int source,int target)
{
    int temp=arr[source];
    arr[source]=arr[target];
    arr[target]=temp;
}
void reverse(int arr[],int size)
{
    int start=0;
    int last=size-1;
    while(start<=last)
    {
        swap(arr,start,last);
        start++;
        last--;
    }
}
int main()
{
    int arr[]={1,2,3,4,5,6,7,8,9,10};
    int size=sizeof(arr)/sizeof(arr[0]);
    cout<<"The array before->"<<endl;
    printarray(arr,size);
    cout<<endl;
    cout<<"After  reversing the array->";
    reverse(arr,size);printarray(arr,size);
    cout<<endl;
    return 0;
}