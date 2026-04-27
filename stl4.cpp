#include<bits/stdc++.h>
using namespace std;
int main()
{
    pair<int,int>p={1,2};
    cout<<p.first<<" "<<p.second;
    pair<pair<int,int>,pair<int,int>> p2={{1,2},{3,4}};
    cout<<endl;
    cout<<p2.first.first<<" "<<p2.first.second<<" "<<p2.second.first<<" "<<p2.second.second;
    cout<<endl;
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);
    v.push_back(5);
    v.pop_back();
    vector<int> :: iterator it;
    for(it=v.begin();it!=v.end();it++)
    cout<<*it<<" ";
    cout<<endl;
    for(int i=0;i<v.size();i++)
    cout<<v[i]<<" ";
    cout<<endl;
    cout<<"The size of the vector is->"<<v.size();
    cout<<endl;
    cout<<"whether vector is->";
    if(!v.empty())
    cout<<"Not empty";
    else
    cout<<"Empty";
    //delete an element in the vector
    cout<<endl;
    int elementdelete;
    cout<<"Enter the element that you want to delete ->";
    cin>>elementdelete;
    for(int i=0;i<v.size();i++)
    {
        if(v[i]==elementdelete)
        v.erase(v.begin()+i);
    }
    for(int i=0;i<v.size();i++)
    cout<<v[i]<<" ";
    cout<<endl;
    //Delete the whole vector
    vector<int> v1;
    v1.swap(v);
    v.clear();
    for(int i=0;i<v.size();i++)
    cout<<v[i]<<" ";
    cout<<endl;
     for(int i=0;i<v1.size();i++)
    cout<<v1[i]<<" ";
    cout<<endl;
    //list Stl5
    list<int> ls;
    ls.push_back(1);
    ls.push_back(2);
    ls.push_back(3);
    ls.push_back(4);
    ls.push_back(5);
    ls.push_front(0);
    ls.pop_front();
    ls.pop_back();
    list<int> :: iterator lit;
    cout<<"List items";
    cout<<endl;
    for(lit=ls.begin();lit!=ls.end();lit++)
    cout<<*lit<<" ";
    cout<<endl;
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
    st.pop();
    while(!st.empty())
    {
        cout<<st.top()<<" "; 
        st.pop();
    }
    cout<<"The size of the stack->"<<st.size();
    cout<<endl;
    cout<<"Is stack empty->"<<st.empty()?cout<<"yes":cout<<"No";
    cout<<endl;
    queue<int> qs;
    qs.push(1);
    qs.push(2);
    qs.push(3);
    qs.push(4);
    qs.pop();
    cout<<"This is quee->"<<endl;
    while(!qs.empty())
    {
        cout<<qs.front()<<" ";
        qs.pop();
        
    }
    cout<<"The size of the que is->"<<qs.size();
cout<<endl;
priority_queue<int> pqs;
pqs.push(1);
pqs.push(2);
pqs.push(3);
pqs.push(4);
pqs.pop();
while(!pqs.empty())
{
    cout<<pqs.top()<<" ";
    pqs.pop();
}
cout<<endl;
cout<<"The size of the queue is->"<<pqs.size();
set<int> stt;
stt.insert(1);
stt.insert(1);
stt.insert(2);
stt.insert(3);
int result=stt.count(1);
if(result==0)
cout<<"Element not found";
else 
cout<<"Element found";
}
