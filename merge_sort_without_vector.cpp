#include<iostream>
using namespace std;
void merge(int * ptr,int low,int mid,int high)
{
    int arr[high-low+1];
    int count=0;
    int i=low;
    int j=mid+1;
    while(i<=mid&&j<=high)
    {
        if(ptr[i]<ptr[j])
        {
        arr[count]=ptr[i];
        count++;
        i++;
        }
        else{
            arr[count]=ptr[j];
            count++;
            j++;

        }
    }
    while(i<=mid)
    {
        arr[count]=ptr[i];
        count++;
        i++;
    }
    while(j<=high)
    {
        arr[count]=ptr[j];
        count++;
        j++;
    }
    for(int k=low;k<=high;k++)
    ptr[k]=arr[k-low];
}
void mergesort(int * ptr,int low,int high)
{
    if(low>=high)
    return;
   
        int mid=(low+high)/2;
        mergesort(ptr,low,mid);
        mergesort(ptr,mid+1,high);
        merge(ptr,low,mid,high);
    
}
void printarray(int * ptr,int size)
{
    for(int i=0;i<size;i++)
    cout<<ptr[i]<<" ";
}
int main()
{
    int arr[]={10,9,8,7,6,5,4,3,2,1};
    int size=sizeof(arr)/sizeof(arr[0]);
    printarray(arr,size);
    cout<<endl;
    mergesort(arr,0,size-1);
    printarray(arr,size);
}