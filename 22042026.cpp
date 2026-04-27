#include<iostream>
using namespace std;
int sortedcheck(int arr[],int size)
{
    for(int i=0;i<size-1;i++)
    {
        if(arr[i]>arr[i+1])
        return -1;
    }
    return 1;
}
void printarray(int arr[],int size)
{
    for(int i=0;i<size;i++)
    cout<<arr[i]<<" ";
}
int maxofarray(int arr[],int size)
{
    int maxvalue=INT_MIN;
    for(int i=0;i<size;i++)
    {
        if(arr[i]>maxvalue)
        maxvalue=arr[i];

    }
    return maxvalue;
}
int minofarray(int arr[],int size)
{
    int minvalue=INT_MAX;
    for(int i=0;i<size;i++)
    {
        if(arr[i]<minvalue)
        minvalue=arr[i];
    }
    return minvalue;
}
int main()
{
    int arr[]={1,2,3,4,5,6,7,8,9,10};
    int size=sizeof(arr)/sizeof(arr[0]);
    printarray(arr,size);
    cout<<endl;
    int max_of_array=maxofarray(arr,size);
    cout<<"Max of the array is-"<<max_of_array;
    cout<<endl;
    int min_of_array=minofarray(arr,size);
    cout<<"The min of the array->"<<min_of_array;
    cout<<endl;
    //Checck whether the array is sorted;
    int sortedarray=sortedcheck(arr,size);
    if(sortedarray==-1)
    cout<<"Array is not sorted";
    else
 cout<<"Array  is sorted";
 int arr1[]={6,7,8,9,10,3,4,5,};
 int size1=sizeof(arr1)/sizeof(arr1[0]);
 cout<<endl;
 int sortedarray1=sortedcheck(arr1,size1);
 if(sortedarray1==-1)
 cout<<"Array is not sorted";
 else
 cout<<"Array is sorted";
 cout<<endl;
 


}