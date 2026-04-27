#include<iostream>
using namespace std;
int secondmax
int main()
{
    int arr[]={1,1,1,1,1,2,2,2,2,2,2,3,3,3,3,3,3,3,3,3,4,5,6,7,8,9,10};
    int size=sizeof(arr)/sizeof(arr[0]);
    int result=secondmax(arr,size);
    if(result==-1)
    cout<<"There is no second max";
    else
    cout<<"The second max is->"<<result;
    return 0;
}