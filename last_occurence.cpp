#include<iostream>
using namespace std;
int lastbs(int arr[],int size,int key)
{
    int low=0;
    int high=size-1;
    while(low<=high)
    {
        int mid=(low+high)/2;
        if(arr[mid]==key)
        {
            while(mid<size-1&&arr[mid]==arr[mid+1])
            mid++;
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
    cout<<"Enter the element that you want to find out->";
    cout<<endl;
    int key;
    cin>>key;
    int result=lastbs(arr,size,key);
    if(result==-1)
    cout<<"Element npt found";
    else
    cout<<"Element found at index->"<<result;
}