#include<bits/stdc++.h>
using namespace std;
int binarysearch(int * ptr,int low,int high,int key)
{
    while(low<=high)
    {
        int mid=(low+high)/2;
        if(ptr[mid]==key)
        {
            while(mid>0 && ptr[mid]==ptr[mid-1])
            {
                mid--;
            }
            return mid;
        }
        else if(ptr[mid]>key)
        return binarysearch(ptr,low,mid-1,key);
        else if(ptr[mid]<key)
        return binarysearch(ptr,mid+1,high,key);
    }
    return -1;
}
int main()
{
    int arr[]={1,1,1,1,1,1,2,2,2,2,3,3,3,4,5,6,6,7,7,7,7};
    int size =sizeof(arr)/sizeof(arr[0]);
    cout<<"Enter the element that you want to find out";
    cout<<endl;
    int key;
    cin>>key;
    int result=binarysearch(arr,0,size-1,key);
    if(result==-1)
    cout<<"Element not found";
    else
    cout<<"Element found at index->"<<result;
}