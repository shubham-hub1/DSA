#include<bits/stdc++.h>
using namespace std;
void printarray(int * ptr,int size)
{
    for(int i=0;i<size;i++)
    cout<<ptr[i]<<" ";

}
void swap(int arr[],int source,int target)
{
    int temp=arr[target];
    arr[target]=arr[source];
    arr[source]=temp;
}
void selectionsort(int * ptr,int size)
{
    for(int i=0;i<size;i++)
    {
        int maxindex=0;
        for(int j=1;j<size-i;j++)
        {
            if(ptr[j]>ptr[maxindex])
            maxindex=j;
        }
        swap(ptr,maxindex,size-1-i);
    }
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
void merge(int arr[],int low,int mid,int high)
{  vector<int> v;
    int i=low;
    int j=mid+1;
    while(i<=mid&&j<=high)
    {
        if(arr[i]<arr[j]){
        v.push_back(arr[i]);
        i++;
        }
        else
        {
            v.push_back(arr[j]);
            j++;
        }
    }
    while(i<=mid)
    {
        v.push_back(arr[i]);
        i++;
    }
    while(j<=high)
    {
        v.push_back(v[j]);
        j++;
    }
    for(int k=low;k<=high;k++)
    arr[k]=v[k-low];
}
void mergesort(int arr[],int low,int high)
{
    if(low>=high)
    return ;
    else
    {
        int mid=(low+high)/2;
        mergesort(arr,low,mid);
        mergesort(arr,mid+1,high);
        merge(arr,low,mid,high);
    }
}
void insertionsort(int arr[],int size)
{
    for(int i=0;i<size;i++)
    {
        int pivot=arr[i];
        int j=0;
        while(j>=0&&j<=size-1)
        {
            if(arr[i]>arr[j]);
            swap(arr,i,j);
            
        }
    }
}
int main()
{
    int arr[]={10,9,8,7,6,5,4,3,2,1};
    int size=sizeof(arr)/sizeof(arr[0]);
    printarray(arr,size);
    cout<<endl;
    //bubblesort
    bubblesort(arr,size);
    printarray(arr,size);
    cout<<endl;
    int arr2[]={10,9,8,7,6,5,4,3,2,1};
    int size2=sizeof(arr2)/sizeof(arr2[0]);
    printarray(arr2,size2);
    cout<<endl;
    selectionsort(arr2,size2);
    printarray(arr2,size2);
    //mergesort
    cout<<endl;
    int arr3[]={110,9,8,7,6,5,4,3,2,1};
    int size3=sizeof(arr3)/sizeof(arr3[0]);
    printarray(arr3,size3);
    mergesort(arr3,0,size-1);
    cout<<endl;
    printarray(arr3,size3);
    cout<<endl;
    int arr4[]={10,9,8,7,6,5,4,3,2,1};
    int size4=sizeof(arr4)/sizeof(arr4[0]);
    printarray(arr4,size4);
    cout<<endl;
    insertionsort(arr4,size4);
    printarray(arr4,size4);

}