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
            if(ptr[j]>ptr[j+1])
            {
                int temp=ptr[j+1];
                ptr[j+1]=ptr[j];
                ptr[j]=temp;
            }
        }
    }
}
void selectionsort(int * ptr,int size)
{
    for(int i=0;i<size;i++)
    {
        int max_index=0;
        for(int j=0;j<size-i;j++)
        {
            if(ptr[j]>ptr[max_index])
            max_index=j;
        }
        int temp=ptr[size-1-i];
        ptr[size-i-1]=ptr[max_index];
        ptr[max_index]=temp;
    }
} 
void merge(int arr[],int low,int mid,int high)
{
    vector<int> v;
    int i=low;
    int j=mid+1;
    while(i<=mid&&j<=high)
    {
        if(arr[i]<=arr[j])
        {
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
            v.push_back(arr[j]);
            j++;
        }
        for(int k=low;k<=high;k++)
        arr[k]=v[k-low];
    
}
void mergesort(int arr[],int low,int high)
{
    if(low==high)
    return ;
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
    bubblesort(arr,size);
    printarray(arr,size);
    cout<<endl;
    int arr2[]={10,9,8,7,6,5,4,3,2,1};
    int size2=sizeof(arr2)/sizeof(arr2[0]);
    printarray(arr2,size2);
    selectionsort(arr2,size2);
    cout<<endl;
    printarray(arr2,size2);
    int arr3[]={10,9,8,7,6,5,4,3,2,1};
    int size3=sizeof(arr3)/sizeof(arr3[0]);
    cout<<endl;
    printarray(arr3,size3);
    mergesort(arr3,0,size3-1);
    cout<<endl;
    printarray(arr3,size3);


}