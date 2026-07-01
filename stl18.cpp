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
    cout<<p2.first.first<<" "<<p2.first.second<<" "<<p2.second.first<<" "<<p2.second.second;
    cout<<endl;
//Vector stl
vector<int> v={1,2,3,4,5,6,7,8,9,10};
cout<<v.size();
cout<<endl;
cout<<v.empty();
cout<<endl;
for(int i=0;i<v.size();i++)
cout<<v[i]<<" ";
cout<<endl;
}