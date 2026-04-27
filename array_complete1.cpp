#include<bits/stdc++.h>
using namespace std;
void initiliaze_arry(int * ptr,int size)
{
    for(int i=0;i<size;i++)
    cin>>ptr[i];
}
void printarray(int * ptr,int size)
{
    for(int i=0;i<size;i++)
    cout<<ptr[i]<<" ";
}
int linearsearch(int * ptr,int size,int key)
{
    for(int i=0;i<size;i++)
    {
        if(ptr[i]==key)
        return i;
    }
    return -1;
}
int binarysearch_rec(int * ptr,int low,int high,int key)
{
    if(low>high)
    return -1;
    int mid=(low+high)/2;
    if(ptr[mid]==key)
    return mid;
    else if(ptr[mid]>key)
    return binarysearch_rec(ptr,low,mid-1,key);
    else if(ptr[mid]<key)
    return binarysearch_rec(ptr,mid+1,high,key);
    else
    return -1;
}
int binarysearch_loop(int * ptr,int size,int key)
{
    int low=0;
    int high=size-1;
    if(low>high)
    return -1;
    else
    {
        while(low<=high)
        {
            int mid=(low+high)/2;
            if(ptr[mid]==key)
            return mid;
            else if(ptr[mid]>key)
            high=mid-1;
            else
            low=mid+1;
        }
    }
}
int binarysearchfo(int * ptr,int size,int key)
{
    int low=0;
    int high = size-1;
    while(low<=high)
    {
        int mid=(low+high)/2;
        if(ptr[mid]==key)
        {
            if(mid>0&&ptr[mid]==ptr[mid-1])
            mid--;
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
    int arr[10];
    initiliaze_arry(arr,10);
    printarray(arr,10);
    int arr1[]={1,2,3,4,5,6,7,8,9,10};
    int size1=sizeof(arr1)/sizeof(arr1[0]);
    cout<<endl;
    cout<<"Enter the element that you want to find out"<<endl;
    int keyls;
    cin>>keyls;
    int resultls=linearsearch(arr1,size1,keyls);
    if(resultls==-1)
    cout<<"Element not found";
    else
    cout<<"Element found at index->"<<resultls;
    cout<<endl;
    int arr2[]={1,2,3,4,5,6,7,8,9,10};
    int size2=sizeof(arr2)/sizeof(arr2[0]);
    cout<<"Enter the element that you want to find out->"<<endl;
    int keybs1;
    cin>>keybs1;
    int resultbs1=binarysearch_rec(arr2,0,size2-1,keybs1);//binary search using recursion
    if(resultbs1==-1)
    cout<<"Element not found";
    else
    cout<<"Element found at index->"<<resultbs1;
    cout<<endl;
    int arr3[]={1,2,3,4,5,6,7,8,9,10};
    int size3=sizeof(arr3)/sizeof(arr3[0]);
    cout<<"Enter the element that you want to find->"<<endl;
    int keybs3;
    cin>>keybs3;
    int resultbs2=binarysearch_loop(arr3,size3,keybs3);
    if(resultbs2==-1)
    cout<<"Element not found";
    else
    cout<<"Element found at index->"<<resultbs2;
    cout<<endl;
    int arr4[]={1,1,1,1,1,1,1,1,2,2,2,2,2,2,2,2,2,2,2,2,3,3,3,3,3,4,4,4,4,4,5,5,5,5,5,5,5,5,6,7,8,9,10};
    int size4=sizeof(arr3)/sizeof(arr3[0]);
    cout<<"Enter the element that you want to find out"<<endl;
    int keyfo;
    cin>>keyfo;
    int resultfo=binarysearchfo(arr4,size4,keyfo);
    if(resultfo==-1)
    cout<<"Element not found";
    else
    cout<<"Element found at index->"<<resultfo;
}