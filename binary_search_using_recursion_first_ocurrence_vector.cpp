#include<iostream>
using namespace std;
int binarysearch(int * ptr,int low,int high,int key)
{
 if(low>high)
 return -1;
 else
 {
    int mid=(low+high)/2;
    if(ptr[mid]==key)
    {
        while(mid>0&&ptr[mid]==ptr[mid-1])
        mid--;
        return mid;
    }
    
    else if(ptr[mid]>key)
    return binarysearch(ptr,low,mid-1,key);
    else if(ptr[mid]<key)
    return binarysearch(ptr,mid+1,high,key);
 }
}
int main()
{
    int arr[]={1, 1 ,1, 1, 1, 2 ,2, 2, 2, 2, 2, 2, 3, 3 ,3, 3, 3, 4, 4, 4, 4, 5, 5, 5, 5, 5, 5 ,5, 5, 5 ,6, 6, 6, 6, 6, 6 ,6};
    int size=sizeof(arr)/sizeof(arr[0]);
    cout<<"Enter the element that you want to find out"<<endl;
    int key;
    cin>>key;
    int result=binarysearch(arr,0,size-1,key);
    if(result==-1)
    cout<<"Element not found"<<endl;
    else
    cout<<"Element found at index->"<<result<<endl;
}