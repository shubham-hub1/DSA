#include<bits/stdc++.h>
using namespace std;
void printarray(int * ptr,int size)
{
    for(int i=0;i<size;i++)
    cout<<ptr[i]<<" ";
}
int linaersearch(int * ptr,int size,int key)
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
    if(low>high)
    return -1;
    while(low>=high)
        {
            int mid=(low+high)/2;
            if(ptr[mid]==key)
            return mid;
            else if(ptr[mid]>key)
            high=mid-1;
            else if(ptr[mid]<key)
            low=mid+1;
        }
        return -1;
    
}
void merge(int * ptr,int low,int mid,int high)
{
    int arr[high-low+1];
    int count=0;
    int i=low;
    int j=mid+1;
    while(i<=mid&&j<=high)
    {
        if(ptr[i]<ptr[j])
        arr[count++]=ptr[i++];
        else
        arr[count++]=ptr[j++];
    }
    while(i<=mid)
    {
        arr[count++]=ptr[i++];
    }
    while(j<=high)
    {
        arr[count++]=ptr[j++];
    }
    for(int k=low;k<high;k++)
    ptr[k]=arr[k-low];
}
void mergesort(int * ptr,int low,int high)
{
    if(low>=high)
    return ;
    int mid=(low+high)/2;
    mergesort(ptr,low,mid);
    mergesort(ptr,mid+1,high);
    merge(ptr,low,mid,high);
   
}
int binary_search_first_occur(int arr[],int size,int key)
{
    int low=0;
    int high=size-1;
    if(low>high)
    return -1;
    while(low<=high)
    {
        int mid=(low+high)/2;
        if(arr[mid]==key)
        {
            while(mid>0&&arr[mid]==arr[mid-1])
            mid--;
            return mid;
        }
        else if(arr[mid]>key)
        high=mid-1;
        else if(arr[mid]<key)
        low=mid+1;
    }
    return -1;
}
int max_of_array(int * ptr,int size)
{
    int max=ptr[0];
    for(int i=1;i<size;i++)
    {
        if(ptr[i]>max)
        max=ptr[i];
    }
    return max;
}
int min_of_array(int * ptr,int size)
{
    int min=ptr[0];
    for(int i=1;i<size;i++)
    {
        if(ptr[i]<min)
        min=ptr[i];
    }
    return min;
}
int secondmax(int * ptr,int size)
{
    int max=ptr[0];
    for(int i=1;i<size;i++)
    {
        if(ptr[i]>max)
        max=ptr[i];
    }
    int second_max=-1;
    for(int j=0;j<size;j++)
    {
        if(ptr[j]>second_max&&ptr[j]!=max)
        second_max=ptr[j];
    }
    return second_max;
}
int third_max(int * ptr,int size)
{
   int thirdmax=-1;
    int second_max=secondmax(ptr,size);
    if(second_max==-1)
    return -1;
    else
    {
        for(int i=1;i<size;i++)
        if(ptr[i]>thirdmax&&ptr[i]!=second_max&&ptr[i]<second_max)
        thirdmax=ptr[i];
    }
    return thirdmax;
}
void rotate(int * ptr,int size)
{
    int low=0;
    int high=size-1;
    while(low<high)
    {
        int temp=ptr[high];
        ptr[high]=ptr[low];
        ptr[low]=temp;
        low++;
        high--;
    }
}
void bubblesort(int * ptr,int size)
{
    for(int i=0;i<size;i++)
    {
        for(int j=0;j<size-1-i;j++)
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
 void swap(int * ptr,int source,int target)
 {
    int temp=ptr[target];
    ptr[target]=ptr[source];
    ptr[source]=temp;
 }
void selectionsort(int * ptr,int size)
{
    for(int i=0;i<size;i++)
    {
        int maxindex=0;
        for(int j=1;j<size-i;j++)
        {
            if(ptr[j]>ptr[maxindex])
            maxindex=j;
        }
        swap(ptr,maxindex,size-i-1);
    }
}
int main()
{
   int arr[]={1,2,3,4,5,6,7,8,9,10};
   int size=sizeof(arr)/sizeof(arr[0]);
   printarray(arr,size);
   cout<<endl;
   //linaer Search
   cout<<"Enter the element that you want to find out->";
   cout<<endl;
   int key;
   cin>>key;
   int result=linaersearch(arr,key,key);
   if(result==-1)
   cout<<"Element not found";
   else
   cout<<"Element found at index->"<<result;
   cout<<endl;
   cout<<"Enter the element that you want to find out->";
   int key2;
   cin>>key2;
   int result2=binarysearch(arr,size,key2);
   if(result==-1)
   cout<<"Element not found"<<endl;
   else
   cout<<"Element found at index->"<<result;
   cout<<endl;
   int arr2[]={1,1,1,1,1,2,2,2,2,2,3,3,3,3,3,4,4,4,4,4,4,5,5,5,5,6,6,6,6,6,7,7,7,8,8,8,8,9,9,10,10,10};
   int size2=sizeof(arr2)/sizeof(arr2[0]);
   printarray(arr2,size2);
   cout<<endl;
   cout<<"Enter the element that you want to find out->"<<endl;
   int key3;
   cin>>key3;
   int result3=binary_search_first_occur(arr2,size2,key3);
   if(result3==-1)
   cout<<"Element not found";
   else
   cout<<"Element found at index->"<<result3;
   cout<<endl;
   int max=max_of_array(arr,size);
   cout<<"Max of the array is->"<<max;
   cout<<endl;
   int min=min_of_array(arr,size);
   cout<<"Min of the array->"<<min;
   cout<<endl;
   //second maximum of the array
   int second_max=secondmax(arr,size);
   if(second_max==-1)
   cout<<"There is no second max";
   else
   cout<<"Second maximum is->"<<second_max;
   cout<<endl;
   //third maximum of the array 
   int thirdmax=third_max(arr,size);
   if(thirdmax==-1)
   cout<<"Element not found";
   else
   cout<<"Element found->"<<thirdmax;
   cout<<endl;
   int arr4[]={1,2,3,4,5,6,7,8,9,10};
   int size5=sizeof(arr4)/sizeof(arr4[0]);
   rotate(arr4,size5);
   printarray(arr4,size5);
   cout<<endl;
   int arr6[]={10,9,8,7,6,5,4,3,2,1};
   int size6=sizeof(arr6)/sizeof(arr6[0]);
   printarray(arr6,size6);
   cout<<endl;
   bubblesort(arr6,size6);
   printarray(arr6,size6);
   cout<<endl;
   int arr7[]={10,9,8,7,6,5,4,3,2,1};
   int size7=sizeof(arr7)/sizeof(arr[7]);
   printarray(arr7,size7);
   cout<<endl;
   selectionsort(arr7,size7);
   printarray(arr7,size7);
   cout<<endl;
   int arr8[]={10,9,8,7,6,5,4,3,2,1};
   int size8=sizeof(arr8)/sizeof(arr8[0]);
   printarray(arr8,size8);
   cout<<endl;
   mergesort(arr8,0,size8-1);
   printarray(arr8,size8);
   cout<<endl;
}