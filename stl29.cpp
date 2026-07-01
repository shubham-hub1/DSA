#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int max_of_vector(vector<int> &v)
{
    int maxvalue=INT_MIN;
    for(int i=0;i<v.size();i++)
    {
        if(v[i]>maxvalue)
        maxvalue=v[i];
    }
    return maxvalue;
}
int min_of_vector(vector<int> &v)
{
    int minvalue=INT_MAX;
    for(int i=0;i<v.size();i++)
    {
        if(v[i]<minvalue)
        minvalue=v[i];
    }
    return minvalue;
}
void reverse(vector<int> &v)
{
    int i=0;
    int j=v.size()-1;
    while(i<=j)
    {
        int temp=v[i];
        v[i]=v[j];
        v[j]=temp;
        i++;j--;
    }
}
int main()
{
    pair<int,int> p={1,2};
    cout<<p.first<<" "<<p.second;
    cout<<endl;
    pair<pair<int,int>,pair<int,int>>p1={{1,2},{3,4}};
    cout<<p1.first.first<<" "<<p1.first.second<<" "<<p1.second.first<<" "<<p1.second.second<<endl;
    pair<int,int>p2;
    p2.first=10;
    p2.second=20;
    cout<<p2.first<<" "<<p2.second;
    cout<<endl;
    pair<int,int>p3;
    p3.swap(p2);
    cout<<p3.first<<" "<<p3.second<<endl;
    vector<int> v={1,2,3,4,5,6,7,8,9,10};
    cout<<"The size of the vector is->"<<v.size();
    cout<<endl;
    cout<<"Checking whther the vector is empty or not->"<<v.empty();
    cout<<endl;
    //Traversing the vector
    for(auto x: v)
    cout<<x<<" ";
    cout<<endl;
    for(int i=0;i<v.size();i++)
    cout<<v[i]<<" ";
    cout<<endl;
    vector<int>::iterator it;
    for(it=v.begin();it!=v.end();it++)
    cout<<*it<<" ";
    cout<<endl;
    int maxvalue=max_of_vector(v);
    cout<<"The max of the vector is->"<<maxvalue;
    cout<<endl;
    int minvalue=min_of_vector(v);
    cout<<"The min of the vector->"<<minvalue;
    cout<<endl;
    reverse(v);
    for(auto x: v)
    cout<<x<<" ";
    cout<<endl;
    sort(v.begin(),v.end());
    for(auto x: v)
    cout<<x<<" ";
    cout<<endl;
    //Randoming accesing the vector element in the vector
    cout<<"Enter the index that you want to access"<<endl;
    int index;
    cin>>index;
    cout<<endl;
    cout<<v.at(index);
    //Delting the element in the vector
    cout<<"Enter the satring index from which you want to delete";
    cout<<endl;
    int start;
    cin>>start;
    cout<<"Enter the ending index that you want to delete";
    int end;
    cin>>end;
    end=end+1;
    v.erase(v.begin()+start,v.begin()+end);
    for(auto x: v)
    cout<<x<<" ";
    cout<<endl;
    list<int> ls;
    ls.push_back(2);
    ls.push_back(3);
    ls.push_back(4);
    ls.push_back(5);
    ls.push_back(6);
    ls.pop_back();
    ls.pop_front();
    for(auto x: ls)
    cout<<x<<" ";
    cout<<endl;
    cout<<"The size of the list is->"<<ls.size();
    cout<<endl;
    cout<<"Checking whtehr the list is empty or not->"<<ls.empty();
    cout<<endl;

}