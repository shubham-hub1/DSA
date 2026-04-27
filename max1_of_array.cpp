#include<iostream>
using namespace std;
int maxofarray(int arr[],int size)
{
    int max=INT_MIN;
    for(int i=0;i<size;i++)
    {
        if(arr[i]>max)
        max=arr[i];
    }
    return max;
}
int secondmax(int arr[],int size)
{   int second_value=INT_MIN;
    int max=maxofarray(arr,size);
    for(int i=0;i<size;i++)
    {
       if(arr[i]>second_value&&arr[i]!=max&&arr[i]<max)
       second_value=arr[i];
    }
    return second_value;
}
int thirdmax(int arr[],int size)
{
    int third_value=INT_MIN;
    int second_value=secondmax(arr,size);
    if(second_value==INT_MIN)
    return third_value;
    else{
        for(int i=0;i<size;i++)
        {
            if(arr[i]>third_value&&arr[i]!=second_value&&arr[i]<second_value)
            third_value=arr[i];
        }
        return third_value;
    }
}
int main()
{
    int arr[]={1,2,3,4,5,6,7,8,9,10};
    int size=sizeof(arr)/sizeof(arr[0]);
    int result1=maxofarray(arr,size);
    cout<<"The max of the array is->"<<result1;
    cout<<endl;
    int result2=secondmax(arr,size);
    cout<<"The second max of the array is->"<<result2;
    cout<<endl;
    int result3=thirdmax(arr,size);
    cout<<"The third max of the array->"<<result3;
    cout<<endl;

}