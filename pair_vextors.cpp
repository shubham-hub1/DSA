#include<bits/stdc++.h>
using namespace std;
int main()
{
    pair<int,int> p={1,2};
    cout<<p.first<<" "<<p.second;
    pair<int,pair<int,int>> d={1,{2,3}};
    cout<<endl;
    cout<<d.first<<" "<<d.second.first<<" "<<d.second.second;
    pair<pair<int,int>,pair<int,int>> f={{1,2},{3,4}};
    cout<<endl;
    cout<<f.first.first<<" "<<f.first.second<<" "<<f.second.first<<" "<<f.second.second;
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    cout<<endl;
    for(int i=0;i<v.size();i++)
    cout<<v[i]<<" ";
}