#include<iostream>
using namespace std;
int linearsearch(int arr[],int size,int key)
{
for(int i=0;i<size;i++)
{
    if(arr[i]==key)
    return i;
}
return -1;

}
int binarysearch1(int arr[],int size,int key)
{
    int low=0;
    int high=size-1;
    while(low<=high)
    {
        int mid=(low+high)/2;
        if(arr[mid]==key)
        {
            // last ocuurence of the element in the array;
            while(mid<size-1 && arr[mid]==arr[mid+1])
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
int binarysearch2(int arr[],int low,int high,int key)
{ 
    while(low<=high)
    {
        int mid=(low+high)/2;
        if(arr[mid]==key)
        return mid;
        else if(arr[mid]>key)
        return binarysearch2(arr,low,mid-1,key);
        else
        return binarysearch2(arr,mid+1,high,key);
    }
    return -1;
}
int main()
{ 
    int arr[]={1,2,3,4,5,6,7,8,9,10};
    int size=sizeof(arr)/sizeof(arr[0]);
    cout<<"Enter the element taht you want to find out->"<<endl;
    int key;
    cin>>key;
    int result=linearsearch(arr,size,key);
    if(result==-1)
    cout<<"Element not present in the array";
    else
    cout<<"Element present in the array at index(0-Based index)->"<<result;
    cout<<endl;
    //Binary search with loop
    cout<<"Enter the element that you want to find out->"<<endl;
    int key1;
    cin>>key1;
    int result1=binarysearch1(arr,size,key1);
    if(result1==-1)
    cout<<"Element not present in the array";
    else
    cout<<"Element present in the array(0 based index)"<<result1;
    cout<<endl;
    //Binary search with divide and conquer
    int result2=binarysearch2(arr,0,size-1,key1);
    if(result2==-1)
    cout<<"Element not present in the array";
    else
    cout<<"Element present in the linked list->"<<result2;
    cout<<endl;

}