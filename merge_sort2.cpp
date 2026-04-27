#include<iostream>
#include<vector>
using namespace std;
void printarray(int * ptr,int size)
{
    for(int i=0;i<size;i++)
    cout<<ptr[i]<<" ";

}
void merge(int * ptr,int low,int mid,int high)
{  vector<int> v;
    int i=low;
    int j=mid+1;
    while(i<=mid&&j<=high)
    { 
        if(ptr[i]<ptr[j])
        {
            v.push_back(ptr[i]);
            i++;
        }
        else{
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
    if(low>=high)
    return;
    int mid=(low+high)/2;
    mergesort(ptr,low,mid);
    mergesort(ptr,mid+1,high);
    merge(ptr,low,mid,high);
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