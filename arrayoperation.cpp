#include<bits/stdc++.h>
using namespace std;
void printarray(int * ptr,int size)
{
    for(int i=0;i<size;i++)
    cout<<ptr[i]<<" ";
}

int max_of_array(int * ptr,int size)
{
    int max=INT_MIN;
    for(int i=0;i<size;i++)
    {
        if(ptr[i]>max)
        max=ptr[i];
    }
    return max;
}
int secondmax(int * ptr,int size)
{
    int second_max=-1;
    int max=max_of_array(ptr,size);
    for(int i=0;i<size;i++)
    {
        if(ptr[i]>second_max&&ptr[i]!=max)
        second_max=ptr[i];
    }
    return second_max;
}
int thirdmax(int * ptr,int size)
{
    int third_max=-1;
    int max=max_of_array(ptr,size);
    int second=secondmax(ptr,size);
    if(second==-1)
    return -1;
    else{
        for(int i=0;i<size;i++)
        {
            if(ptr[i]>third_max&&ptr[i]!=second&&ptr[i]!=max&&ptr[i]<second&&ptr[i]<max)
            third_max=ptr[i];
        }
        return third_max;
    }
}
int main()
{
    int arr[]={1,2,3,4,5,6,7,8,9,10};
    int size=sizeof(arr)/sizeof(arr[0]);
    printarray(arr,size);
    cout<<endl;
    int max=max_of_array(arr,size);
    cout<<"The max of the array->"<<max;
    cout<<endl;
    int seccond_max=secondmax(arr,size);
    if(seccond_max==-1)
    cout<<"There is no second max";
    else
    cout<<"Second max of the array->"<<seccond_max;
    cout<<endl;
    int third_max=thirdmax(arr,size);
    if(third_max==-1)
    cout<<"There is no third max";
    else
    cout<<"The third max is->"<<third_max;
    cout<<endl;
}