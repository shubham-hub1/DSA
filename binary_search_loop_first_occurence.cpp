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
        { while(mid>0&&ptr[mid]==ptr[mid-1])
            {
                mid--;
            }
            return mid;
        }
        else if(ptr[mid]>key)
        high=mid-1;
        else if(ptr[mid]<key)
        low=mid+1;
    }
    return -1;
}
int main()
{
int arr[]={1,2,2,2,3,3,4,4,4,5,5,5,6,6,7,8,8,8,9,9,10,10,10,10};
int size=sizeof(arr)/sizeof(arr[0]);
cout<<"Enter the element that you want to find out"<<endl;
int key;
cin>>key;
int result=binarysearch(arr,size,key);
if(result==-1)
cout<<"Element not found"<<endl;
else
cout<<"Element found at index->"<<result<<endl;


}