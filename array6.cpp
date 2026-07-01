//Array is a data structure which is used to store similar of data in contionous manner ie one after another
#include<iostream>
#include<climits>
using namespace std;
void printarray(int arr[],int size)
{
    for(int i=0;i<size;i++)
    cout<<arr[i]<<" ";
    
}
int max_of_array(int arr[],int size)
{
    int maxvalue=INT_MIN;
    for(int i=0;i<size;i++)
    {
        if(arr[i]>maxvalue)
        maxvalue=arr[i];
    }
    return maxvalue;
}
int second_max_of_array(int arr[],int size)
{  int maxvalue=max_of_array(arr,size);
    int secondmax=INT_MIN;
    for(int i=0;i<size;i++)
    {
        if(arr[i]>secondmax && arr[i]<maxvalue)
        secondmax=arr[i];
    }
    return secondmax;
}
int min_of_array(int arr[],int size)
{
    int minvalue=INT_MAX;
    for(int i=0;i<size;i++)
    {
        if(arr[i]<minvalue)
        minvalue=arr[i];
    }
    return minvalue;
}
int second_min_of_array(int arr[],int size)
{   int minvalue=min_of_array(arr,size);
    int secondmin=INT_MAX;
    for(int i=0;i<size;i++)
    {
        if(arr[i]<secondmin && arr[i]>minvalue)
        secondmin=arr[i];
    }
    return secondmin;
}
void reverse(int arr[],int size)
{
    int low=0;
    int high=size-1;
    while(low<=high)
    {
        int temp=arr[low];
        arr[low]=arr[high];
        arr[high]=temp;
        low++;
        high--;
    }
}
void deleteelement(int arr[],int key,int size)
{  
    int index=-1;
    for(int i=0;i<size;i++)
    {
        if(arr[i]==key)
        { 
            index=i;
            break;

        }
    }
    if(index==-1)
    cout<<"Enter a valid choice";
    else{
        for(int j=index;j<size;j++)
        {
            arr[j]=arr[j+1];
        }
    }
}
int linearsearch(int arr[],int key,int size)
{
    for(int i=0;i<size;i++)
    {
        if(arr[i]==key)
        return i;
    }
    return -1;
}
int binarysearch(int arr[],int size,int key)
{
    int low=0;
    int high=size-1;
    while(low<=high)
    {
        int mid=(low+high)/2;
        if(arr[mid]==key)
        return mid;
        else if(arr[mid]>key)
        high=mid-1;
        else
        low=mid+1;

    }
    return -1;
}
int binarysearch1(int arr[],int low,int high,int key)
{
    if(low>high)
    return -1;
    else{
        int mid=(low+high)/2;
        if(arr[mid]==key)
        return mid;
        else if(arr[mid]>key)
        return binarysearch1(arr,low,mid-1,key);
        else if(arr[mid]<key)
        return binarysearch1(arr,mid+1,high,key);
    }
    return -1;
}
void insertatarray(int arr[],int key,int size)
{
    int i=0;
    while(arr[i]<key && arr[i+1]<key)
    {
        i++;
    }
    int j=size-1;
    while(j>i)
    {
        arr[j]=arr[j-1];
    }
    arr[i]=key;

}
int main()
{
    int arr[]={1,2,3,4,5,6,7,8,9,10};
    int size=sizeof(arr)/sizeof(arr[0]);
    cout<<"The size of the array is->"<<size;
    cout<<endl;
    //printing an array
    printarray(arr,size);
    cout<<endl;
    int maxvalue=max_of_array(arr,size);
    cout<<"The max of the array is->"<<maxvalue;
    cout<<endl;
    int secondmax=second_max_of_array(arr,size);
    if(secondmax==INT_MIN)
    cout<<"There is no second max";
    else
    cout<<"The second max of the array is->"<<secondmax;
    cout<<endl;
    int minvalue=min_of_array(arr,size);
    cout<<"The min of the array is->"<<minvalue;
    cout<<endl;
    int secondmin=second_min_of_array(arr,size);
    cout<<"The second min of the array is->"<<secondmin;
    cout<<endl;
    //rotate an array
    reverse(arr,size);
    printarray(arr,size);
    cout<<endl;
      reverse(arr,size);
        reverse(arr,size);
    //Deleting an element in the array and adjusting the the rest of the element 
    cout<<"Deleting the elment with value-2"<<endl;
    deleteelement(arr,2,size);
    printarray(arr,size);
    cout<<endl;
    //searching in array
    cout<<"Ww are searching 3 in the array";
    cout<<endl;
    int index=linearsearch(arr,3,size);
    if(index==-1)
    cout<<"Element not present in the array";
    else
    cout<<"Element present in the array->"<<index;
    cout<<endl;
    reverse(arr,size);
    printarray(arr,size);
    cout<<"finding 7 in the array using binarysearch"<<endl;
    int result=binarysearch(arr,size,7);
    if(result==-1)
    cout<<"7 is not present in the array";
    else
    cout<<"7 is present in the array";
    cout<<endl;
    //Finding an element in the array using binarysearch using recursion
    int resukt1=binarysearch1(arr,0,size-1,7);
    if(resukt1==-1)
    cout<<"7 is not present in the array";
    else
    cout<<"7 is present in the array";
    cout<<endl;
    //Insering the an element in the array
    printarray(arr,size);
    cout<<endl;
    insertatarray(arr,2,size);
    printarray(arr,size);

    
}