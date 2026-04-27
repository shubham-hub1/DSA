#include<iostream>
using namespace std;
int max_of_array(int arr[],int size)
{
    int max=INT_MIN;
    for(int i=0;i<size;i++)
    {
        if(arr[i]>max)
        max=arr[i];
    }
    return max;
}
int main()
{
    int arr[]={1,2,3,4,5,6,7,8,9,10};
    int size=sizeof(arr)/sizeof(arr[0]);
    int max=max_of_array(arr,size);
    cout<<"The max of the array is->"<<max;
    return 0;
}