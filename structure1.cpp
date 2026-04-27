#include<bits/stdc++.h>
using namespace std;
void ifsorted(int * ptr,int size)
{
    for(int i=0;i<size-1;i++)
    {
        if(ptr[i]>ptr[i+1]){
        cout<<"Not Sorted";
        return ;
        }

    }
    cout<<"Sorted";
}
int main()
{
    int arr[]={1,2,3,4,5,6,7,8,110,10};
    int size=sizeof(arr)/sizeof(arr[0]);
    int arr2[]={10,9,8,7,6,5,4,3,2,1};
    int size2=sizeof(arr2)/sizeof(arr2[0]);
    cout<<endl;
    ifsorted(arr,size);
    cout<<endl;
    ifsorted(arr2,size2);
    return 0;
}