#include<iostream>
using namespace std;
int linearsearch(int arr[],int size,int key)
{
    for(int i=0;i<size;i++)
    {
        if(arr[i]==key)
        return i;
    }
    return -1;
    
}
int main()
{
   int arr[]= {1,2,3,4,5,6,7,8,9,10};
    int size=sizeof(arr)/sizeof(arr[0]);
    cout<<"Enter the element that you want to find->";
    int key;
    cin>>key;
    int result=linearsearch(arr,size,key);
    if(result==-1)
    cout<<"Element not found";
    else
    cout<<"Element found at index->"<<result;
}