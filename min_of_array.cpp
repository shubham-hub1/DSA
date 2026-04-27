#include<iostream>
using namespace std;
int min_of_array(int arr[],int size)
{
    int min=INT_MAX;
    for(int i=0;i<size;i++)
    {
        if(arr[i]<min)
        min=arr[i];
    }
    return min;
}
int main()
{
    int arr[]={1,2,3,4,5,6,7,8,9,10};
    int size=sizeof(arr)/sizeof(arr[0]);
    int min=min_of_array(arr,size);
    cout<<"The min of the array is->"<<min;
    return 0;
}