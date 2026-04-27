#include<bits/stdc++.h>
using namespace std;
void printarray(int * ptr,int size)
{
    for(int i=0;i<size;i++)
    cout<<ptr[i]<<" ";
}
void bubblesort(int * ptr,int size)
{
    for(int i=0;i<size;i++)
    {
        for(int j=0;j<size-1-i;j++)
        {
            if(ptr[j]>ptr[j+1])
            {
                int temp=ptr[j+1];
                ptr[j+1]=ptr[j];
                ptr[j]=temp;
            }
        }
    }
}
int main()
{
    int arr[]={10,9,8,7,6,5,4,3,2,1};
    int size =sizeof(arr)/sizeof(arr[0]);
    printarray(arr,size);
    cout<<endl;
    bubblesort(arr,size);
    printarray(arr,size);
}