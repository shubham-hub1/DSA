#include<bits/stdc++.h>
using namespace std;
int main()
{
    pair<int,int> p={1,2};
    cout<<p.first<<" "<<p.second;
    cout<<endl;
    pair<pair<int,int>,pair<int,int>>p1={{1,2},{3,4}};
    cout<<p1.first.first<<" "<<p1.first.second<<" "<<p1.second.first<<" "<<p1.second.second;
    cout<<endl;
    pair<pair<int,int>,pair<int,int>>p2;
    p2.swap(p1);
    cout<<p2.first.first<<" "<<p2.first.second<<" "<<p2.second.first<<" "<<p2.second.second<<endl;
    vector<int>v={1,2,3,4,5,6,7,8,9,10};
    cout<<"The size of the vector ->"<<v.size();
    cout<<endl;
    cout<<"Checking whether vector is->"<<v.empty();
    cout<<endl;
    //Traversing the vector
    for(auto x:v)
    cout<<x<<" ";
    cout<<endl;
    //Traversing the vector
    for(int i=0;i<v.size();i++)
    cout<<v[i]<<" ";
    cout<<endl;
    //Traversing the vector
    vector<int>::iterator it;
    for( it=v.begin();it!=v.end();it++)
    cout<<*it<<" ";
    cout<<endl;
    //Randoming accesing the vector
    cout<<"Vector at index-"<<v.at(1)<<endl;
    list<int> ls;
    ls.push_back(2);
    ls.push_back(3);
    ls.push_back(4);
    ls.push_back(5);
    ls.push_back(6);
    ls.push_front(1);
    ls.push_front(0);
    ls.pop_front();
    ls.pop_back();
cout<<"The size of the list is->"<<ls.size();
cout<<endl;
cout<<"Checking whther the list is empty or not->"<<ls.empty();
cout<<endl;
//Traversing the list
for(auto x: ls)
cout<<x<<" ";
cout<<endl;
//poping element in the 

}