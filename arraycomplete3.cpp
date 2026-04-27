#include<iostream>
using namespace std;
void printarray(int * ptr,int size)
{
    for(int i=0;i<size;i++)
    cout<<ptr[i]<<" ";
}
int max_of_array(int * ptr,int size)
{
    int max_value=INT_MIN;
    for(int i=0;i<size;i++)
    {
        if(ptr[i]>max_value)
        max_value=ptr[i];
    }
    return max_value;
}
int secondmax(int * ptr,int size)
{
    int second_value=-1;
    int max=max_of_array(ptr,size);
    for(int i=0;i<size;i++)
    {
        if(ptr[i]>second_value&&ptr[i]!=max&&ptr[i]<max)
         second_value=ptr[i];  
    }
    return second_value;
}
int thirdmax(int * ptr,int size )
{
    int third_value=-1;
    int second_value=secondmax(ptr,size);
    for(int i=0;i<size;i++)
    {
        if(ptr[i]>third_value&&ptr[i]!=second_value&&ptr[i]<second_value)
        third_value=ptr[i];
    }
    return third_value;
}
int linearsearch(int * ptr,int size,int key)
{
    for(int i=0;i<size;i++)
    {
        if(ptr[i]==key)
        return i;
    }
    return -1;
}
int binarysearch(int * ptr,int size,int key)
{
    int low=0;
    int high=size-1;
    while(low<=high)
    {
        int mid=(low+high)/2;
        if(ptr[mid]==key)
        return mid;
        else if(ptr[mid]>key)
        high=mid-1;
        else
        low=mid+1;

    }
    return -1;
}
int binarysearchrec(int * ptr,int low,int high,int key)
{
    if(low>high)
    return -1;
    else{
        int mid=(low+high)/2;
        if(ptr[mid]==key)
        return mid;
        else if(ptr[mid]>key)
        return binarysearchrec(ptr,low,mid-1,key);
        else 
        return binarysearchrec(ptr,mid+1,high,key);

    }
}
int binarysearchrec(int arr[],int size,int key)
{
    int low=0;
    int high=size-1;
    while(low<=high)
    {
        int mid=(low+high)/2;
        if(arr[mid]==key)
        {
            if(mid>0&&arr[mid]==arr[mid-1])
            mid--;
            return mid;
        }
        else if( arr[mid]>key)
        high=mid-1;
        else
        low=mid+1;
    }
    return -1;
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
    int second_max=secondmax(arr,size);
    if(second_max==-1)
    cout<<"There is no second max";
    else
    cout<<"Second max is->"<<second_max;
    cout<<endl;
    int third_max=thirdmax(arr,size);
    if(third_max==-1)
    cout<<"There is no third max";
    else
    cout<<"Third max is->"<<third_max;
    cout<<endl;
    //linaer search in the array
    cout<<"Enter the element that you want to find out->";
    int keyls;
    cin>>keyls;
    int resultls=linearsearch(arr,size,keyls);
    if(resultls==-1)
    cout<<"Element not found";
    else
    cout<<"Element found at index->"<<resultls;
    cout<<endl;
    //Binary Search using loop
    cout<<"Enter the element that you want to find out using binary search->";
    int keybs;
    cin>>keybs;
    int resultbs=binarysearch(arr,size,keybs);
    if(resultbs==-1)
    cout<<"Element not found";
    else
    cout<<"Element found at index->"<<resultbs;
    cout<<endl;
    int resultbsr=binarysearchrec(arr,0,size-1,keybs);
    if(resultbsr==-1)
    cout<<"Element not found";
    else
    cout<<"Element found at index->"<<resultbsr;
    cout<<endl;
    ///binary search first ocuurence
    int arr2[]={1,1,1,1,1,1,2,2,2,3,3,3,3,3,3,4,4,4,5,5,5,5,5,6,6,6,6,6,6,7,7,7,8,8,8,8,8,9,9,9,10,10,10};
    int size2=sizeof(arr2)/sizeof(arr2[0]);
    printarray(arr2,size2);
    cout<<endl;
    cout<<"Enter the element that you want to find out->";
    int keybsoc;
    cin>>keybsoc;
    int resultbsoc=binarysearchrec(arr2,size2,keybsoc);
    if(resultbsoc==-1)
    cout<<"Element not found";
    else
    cout<<"Element found at index->"<<resultbsoc;


}