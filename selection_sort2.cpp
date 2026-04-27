#include<iostream>
using namespace std;
void printarray(int * ptr,int size)
{
    for(int i=0;i<size;i++)
    {
        cout<<ptr[i]<<" ";
    }
    
}
void selectionsort(int * ptr,int size)
    {
        for(int i=0;i<size;i++)
        {
            int maxindex=0;
            
            for(int j=0;j<size-i;j++)
            {
                if(ptr[j]>ptr[maxindex])
                {
                    maxindex=j;
                   

                }

            }
            
            
                int temp=ptr[size-i-1];
                ptr[size-i-1]=ptr[maxindex];
                ptr[maxindex]=temp;
        
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