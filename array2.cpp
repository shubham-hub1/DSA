#include<bits/stdc++.h>
using namespace std;
int binarysearch(int * ptr,int size,int key)
{
    int low=0;
    int high=size-1;
    while(low<=high)
    {
        int mid=(low+high)/2;
        if(ptr[mid]==key)
        {
            while(mid>0&&ptr[mid]==ptr[mid-1])
            {
                --mid;
            }
            return mid;
        }
        else if(ptr[mid]>key)
        high=mid-1;
        else if(ptr[mid]<key)
        low=mid+1;
    }
    return -1;
}
int main()
{
    int array[]={1,1,1,2,2,2,2,2,2,3,3,3,3,3,4,4,5,5,6,7};
    int size=sizeof(array)/sizeof(array[0]);
    cout<<endl;
    cout<<"Enter the element that you want to found ";
    int key;
    cin>>key;
    cout<<endl;
    int result=binarysearch(array,size,key);
    if(result==-1)
    cout<<"Element not found";
    else
    cout<<"Element found at index->"<<result;

}