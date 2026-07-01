#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    pair<int,int> p={1,2};
    cout<<p.first<<" "<<p.second;
    cout<<endl;
    pair<pair<int,int>,pair<int,int>> p2={{1,2},{3,4}};
    cout<<p2.first.first<<" "<<p2.first.second<<" "<<p2.second.first<<" "<<p2.second.second;
    cout<<endl;
    pair<pair<int,int>,pair<int,int>>p3;
    p3.swap(p2);
    cout<<p3.first.first<<" "<<p3.first.second<<" "<<p3.second.first<<" "<<p3.second.second;
    cout<<endl;
    vector<int> v={1,2,3,4,5,6,7,8,9,10};
    cout<<"The size of the vector->"<<v.size();
    cout<<endl;
    cout<<"whther the vector is empty or not->"<<v.empty();
    cout<<endl;
    ///traversing a vector
    for(auto x: v)
    cout<<x<<" ";
    cout<<endl;
    //Another way to traverse an vector
    vector<int> :: iterator it;
    for(it=v.begin();it!=v.end();it++)
    cout<<*it<<" ";
    cout<<endl;
    //Third way to print the vector
    for(int i=0;i<v.size();i++)
    cout<<v[i]<<" ";
    cout<<endl;    
    //swapping one vector to another vector
    vector<int> v1;
    v1.swap(v);
    for(auto x:v1)
    cout<<x<<" ";
    cout<<endl;
    //printing the size of the vector
    cout<<"The size of the vector->"<<v1.size();
    cout<<endl;
    cout<<"Checking whether the vector is empty or not->"<<v1.empty();
    cout<<endl;
    //Randomly accessing the vector
    cout<<v1.at(1);
    cout<<endl;
    //Delting a element in the vector
    v1.erase(v1.begin(),v1.begin()+2);
    for(auto x: v1)
    cout<<x<<" ";
    cout<<endl;
    //Deleting the whole vector
    cout<<"printing the deleted vector"<<endl;
    v1.erase(v1.begin(),v1.end());
    for(auto x: v1)
    cout<<x<<" ";
    cout<<endl;
    cout<<"Deletion done"<<endl;
    //Final function of the vectorr
    vector<int> v2;
    v2.push_back(1);
    v2.push_back(2);
    v2.push_back(3);
    v2.push_back(4);
    v2.push_back(5);
    v2.pop_back();
    for(auto x: v2)
    cout<<x<<" ";
    cout<<endl;
}