#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    pair<int,int> p={1,2};
    cout<<p.first<<" "<<p.second;
    cout<<endl;
    pair<int,pair<int,int> >p1={1,{2,3}};
    cout<<p1.first<<" "<<p1.second.first<<" "<<p1.second.second;
    cout<<endl; 
    pair<pair<int,int>,pair<int,int>>p2={{1,2},{3,4}};
    cout<<p2.first.first<<" "<<p2.first.second<<" "<<p2.second.first<<" "<<p2.second.second;
    cout<<endl;
    pair<pair<int,int>,pair<int,int>>p3;
    p3.swap(p2);
    cout<<p3.first.first<<" "<<p3.first.second<<" "<<p3.second.first<<" "<<p3.second.second;
    cout<<endl;
    vector<int> v1;
    v1.push_back(1);
    v1.push_back(2);
    v1.push_back(3);
    v1.push_back(4);
    v1.push_back(5);
    v1.pop_back();
    for(int i=0;i<v1.size();i++)
    cout<<v1[i]<<" ";
    cout<<endl;
    vector<int> v={1,2,3,4,5,6,7,8,9,10};
    //Traversal first way
    for(auto x:v)
    cout<<x<<" ";
    cout<<endl;
    //traversal second way
    vector<int> ::iterator it;
    for(it=v.begin();it!=v.end();it++)
    cout<<*it<<" ";
    cout<<endl;
    //traversal third way
    for(int i=0;i<v.size();i++)
    cout<<v[i]<<" ";
    cout<<endl;
    //Randoming accessing vector element
    cout<<v.at(1);
    cout<<endl;
    //Deleting a value in a vector
    v.erase(v.begin(),v.begin()+2);
   for(int i=0;i<v.size();i++)
    cout<<v[i]<<" ";
    
}