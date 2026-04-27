#include<bits/stdc++.h>
using namespace std;
int main()
{
    pair<int,int> p={1,2};
    cout<<p.first<<" "<<p.second;
    cout<<endl;
    pair<pair<int,int>,pair<int,int>> p2={{1,2},{3,4}};
    cout<<p2.first.first<<" "<<p2.first.second<<" "<<p2.second.first<<" "<<p2.second.second;
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.pop_back();
    v.erase(v.begin()+1);
    cout<<endl;
    cout<<v.size();
    cout<<endl;
    cout<<v.empty();
    cout<<endl;
    cout<<v.at(1);
    cout<<endl;
    for(int i=0;i<v.size();i++)
    cout<<v[i]<<" ";
    cout<<endl;
    list<int> ls;
    ls.push_back(1);
    ls.push_back(2);
    ls.push_front(0);
    ls.pop_back();
    ls.pop_front();
    cout<<endl;
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.pop();
    while(!st.top())
    {
        cout<<st.top();
        st.pop();
    }
    queue<int> qs;
    qs.push(1);
    qs.push(2);
    qs.pop();
    priority_queue<int> pqs;
    //Maximum is always at the  top;
    pqs.push(1);
    pqs.push(2);
    pqs.push(3);
    pqs.pop();


}