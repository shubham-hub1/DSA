#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void printarray(int * ptr,int size)
{
    for(int i=0;i<size;i++)
    cout<<ptr[i]<<" ";
}
int linearsearch(int * ptr,int key,int size)
{
    for(int i=0;i<size;i++)
    {
        if(ptr[i]==key)
        return i;
    }
    return -1;
}
int binarysearch(int * ptr,int size,int key)
{
    int low=0;
    int high=size-1;
    while(low<=high)
    {
        int mid=(low+high)/2;
        if(ptr[mid]==key)
        {
            while(mid>0 && ptr[mid]==ptr[mid-1])
            mid--;
            return mid;
        }
       
        else if(ptr[mid]>key)
        high=mid-1;
        else 
        low=mid+1;
    }
    return -1;
}
int binary_search_rec(int * ptr,int low,int high,int key)
{
    if(low>high)
    return -1;
    else{
        int mid=(low+high)/2;
        if(ptr[mid]==key)
        { 
            while(mid>0&&ptr[mid]==ptr[mid-1])
               mid--;
            return mid;
        }
        else if(ptr[mid]>key)
        return binary_search_rec(ptr,low,mid-1,key);
        else if(ptr[mid]<key)
        return binary_search_rec(ptr,mid+1,high,key);
    }
}
int main()
{
    int arr[]={1,2,3,4,5,6,7,8,9,10};
    int size=sizeof(arr)/sizeof(arr[0]);
    printarray(arr,size);
    cout<<endl;
    cout<<"Enter the element that you want to find out->";
    int keyls;
    cin>>keyls;
    int resultls=linearsearch(arr,keyls,size);
    if(resultls==-1)
    cout<<"Element not found";
    else
    cout<<"Element found at index->"<<resultls;
    cout<<endl;
    cout<<"Enter the element that you want to find out using binary search";
    int keybs;
    cin>>keybs;
    int resultbs=binarysearch(arr,size,keybs);
    if(resultbs==-1)
    cout<<"Element not present"<<endl;
    else
    cout<<"Element found at index->"<<resultbs;
    cout<<endl;
    //Binary search using recursion
    cout<<"Enter the element that you want to find out using binary search using recursion";
    int keybsr;
    cin>>keybsr;
    int resultbsr=binary_search_rec(arr,0,size-1,keybsr);
    if(resultbsr==-1)
    cout<<"Element not found";
    else
    cout<<"Element found at index-"<<resultbsr;
    cout<<endl;


}