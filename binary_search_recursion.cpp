#include<bits/stdc++.h>
using namespace std;
int binarysearch(int * ptr,int low,int high,int key)
{ 
    while(low<=high)
    {
        int mid=(low+high)/2;
        if(ptr[mid]==key)
        return mid;
        else if(ptr[mid]>key)
        return binarysearch(ptr,low,mid-1,key);
        else if(ptr[mid]<key)
        return binarysearch(ptr,mid+1,high,key);

    }
    return -1;

}
int main()
{
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    int size=sizeof(arr)/sizeof(arr[0]);
    cout<<"Enter the number you want to find out"<<endl;
    int key;
    cin>>key;
    int result=binarysearch(arr,0,size-1,key);
    if(result==-1)
    cout<<"Element not found";
    else
    cout<<"Element found at index->"<<result;
}