#include<bits/stdc++.h>
#include<bits/stdc++.h>
using namespace std;
void traversal(vector<int> &v)
{
    for(auto x:v)
    cout<<x<<" ";
    cout<<endl;
    for(int i=0;i<v.size();i++)
    cout<<v[i]<<" ";
    cout<<endl;
    vector<int>::iterator it;
    for(it=v.begin();it<v.end();it++)
    cout<<*it<<" ";
    cout<<endl;
}
int maxofvector(vector<int> &v)
{
    int maxvalue=INT_MIN;
    for(int i=0;i<(int)(v.size());i++)
    {
        if(maxvalue<v[i])
        maxvalue=v[i];
    }

    return maxvalue;
}
int minofvector(vector<int> &v)
{
    int minvalue=INT_MAX;
    for(int i=0;i<(int)(v.size());i++)
    {
        if(minvalue>v[i])
        minvalue=v[i];
    }
    return minvalue;
}
bool find(vector<int>&v,int key)
{
    for(int i=0;i<(int)(v.size());i++)
    {
        if(v[i]==key)
        return true;
    }
    return false;
}
int secondmaxvector(vector<int>&v)
{   int secondmax=INT_MIN;
    int maxvalue=maxofvector(v);
    for(int i=0;i<v.size();i++)
    {
        if(v[i]>secondmax&&v[i]<maxvalue)
        secondmax=v[i];
    }
    return secondmax;
} 
void reverse(vector<int>&v)
{ stack<int> st;
    for(int i=0;i<v.size();i++)
    {
        st.push(v[i]);
    }
    for(int i=0;i<v.size();i++)
    {
        v[i]=st.top();
        st.pop();
    }
}
void reverse1(vector<int>&v)
{
    int i=0;
    int j=v.size()-1;
    while(i<=j)
    {
        int temp=v[i];
        v[i]=v[j];
        v[j]=temp;
    }
}
int main()
{
    pair<int,int> p={1,2};
    cout<<p.first<<" "<<p.second;
    cout<<endl;
    pair<pair<int,int>,pair<int,int>> p1={{1,2},{3,4}};
    cout<<p1.first.first<<" "<<p1.first.second<<" "<<p1.second.first<<" "<<p1.second.second;
    cout<<endl;
    pair<int,int> p3;
    p3.first=10;
    p3.second=20;
    cout<<p3.first<<" "<<p3.second;
    cout<<endl;
    pair<pair<int,int>,pair<int,int>> p4;
    p4.swap(p1);
    cout<<p4.first.first<<" "<<p4.first.second<<" "<<p4.second.first<<" "<<p4.second.second;
    cout<<endl;
    vector<int> v={1,2,3,4,5,6,7,8,9,10};
    cout<<"The size of the vector is->"<<v.size();
    cout<<endl;
    cout<<"Checking whether vector is empty or not->"<<v.empty();
    cout<<endl;
    //Traversing the vector 
    //1st way
    for(auto x: v)
    cout<<x<<" ";
    cout<<endl;
    //2nd way
    vector<int>::iterator it;
    for(it=v.begin();it!=v.end();it++)
    cout<<*it<<" ";
    cout<<endl;
    //3rd way
    for(int i=0;i<v.size();i++)
    cout<<v[i]<<" ";
    cout<<endl;
    traversal(v);
    cout<<endl;
    //Finding the max of the vector
    int maxvalue=maxofvector(v);
    cout<<"The max of the vector->"<<maxvalue;
    cout<<endl;
    int minvalue=minofvector(v);
    cout<<"The min of the vector->"<<minvalue;
    cout<<endl;
    int secondmax=secondmaxvector(v);
    if(secondmax==INT_MIN)
    cout<<"There is no second max";
    else
    cout<<"The second max of the vector->"<<secondmax;
    cout<<endl;
    cout<<"Enter the element that you want to find out->"<<endl;
    int key;
    cin>>key;
    bool result=find(v,key);
    if(result==-1)
    cout<<"Element not present";
    else
    cout<<"Elemeent present";
    cout<<endl;
    //reverse a vector
    reverse(v);
    traversal(v);
    cout<<endl;
    cout<<"Another reversal technique";
    cout<<endl;
    reverse1(v);
    traversal(v);
    cout<<endl;

}