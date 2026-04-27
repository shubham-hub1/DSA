#include<bits/stdc++.h>
using namespace std;
void printarray(int * ptr,int size)
{
    for(int i=0;i<size;i++)
    cout<<ptr[i]<<" ";
}
int max_of_array(int arr[],int size)
{
    int max=arr[0];
    for(int i=1;i<size;i++)
    {
        if(arr[i]>max)
        max=arr[i];

    }
    return max;
}
int second_max(int arr[],int size)
{
    int max=arr[0];
    for(int i=1;i<size;i++)
    {
        if(arr[i]>max)
        max=arr[i];
    }
    int second_max=-1;
    for(int j=0;j<size;j++)
    {
        if(arr[j]>second_max&&arr[j]!=max)
        second_max=arr[j];
    }
    return second_max;
}
int third_largest(int arr[],int size)
{
    int max=arr[0];
    int second_max=-1;
    int third_max=-1;
    for(int i=0;i<size;i++)
    {
        if(arr[i]>max)
        max=arr[i];
    }
    for(int j=0;j<size;j++)
    {
        if(arr[j]>second_max&&arr[j]!=max)
        second_max=arr[j];
    }
    if(second_max!=-1)
    {
        for(int k=0;k<size;k++)
        {
            if(arr[k]>third_max&&arr[k]!=second_max&&arr[k]!=max)
            third_max=arr[k];
        }
    }
    return third_max;
}
int main()
{
    int arr[]={1,2,3,4,5,6,7,8,9,10};
    int size=sizeof(arr)/sizeof(arr[0]);
    printarray(arr,size);
    cout<<endl;
    int max_element=max_of_array(arr,size);
    cout<<"The max of an array->"<<max_element;
    cout<<endl;
    int arr2[]={1,1,1,2,2,2,2,2,3,3,3,4,4,5,5,5,6,6,7,7,8,8,9,9,10,10};
    int size2=sizeof(arr2)/sizeof(arr2[0]);
    cout<<endl;
    printarray(arr2,size2);
    cout<<endl;
    int second_max_element=second_max(arr2,size2);
    cout<<"The second largest element is->"<<second_max_element;
    cout<<endl;
    int third_largest_element=third_largest(arr2,size2);
    if(third_largest_element==-1)
    cout<<"Element not found";
    else
    cout<<"The third largest element is->"<<third_largest_element;
    cout<<endl;
}