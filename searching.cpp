#include<bits/stdc++.h>
using namespace std;
int  linearsearch(int * ptr,int size,int key)
{
    for(int i=0;i<size;i++)
    {
        if(ptr[i]==key)
        return i;
    }
    return-1;
}
int binarysearch(int * ptr,int size,int key)
{
    int low=0;
    int high=size-1;
    while(low<=high)
    {
        int mid=(low+high)/2;
        if(ptr[mid]==key)
        return mid;
        else if(ptr[mid]>key)
        high=mid-1;
        else if(ptr[mid]<key)
        low=mid+1;
    }
    return -1;
}
int main()
{
    int arr[]={1,2,3,4,5,6,7,8,9,10};
    int size=sizeof(arr)/sizeof(arr[0]);
    cout<<endl;
    cout<<"Enter the element that you want to find in array";
    cout<<endl;
    int key;
    cin>>key;
    int result=linearsearch(arr,size,key);
    if(result==-1)
    cout<<"Element not found"<<endl;
    else
    {
        cout<<"Element found at index->"<<result;
    }
    cout<<endl;
    int array[]={1,2,3,4,5,6,7,8,9,10};
    cout<<endl;
    int key1;
    cout<<"Enter the element to find out";
    cout<<endl;
    cin>>key1;
    cout<<endl;
    int result1=binarysearch(arr,size,key1);
    if(result1==-1)
    cout<<"Element not found";
    else
    cout<<"Element found at index->"<<result1;
}