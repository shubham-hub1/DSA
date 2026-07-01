#include<bits/stdc++.h>
using namespace std;
int main()
{
    pair<int,int>p={1,2};
    cout<<p.first<<" "<<p.second<<endl;
    pair<pair<int,int>,pair<int,int>>p1={{1,2},{3,4}};
    cout<<p1.first.first<<" "<<p1.first.second<<" "<<p1.second.first<<" "<<p1.second.second;
    cout<<endl;
    pair<int,int>p2;
    p2.first=10;
    p2.second=20;
    cout<<p2.first<<" "<<p2.second;
    cout<<endl;
    pair<int,int>p3;
    p3.swap(p2);
    cout<<p2.first<<" "<<p2.second;
    cout<<endl;
    cout<<p3.first<<" "<<p3.second;
    cout<<endl;
    vector<int> v={1,2,3,4,5,6,7,8,9,10};
    cout<<"The size of the vector is->"<<v.size();
    cout<<endl;
    cout<<"Checcking whther the vector is empty or not->"<<v.empty();
    cout<<endl;
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
    //Randomly acessing the vector
    cout<<v.at(2);
    cout<<endl;
    v.at(1)=200;
    for(auto x: v)
    cout<<x<<" ";
    cout<<endl;
    vector<int>v1;
    v1.swap(v);
    for(auto x: v1)
    cout<<x<<" ";
    cout<<endl;
    for(auto x: v)
    cout<<x<<" ";
    cout<<endl;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.pop_back();
    for(auto x: v)
    cout<<x<<" ";
    cout<<endl;
    list<int> ls;
    ls.push_back(1);
    ls.push_back(2);
    ls.push_back(3);
    ls.push_back(4);
    ls.push_back(5);
    ls.push_back(6);
    ls.pop_back();
    ls.push_front(1);
    ls.push_front(0);
    ls.pop_front();
    for(auto x: ls)
    cout<<x<<" ";
    cout<<endl;
    list<int>::iterator lit;
    for(lit=ls.begin();lit!=ls.end();lit++)
    cout<<*lit<<" ";
    cout<<endl;
    cout<<"The size of the list is->"<<ls.size();
    cout<<endl;
    cout<<"Checking whther the list is empty or not->"<<ls.empty();
    cout<<endl;

}