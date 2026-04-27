#include<bits/stdc++.h>
using namespace std;
void printarray(int * ptr,int size)
{
     for(int i=0;i<size;i++)
     cout<<ptr[i]<<" ";
}
void reversearray(int * ptr,int size)
{
    int low=0;
    int high=size-1;
    while(low<high)
    {
        int temp=ptr[high];
        ptr[high]=ptr[low];
        ptr[low]=temp;
        high--;
        low++;
    }
}
int main()
{
    int arr[]={1,2,3,4,5,6,7,8,9,10};
    int size=sizeof(arr)/sizeof(arr[0]);
    printarray(arr,size);
    reversearray(arr,size);
    cout<<endl;
    printarray(arr,size);
}