#include<iostream>
#include<vector>
using namespace std;
void printarray(int * ptr,int size)
{
    for(int i=0;i<size;i++)
    cout<<ptr[i]<<" ";
}
void swap(int * ptr,int source,int target)
{
    int temp=ptr[target];
    ptr[target]=ptr[source];
    ptr[source]=temp;
}
void selectionsort(int * ptr,int size)
{
    for(int i=0;i<size;i++)
    {
        int max_index=0;
        for(int j=1;j<size-i;j++)
        {
            if(ptr[j]>ptr[max_index])
            max_index=j;
        }
        swap(ptr,max_index,size-i-1);
    }

}
int main()
{
    int arr[]={10,9,8,7,6,5,4,3,2,1};
    int size=sizeof(arr)/sizeof(arr[0]);
    printarray(arr,size);
    cout<<endl;
    selectionsort(arr,size);
    printarray(arr,size);
}