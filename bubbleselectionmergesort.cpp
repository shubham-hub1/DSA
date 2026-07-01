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
void bubblesort(int arr[],int size)
{
    for(int i=0;i<size;i++)
    {
        for(int j=0;j<size-1-i;j++)
        {
            if(arr[j]>arr[j+1])
            swap(arr,j,j+1);
        }
    }
}
void selectionsort(int arr[],int size)
{
    for(int i=0;i<size;i++)
    {     int maxindex=0;
        for(int j=0;j<size-i;j++)
        { 
            if(arr[j]>arr[maxindex])
            maxindex=j;
        }
        swap(arr,maxindex,size-i-1);
    }
}
void merge(int arr[],int low,int mid,int high)
{
    int temp[high-low+1];
    int count=0;
    int i=low;
    int j=mid+1;
    while(i<=mid && j<=high)
    {
        if(arr[i]>=arr[j])
        temp[count++]=arr[j++];
        else 
        temp[count++]=arr[i++];
    }
    while(i<=mid)
    temp[count++]=arr[i++];
    while(j<=high)
    temp[count++]=arr[j++];
    for(int k=low;k<=high;k++)
    arr[k]=temp[k-low];
}
void mergesort(int arr[],int low,int high)
{
    if(low==high)
    return;
    else{
        int mid=(low+high)/2;
        mergesort(arr,low,mid);
        mergesort(arr,mid+1,high);
        merge(arr,low,mid,high);
    }
}
int main()
{
    int arr[]={10,9,8,7,6,5,4,3,2,1};
    int size=sizeof(arr)/sizeof(arr[0]);
    printarray(arr,size);
    cout<<endl;
    //Bubble sort
    bubblesort(arr,size);
    printarray(arr,size);
    cout<<endl;
    int arr1[]={10,9,8,7,6,5,4,3,2,1};
    int size1=sizeof(arr)/sizeof(arr[0]);
    printarray(arr1,size1);
    cout<<endl;
    selectionsort(arr1,size1);
    printarray(arr1,size1);
    cout<<endl;
    int arr2[]={10,9,8,7,6,5,4,3,2,1};
    int size2=sizeof(arr2)/sizeof(arr2[0]);
    printarray(arr2,size2);
    cout<<endl;
    mergesort(arr2,0,size2-1);
    printarray(arr2,size2);
    cout<<endl;
    
}