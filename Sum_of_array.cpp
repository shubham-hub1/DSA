#include<iostream>
using namespace std;
int sum_of_array(int arr[],int size)
{
    int sum=0;
    for(int i=0;i<size;i++)
    {
        sum+=arr[i];
    }
    return sum;
}
int main()
{
    int arr[]={1,2,3,4,5,6,7,8,9,10};
    int size=sizeof(arr)/sizeof(arr[0]);
   int sum=sum_of_array(arr,size);
   cout<<"The sum of the array is->"<<sum;
   return 0;
}