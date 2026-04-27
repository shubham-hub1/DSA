#include<bits/stdc++.h>
using namespace std;
int binarysearch(int * ptr,int size,int key)
{
    int low=0;
    int high=size-1;
    if(low>high)
    return -1;
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
    cout<<"Eneter the element that you want to find out"<<endl;
    int key;
    cin>>key;
    int result=binarysearch(arr,size,key);
    if(result==-1)
    cout<<"Element not found";
    else
    cout<<"Element found at index->"<<result;
    cout<<endl;
}