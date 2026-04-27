#include<bits/stdc++.h>
using namespace std;
void printarray(vector<int> &v1)
{
    for(int i=0;i<v1.size();i++)
    cout<<v1[i]<<" ";
}
int binarysearch(vector<int> v1,int key)
{
    int low=0;
    int high=v1.size()-1;
    while(low<=high)
    {
        int mid=(low+high)/2;
        if(v1[mid]==key)
        {
            while(mid>0&&v1[mid]==v1[mid-1])
            {
                mid--;
            }
            return mid;
        }
        else if(v1[mid]>key)
        high=mid-1;
        else if(v1[mid]<key)
        low=mid+1;
    }
    return -1;
}
int linearsearch( vector<int> v2,int key)
{
    for(int i=0;i<v2.size();i++)
    {
        if(v2[i]==key)
        return i;
    }
    return -1;
}
void printarray1(int * ptr,int size)
{
    for(int i=0;i<size;i++)
    {
        cout<<ptr[i]<<" ";
        }
}
void swap(int * ptr,int source,int target)
{
    int temp=ptr[target];
    ptr[target]=ptr[source];
    ptr[source]=temp;
}
void bubblesort(int * ptr,int size)
{
    for(int i=0;i<size;i++)
    {
        for(int j=0;j<size-i-1;j++)
        {
            if(ptr[j]>ptr[j+1])
            swap(ptr,j,j+1);
        }
    }
}
int sum_of_array(int * ptr,int size)
{
    int sum=0;
    for(int i=0;i<size;i++)
    {
        sum+=ptr[i];
    }
    return sum;
}
void replace_an_element(int * ptr,int size)
{ 
    cout<<"Enter the element that you want to replace";
    cout<<endl;
    int key;
    cin>>key;
    for(int i=0;i<size;i++)
    {
        if(ptr[i]==key)
        {
            cout<<"Enter the value";
            int replace_value;
            cout<<endl;
            cin>>replace_value;
            ptr[i]=replace_value;
            return ;
        }
    }
    cout<<"Enter a valid value";
}
int max_of_array(int * ptr,int size)
{
    int max =ptr[0];
    for(int i=0;i<size;i++)
    {
        if(ptr[i]>max)
        max=ptr[i];
    }
    return max;
}
int second_max_of_array(int * ptr,int size)
{
    int max_element=ptr[0];
    for(int i=0;i<size;i++)
    {
        if(ptr[i]>max_element)
        max_element=ptr[i];
    }
    int second_max=INT_MIN;
    for(int j=0;j<size;j++)
    {
        if(ptr[j]>second_max&&ptr[j]<max_element&&ptr[j]!=max_element)
        second_max=ptr[j];
    }
    if(second_max!=INT_MIN)
    return second_max;
    else
    return INT_MIN;
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
void selection_sort(int * ptr,int size)
{
    for(int i=0;i<size;i++)
    {
        int max_index=0;
        int flag=-1;
        for(int j=0;j<size-i;j++)
        {
            if(ptr[j]>ptr[max_index])
            {
                max_index=j;
                flag++;
            }
            
        }
        if(flag==-1)
            { }
            else
            {
                int temp=ptr[size-i-1];
                ptr[size-i-1]=ptr[max_index];
                ptr[max_index]=temp;
            }

    }
}
int main()
{
    pair<int,int> p1={1,2};
    cout<<endl;
    cout<<p1.first<<" "<<p1.second;
    cout<<endl;
    pair<pair<int,int>,pair<int,int>> p2={{1,2},{3,4}};
    cout<<p2.first.first<<" "<<p2.first.second<<" "<<p2.second.first<<" "<<p2.second.second;
    cout<<endl;
    pair<int,int> p3;
    p3.first={1};
    p3.second={2};
    cout<<p3.first<<" "<<p3.second;
    cout<<endl;
    vector<int> v1;
    v1.push_back(1);
    v1.push_back(2);
    v1.push_back(3);
    v1.pop_back();
    v1.push_back(4);
    v1.push_back(4);
    v1.push_back(4);
    v1.push_back(5);
    v1.push_back(5);
    v1.push_back(6);
    printarray(v1);
    cout<<endl;
    cout<<"Enter the element that you want to find out"<<endl;
    cout<<endl;
    int key;
    cin>>key;
    int result =binarysearch(v1,key);
    if(result==-1)
    cout<<"Element not found";
    else
    cout<<"Element found at index->"<<result;
    cout<<endl;
    //linear search
    vector<int> v2;
    v2.push_back(1);
    v2.push_back(2);
    v2.push_back(3);
    v2.push_back(4);
    v2.push_back(5);
    v2.push_back(6);
    v2.push_back(7);
    v2.push_back(8);
    v2.push_back(9);
    v2.push_back(10);
    cout<<endl;
    printarray(v2);
    cout<<endl;
    cout<<"Enter the element that you want to find out"<<endl;
    int key2;
    cin>>key2;
    int result2=linearsearch(v2,key2);
    if(result2==-1)
    cout<<"Element not found";
    else
    cout<<"Element found at index->"<<result2;
    cout<<endl;
    //Size of the array
    int arr[]={10,9,8,7,6,5,4,3,2,1};
    int size=sizeof(arr)/sizeof(arr[0]);
    cout<<"The size of the array is->"<<size;
    cout<<endl;
    printarray1(arr,size);
    cout<<endl;
    //bubble Sort
    bubblesort(arr,size);
    printarray1(arr,size);
    cout<<endl;
    //Sum of the array
    int sum=sum_of_array(arr,size);
    cout<<"The size of the array->"<<sum;
    cout<<endl;
    printarray1(arr,size);
    cout<<endl;
    //Replace an elemnt in the array
    replace_an_element(arr,size);
    cout<<endl;
    printarray1(arr,size);
    cout<<endl;
    int max=max_of_array(arr,size);
    cout<<"The max of array is->"<<max;
    cout<<endl;
    //Second max element in the array
    int second_max=second_max_of_array(arr,size);
    if(second_max!=INT_MIN)
    cout<<"The second max of the array->"<<second_max;
    else
    cout<<"There is no second largest element";
    cout<<endl;
    //rotate an array
    printarray1(arr,size);
    cout<<endl;
    rotate(arr,size);
    printarray1(arr,size);
    cout<<endl;
    //selectionsort
    int arr2[]={10,9,8,7,6,5,4,3,2,1};
    int size2=sizeof(arr2)/sizeof(arr[0]);
    printarray1(arr2,size2);
    cout<<endl;
    selection_sort(arr2,size2);
    printarray1(arr2,size2);
    
    
}