#include<bits/stdc++.h>
using namespace std;
void printarray(int * ptr,int size)
{
    for(int i=0;i<size;i++)
    {
        cout<<ptr[i]<<" ";
    }
}
void bubblesort(int arr[],int size)
{
    for(int i=0;i<size;i++)
    {
        for(int j=0;j<size-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                int temp=arr[j+1];
                arr[j+1]=arr[j];
                arr[j]=temp;
            }
        }
    }
}
void selectionsort(int arr[],int size)
{
    for(int i=0;i<size;i++)
    {
        int maxindex=0;
        for(int j=1;j<size-i;j++)
        {
            if(arr[j]>arr[maxindex])
            maxindex=j;
        }
        int temp=arr[size-i-1];
        arr[size-i-1]=arr[maxindex];
        arr[maxindex]=temp;
    }
}
void merge(int arr[],int low,int mid,int high)
{ vector<int> v;
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
    {v.push_back(arr[i]);
        i++;
        
    }
    while(j<=high)
    {
        v.push_back(arr[j]);
        j++;
    }
    
    for(int k=low;k<=high;k++)
    arr[k]=v[k];

}
void mergesort(int arr[],int low,int high)
{ 
    if(low>=high)
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
 int arr[] ={10,9,8,7,6,5,4,3,2,1};
 int size1=sizeof(arr)/sizeof(arr[0]);
 printarray(arr,size1);
 cout<<endl;
 bubblesort(arr,size1);  
 printarray(arr,size1);
 cout<<endl;
 int arr1[] ={10,9,8,7,6,5,4,3,2,1};
 int size2=sizeof(arr1)/sizeof(arr1[0]);
 printarray(arr1,size2);
 cout<<endl;
 selectionsort(arr1,size2);
 printarray(arr1,size2);
 cout<<endl;
 int arr3[]={10,9,8,7,6,5,4,3,2,1};
 int size3=sizeof(arr3)/sizeof(arr3[0]);
 printarray(arr3,size3);
 cout<<endl;
//  mergesort(arr3,0,size3-1);
//  printarray(arr3,size3);
//  cout<<endl;

}