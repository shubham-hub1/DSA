#include<iostream>
using namespace std;
int binarysearch(int arr[],int low,int high,int key)
{
    int mid=(low+high)/2;
    if(arr[mid]==key)
    return mid;
    else if(arr[mid]>key)
     return binarysearch(arr,low,mid-1,key);
     else
     return binarysearch(arr,mid+1,high,key);

}
int main()
{
    int arr[]={1,2,3,4,5,6,7,8,9,10};
    int size=sizeof(arr)/sizeof(arr[0]);
    cout<<"Enter the element that you want to find out->";
    int key;
    cin>>key;
    int result=binarysearch(arr,0,size-1,key);
    if(result==-1)
    cout<<"Element not found";
    else
    cout<<"Element found at index->"<<result;

}
   