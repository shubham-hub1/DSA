#include<iostream>
using namespace std;
void swap(int arr[],int source,int target)
{
    int temp=arr[source];
    arr[source]=arr[target];
    arr[target]=temp;
}
void printarray(int arr[],int size)
{
    for(int i=0;i<size;i++)
    cout<<arr[i]<<" ";
}
void selectionsort(int arr[],int size)
{
    for(int i=0;i<size;i++)
    {
        int maxindex=i;
        for(int j=i+1;j<size;j++)
        {
        if(arr[j]>arr[maxindex])
        maxindex=j;
        }
    swap(arr,maxindex,size-i-1);
}
}
int main()
{
    int arr[]={10,9,8,7,6,5,4,3,2,1};
    int size=sizeof(arr)/sizeof(arr[0]);
    printarray(arr,size);
    cout<<endl;
    selectionsort(arr,size);
    printarray(arr,size);


}