#include<bits/stdc++.h>
using namespace std;
void merge(int arr[],int low,int mid,int high)
{   vector<int> v;
     int i=low;
    int j=mid+1;
    while(i<=mid&&j<=high)
    {
        if(arr[i]>arr[j])
        {
            v.push_back(arr[j]);
            j++;
        }
        else if(arr[i]<=arr[j])
        {
            v.push_back(arr[i]);
            i++;
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
{ cout<<'\a';
    if(low>=high)
    return ;
    else{
        int mid =(low+high)/2;
        mergesort(arr,low,mid);
        mergesort(arr,mid+1,high);
        merge(arr,low,mid,high);
    }
}
int main(){
    int arr[]={10,9,8,7,6,5,4,3,2,1};
    int size = sizeof(arr)/sizeof(arr[0]);
    mergesort(arr,0,size-1);
    for(int i=0;i<size;i++)
    cout<<arr[i]<<" ";
}