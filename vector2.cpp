#include<bits/stdc++.h>
using namespace std;
int main()
{
    pair<int,int> p={1,2};
    cout<<p.first<<" "<<p.second;
    cout<<endl;
    pair<pair<int,int>,pair<int,int>> d={{1,2},{3,4}};
    cout<<d.first.first<<" "<<d.first.second<<" "<<d.second.first<<" "<<d.second.second;
    cout<<endl;
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    for(int i=0;i<v.size();i++)
    cout<<v[i]<<" ";

}