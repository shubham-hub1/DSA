#include<bits/stdc++.h>
using namespace std;
int main()
{
    pair<int,int> p={1,2};
    cout<<p.first<<" "<<p.second;
    pair<int,int> p1;
    p1.first=10;
    p1.second=20;
    cout<<endl;
    cout<<p1.first<<" "<<p1.second<<endl;
    pair<pair<int,int>,pair<int,int>>p2;
    p2.first.first=10;
    p2.first.second=20;
    p2.second.first=30;
    p2.second.second=40;
    cout<<p2.first.first<<" "<<p2.first.second<<" "<<p2.second.first<<" "<<p2.second.second;
    cout<<endl;
    pair<pair<int,int>,pair<int,int>> p3;
    p3.swap(p2);
    cout<<endl;
    cout<<p3.first.first<<" "<<p3.first.second<<" "<<p3.second.first<<" "<<p3.second.second<<endl;
    vector<int> v={1,2,3,4,5,6,7,8,9,10};
    v.push_back(11);
    v.push_back(12);
    v.push_back(13);
    v.push_back(14);
    v.pop_back();
    cout<<endl;


}