//Binary search using loop
#include<bits/stdc++.h>
using namespace std;
int binarysearch(vector<int> v,int key)
{
    int low=0;
    int high=v.size()-1;
    while(low<=high)
    {
        int mid=(low+high)/2;
        if(v[mid]==key)
        return mid;
        else if(v[mid]>key)
        high=mid-1;
        else if(v[mid]<key)
        low=mid+1;
    }
    return -1;

}
int main()
{
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);
    v.push_back(6);
    v.push_back(7);
    v.push_back(8);
    v.push_back(9);
    v.push_back(10);
    cout<<endl;
    int key;
    cout<<"Enter the element that you want to find out";
    cout<<endl;
    cin>>key;
    int result=binarysearch(v,key);
    if(result==-1)
    cout<<"Element not found";
    else
    cout<<"Element found at index->"<<result;

}