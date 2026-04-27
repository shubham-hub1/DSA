#include<iostream>
using namespace std;
int binarysearch(int arr[],int size,int key)
{
    int low=0;
    int high=size-1;
    while(low<=high)
    {
        int mid=(low+high)/2;
        if(arr[mid]==key)
        {
            while(mid>0&&arr[mid]==arr[mid-1])
            mid--;
            return mid;
        }
        else if(arr[mid]>key)
        high=mid-1;
        else
        low=mid+1;
    }
    return -1;
}
int main()
{
    int arr[]={1,1,1,1,1,2,2,2,2,2,2,3,3,3,3,3,3,3,3,3,4,5,6,7,8,9,10};
    int size=sizeof(arr)/sizeof(arr[0]);
    int key;
    cout<<"Enter the element that you want to find out->";
    cin>>key;
    int result=binarysearch(arr,size,key);
    cout<<"The first occurence of the element ->"<<key<<"is at index->"<<result;
    return 0;
}