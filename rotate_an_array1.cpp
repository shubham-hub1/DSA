#include<iostream>
using namespace std;
void printarray(int * ptr ,int size )
{

    for(int i=0;i<size;i++)
    cout<<ptr[i]<<" ";
}
void rotatearray(int * ptr,int size)
{
    int low=0;
    int high=size-1;
    while(low<=high)
    {
        int temp=ptr[high];
        ptr[high]=ptr[low];
        ptr[low]=temp;
        low++;
        high--;
    }
}
int main()
{
    int arr[]={10,9,8,7,6,5,4,3,2,1};
    int size=sizeof(arr)/sizeof(arr[0]);
    printarray(arr,size);
    cout<<endl;
    rotatearray(arr,size);
    printarray(arr,size);
    
}