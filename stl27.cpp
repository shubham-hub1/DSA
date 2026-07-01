#include<bits/stdc++.h>
using namespace std;
int max_of_array(vector<int> &v)
{
    int maxvalue=INT_MIN;
    for(int i=0;i<(int)v.size();i++)
    {
        if(v[i]>maxvalue)
        maxvalue=v[i];
    }
    return maxvalue;
}
int min_of_array(vector<int> & v)
{
    int minvalue=INT_MAX;
    for(int i=0;i<v.size();i++)
    {
        if(v[i]<minvalue)
        minvalue=v[i];
    }
    return minvalue;
}
int main()

{
    pair<int,int> p={1,2};
    cout<<p.first<<" "<<p.second;
    cout<<endl;
    pair<pair<int,int>,pair<int,int>>p1={{1,2},{3,4}};
    cout<<p1.first.first<<" "<<p1.first.second<<" "<<p1.second.first<<" "<<p1.second.second;
    pair<pair<int,int>,pair<int,int>>p2;
    p2.swap(p1);
    cout<<endl;
    cout<<p2.first.first<<" "<<p2.first.second<<" "<<p2.second.first<<" "<<p2.second.second;
    cout<<endl;
    vector<int> v={1,2,3,4,5,6,7,8,9,10};
    cout<<"The size of the vector is->"<<v.size();
    cout<<endl;
    cout<<"Checking whther the vector is empty or not->"<<v.empty();
    cout<<endl;
    //Traversing a vector
    for(auto x: v)
    cout<<x<<" ";
    cout<<endl;
    //Traversing the other way
    for(int i=0;i<(int)(v.size());i++)
    cout<<v[i]<<" ";
    cout<<endl;
    vector<int>::iterator it;
    for(it=v.begin();it!=v.end();it++)
    cout<<*it<<" ";
    cout<<endl;
    //Delting an element in the vector
    v.erase(v.begin()+1,v.begin()+3);
    for(auto x:v)
    cout<<x<<" ";
    cout<<endl;
    cout<<"The size of the vector->"<<v.size();
    cout<<endl;
    //swapping the vector
    vector<int> v1;
    v1.swap(v);
    for(auto x: v1)
    cout<<x<<" ";
    cout<<endl;
    int maxvalue=max_of_array(v1);
    cout<<"The max of the array is->"<<maxvalue;
    cout<<endl;
    int minvalue=min_of_array(v1);
    cout<<"The min of the array is->"<<minvalue;
    cout<<endl;
}