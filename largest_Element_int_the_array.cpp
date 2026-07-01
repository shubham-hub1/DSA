#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int largest_of_array(int arr[],int size)
{
    int maxvalue=arr[0];
    for(int i=1;i<size;i++)
    {
        if(arr[i]>maxvalue)
        maxvalue=arr[i];
    }
    return maxvalue;
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
    if(low>=high)
    return;
    else{
        int mid=(low+high)/2;
        mergesort(arr,low,mid);
        mergesort(arr,mid+1,high);
        merge(arr,low,mid,high);
    }
}
int usingsorting(int arr[],int size){
    mergesort(arr,0,size-1);
    return arr[size-1];
}
int upq(int arr[],int size){
    priority_queue<int> pqs;
    for(int i=0;i<size;i++)
    {
        pqs.push(arr[i]);
    }
    return pqs.top();

}
int setway(int arr[],int size)
{
    
}
int main(){
    int arr[]={1,2,3,4,5,6,7,8,9,10};
    int size=sizeof(arr)/sizeof(arr[0]);
    int larget=largest_of_array(arr,size);
    int result=usingsorting(arr,size);
    cout<<"The largest element in the array is->"<<larget;
    cout<<endl;
    cout<<"The largest element in the linked list->"<<result;
    cout<<endl;
    //Another creative way
    int result1=upq(arr,size);
    cout<<"The largest element in the array is->"<<result1;
    cout<<endl;
    //Another way to get the largest element in the array
    int result2=setway(arr,size);
    cout<<"The largest element in the array is->"<<result2;
    cout<<endl;
}