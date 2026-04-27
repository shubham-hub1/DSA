#include<bits/stdc++.h>
using namespace std;
void printarray(int * ptr,int size)
{
    for(int i=0;i<size;i++)
    cout<<ptr[i]<<" ";
}
void swap(int * ptr,int source ,int target )
{
    int temp=ptr[target];
    ptr[target]=ptr[source];
    ptr[source]=temp;
}
void bubblesort(int arr[],int size)
{
    for(int i=0;i<size;i++)
    {
        for(int j=0;j<size-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            swap(arr,j,j+1);
        }
    }
}
int main()
{
    int arr[]={10,9,8,7,6,5,4,3,2,1};
    int size=sizeof(arr)/sizeof(arr[0]);
    printarray(arr,size);
    cout<<endl;
    bubblesort(arr,size);
    printarray(arr,size);

}