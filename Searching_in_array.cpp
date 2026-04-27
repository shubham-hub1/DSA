#include<iostream>
using namespace std;
int linearsearch(int * ptr,int size,int key)
{
    for(int i=0;i<size;i++)
    {
        if(ptr[i]==key)
        return i;
    }
    return -1;
}
int binarysearch(int arr[],int low,int high,int key)
{
    if(low>high)
    return -1;
    else{
        while(low<=high)
        {
            int mid=(low+high)/2;
            if(arr[mid]==key)
            {
                while(mid>0&&arr[mid]==arr[mid-1])
                {
                    mid--;
                }
                return mid;
            }
            else if(arr[mid]>key)
            high=mid-1;
            else if(arr[mid]<key)
            low=mid+1;
        }
        return -1;
    }
}
int binarysearch1(int * ptr,int size)
{
    int low=0;
    int high
}
int main()
{
    int arr1[]={1,2,3,4,5,6,7,8,9,10};
    int size1=sizeof(arr1)/sizeof(arr1[0]);
    cout<<"Enter the element that you want to find out"<<endl;
    int key1;
    cin>>key1;
    int result=linearsearch(arr1,size1,key1);
    if(result==-1)
    cout<<"Element not found"<<endl;
    else
    cout<<"Element found at index->"<<result<<endl;
    int arr2[]={1,2,3,4,5,6,7,8,9,10};
    int size2=sizeof(arr2)/sizeof(arr2[0]);
    cout<<"Enter the element that you want to find out->"<<endl;
    int key2;
    cin>>key2;
    int result2=binarysearch(arr2,0,size2-1,key2);
    if(result2==-1)
    cout<<"Element not found"<<endl;
    else
    cout<<"Element found at index->"<<result2<<endl;
    int arr3[]={1,2,3,4,5,6,77,8,9,9,9,9};
    int size3=sizeof(arr3)/sizeof(arr3[0]);
    int result3=binarysearch1(arr3,size3);
    if(result3==-1)
    cout<<"Element not found"<<endl;
    else
    cout<<"Element found at index->"<<result3<<endl;

}