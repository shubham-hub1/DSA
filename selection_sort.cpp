#include<bits/stdc++.h>
using namespace std;
void printarray(int * ptr,int size)
{
    for(int i=0;i<size;i++)
    {
        cout<<ptr[i]<<" ";
    }
}
void swap(int * ptr,int source,int target)
{
    int temp=ptr[target];
    ptr[target]=ptr[source];
    ptr[source]=temp;
}
void selectionsort(int * ptr,int size)
{
    for(int i=0;i<size;i++)
    {   int max=0;
        int flag=0;
        for(int j=0;j<size-i;j++)
        { 
            if(ptr[j]>ptr[max])
            {
                max=j;
                flag++;
            }
      }
        if(flag!=0)
        swap(ptr,max,size-i);
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