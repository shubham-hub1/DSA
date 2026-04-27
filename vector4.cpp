#include<bits/stdc++.h>
using namespace std;
void printvector(vector<int> v)
{
    for(int i=0;i<v.size();i++)
    cout<<v[i]<<" "; 
}
int linear_search(vector<int> v,int key)
{
    for(int i=0;i<v.size();i++)
     {
        if(v[i]==key) 
        return i;
     }
     return -1;
}
int binary_search(vector<int> v,int key)
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
        else if( v[mid]<key)
        low=mid+1;
    }
    return -1;
}
int main()
{
    pair<int,int> p1={1,2};
    cout<<p1.first<<" "<<p1.second;
    cout<<endl;
    pair<pair<int,int>,pair<int,int>> p2={{1,2},{3,4}};
    cout<<p2.first.first<<" "<<p2.first.second<<" "<<p2.second.first<<" "<<p2.second.second;
    cout<<endl;
    vector<int> v1;
    v1.push_back(1);
    v1.push_back(2);
    v1.push_back(3);
    v1.push_back(4);
    v1.push_back(5);
    v1.push_back(6);
    v1.push_back(7);
    v1.push_back(8);
    v1.push_back(9);
    v1.push_back(10);
    printvector(v1);
    cout<<endl;
    cout<<"Enter the element that you want to find out";
    cout<<endl;
    int keylinearsearch;
    cin>>keylinearsearch;
    int linear=linear_search(v1,keylinearsearch);
    if(linear==-1)
    cout<<"Element not found";
    else
    cout<<"Element found at index->"<<linear;
    cout<<endl;
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
    printvector(v);
    cout<<"Enter the element thatyou want to find out";
    int key2;
    cout<<endl;
    cin>>key2;
    int binarysearch=binary_search(v,key2);
    if(binarysearch==-1)
    cout<<"Element not found";
    else
    cout<<"Element found at index->"<<binarysearch;
}