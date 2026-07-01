#include<iostream>
using namespace std;
void printarray(int arr[],int size)
{
    for(int i=0;i<size;i++)
    cout<<arr[i]<<" ";
}
int max_of_array(int arr[],int size)
{
    int maxvalue=INT_MIN;
    for(int i=0;i<size;i++)
    {
        if(arr[i]>maxvalue)
        maxvalue=arr[i];
    }
    return maxvalue;
}
int second_max_of_array(int arr[],int size)
 {
    int secondmax=INT_MIN;
    int maxvalue=max_of_array(arr,size); 
    for(int i=0;i<size;i++)
    {
        if(arr[i]>secondmax && arr[i]<maxvalue)
        secondmax=arr[i];
    }
    return secondmax;
 }
 int min_of_array(int arr[],int size)
 {
    int minvalue=INT_MAX;
    for(int i=0;i<size;i++)
    {
        if(arr[i]<minvalue)
        minvalue=arr[i];
    }
    return minvalue;
 }
 int second_min_of_array(int arr[],int size){
    int secondmin=INT_MAX;
    int minvalue=min_of_array(arr,size);
    for(int i=0;i<size;i++)
    {
        if(arr[i]<secondmin && arr[i]>minvalue)
        secondmin=arr[i];
    }
    return secondmin;
 }
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
        return mid;
        else if(arr[mid]>key)
        high=mid-1;
        else
        low=mid+1;
    }
    return -1;
 }
 int binarysearch2(int arr[],int low,int high,int key)
 {
    if(low>high)
    return -1;
    else{
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
 void reverse(int arr[],int size)
 {
    int low=0;
    int high=size-1;
    while(low<=high)
    {
        int temp=arr[low];
        arr[low]=arr[high];
        arr[high]=temp;
        low++;
        high--;
    }
 }
int main()
{
    int arr[]={1,2,3,4,5,6,7,8,9,10};
    int size=sizeof(arr)/sizeof(arr[0]);
    printarray(arr,size);
    cout<<endl;
    int maxvalue=max_of_array(arr,size);
    cout<<"The max of the array is->"<<maxvalue;
    cout<<endl;
    int secondmax=second_max_of_array(arr,size);
    cout<<"The second max of the array is->"<<secondmax;
    cout<<endl;
    int minvalue=min_of_array(arr,size);
    cout<<"The min of the array is->"<<minvalue;
    cout<<endl;
    int secondmin=second_min_of_array(arr,size);
    cout<<"The second min of the array is->"<<secondmin;
    cout<<endl;
    cout<<"Enter the element that you want to find out->"<<endl;
    int key;
    cin>>key;
    int result=linearsearch(arr,size,key);
    if(result==-1)
    cout<<"Element not present in the array";
    else
    cout<<"Element present in the array at index->"<<result;
    cout<<endl;
    //Doing the same in the binary search
    int result2=binarysearch1(arr,size,key);
    if(result2==-1)
    cout<<"Element not present in the array";
    else
    cout<<"Element is present in the array-> at index->"<<result2;
    cout<<endl;
    int result3=binarysearch2(arr,0,size-1,key);
    if(result3==-1)
    cout<<"Element not present";
    else
    cout<<"Element present in the index->"<<result3;
    cout<<endl;
    cout<<"After reversal of the array is->"<<endl;
    reverse(arr,size);
    printarray(arr,size);
    



}