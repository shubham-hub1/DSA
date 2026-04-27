#include<bits/stdc++.h>
using namespace std;
void printarray(int * ptr,int size)
{
    for(int i=0;i<size;i++)
    cout<<ptr[i]<<" ";
}
void bubblesort(int * ptr,int size)
{
    for(int i=0;i<size;i++)
    {
        for(int j=0;j<size-i-1;j++)
        {
            if(ptr[j]>ptr[j+1]);
            {
                int temp=ptr[j+1];
                ptr[j+1]=ptr[j];
                ptr[j]=temp;
            }
        }
    }
}
void swap(int * ptr,int sorce ,int target)
{
    int temp=ptr[target];
    ptr[target]=ptr[sorce];
    ptr[sorce]=temp;
}
void selectionsort(int * ptr,int size)
{
    for(int i=0;i<size;i++)
    {
        int max_index=0;
        for(int j=1;j<size-i;j++)
        {
            if(ptr[j]>ptr[max_index])
            max_index=j;
        }
        swap(ptr,max_index,size-i-1);
    }
}
void merge(int * ptr,int low,int mid,int high)
{
    vector<int> v;
    int i=low;
    int j=mid+1;
    while(i<=mid&&j<=high)
    {
        if(ptr[i]<=ptr[j])
        {
            v.push_back(ptr[i]);
            i++;
        }
        else
        {
            v.push_back(ptr[j]);
            j++;
        }

    }
    while(i<=mid)
    {
        v.push_back(ptr[i]);
        i++;
    }
    while(j<=high)
    {
        v.push_back(ptr[j]);
        j++;
    }
    for(int k=low;k<=high;k++)
    ptr[k]=v[k-low];
}
void mergesort(int * ptr,int low,int high)
{
    if(low==high)
    return;
    else
    {
        int mid=(low+high)/2;
        mergesort(ptr,low,mid);
        mergesort(ptr,mid+1,high);
        merge(ptr,low,mid,high);
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
    cout<<endl;
    int arr2[]={10,9,8,7,6,5,4,3,2,1};
    int size2=sizeof(arr2)/sizeof(arr2[0]);
    printarray(arr2,size2);
    cout<<endl;
    selectionsort(arr2,size2);
    printarray(arr2,size2);
    cout<<endl;
    int arr3[]={10,9,8,7,6,5,4,3,2,1};
    int size3=sizeof(arr3)/sizeof(arr3[0]);
    printarray(arr3,size3);
    cout<<endl;
    mergesort(arr3,0,size3-1);
    printarray(arr3,size3);

}