#include<bits/stdc++.h>
using namespace std;
void printarray(int * ptr,int size)
{
    for(int i=0;i<size;i++)
    {
        cout<<ptr[i]<<" ";
    }
}
void bubblesort(int * ptr,int size)
{
    for(int i=0;i<size;i++)
    {
        for(int j=0;j<size-i-1;j++)
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
void selectionsort(int * ptr,int size)
{
    for(int i=0;i<size;i++)
    {
        int max_index=0;
        int flag=0;
        for(int j=0;j<size-i;j++)
        {
            if(ptr[j]>ptr[max_index])
            {
            max_index=j;
            flag++;
            }
        }
        if(flag!=0)
        {
            int temp=ptr[size-i-1];
            ptr[size-i-1]=ptr[max_index];
            ptr[max_index]=temp;
        }
    }
}
int main()
{
    int arr[]={10,9,8,7,6,5,4,3,2,1};
    int size=sizeof(arr)/sizeof(arr[0]);
    printarray(arr,size);
    cout<<endl;
    bubblesort(arr,size);
    printarray(arr,size);
    cout<<endl;
    int arr1[]={10,9,8,7,6,5,4,3,2,1};
    int size1=sizeof(arr1)/sizeof(arr1[0]);
    printarray(arr1,size1);
    selectionsort(arr,size);
    cout<<endl;
    printarray(arr,size);
}