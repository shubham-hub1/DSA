#include<bits/stdc++.h>
using namespace std;
int main()
{
    // pair<int,int> p1={1,2};
    // pair<pair<int,int>,pair<int,int>> p2={{1,2},{3,4}};
    // cout<<p1.first<<" "<<p1.second;
    // cout<<endl;
    // cout<<p2.first.first<<" "<<p2.first.second<<" "<<p2.second.first;
    // cout<<endl;
    // vector<int> v1;
    // v1.push_back(1);
    // v1.push_back(2);
    // v1.push_back(3);
    // v1.push_back(4);
    // v1.push_back(5);
    // v1.pop_back();
    // v1.pop_back();
    // cout<<endl;
    // cout<<v1.size();
    // cout<<endl;
    // cout<<v1.empty();
    // cout<<endl;
    // vector<int> ::iterator it;
    // for(it=v1.begin();it!=v1.end();it++)
    // cout<<*it<<" ";
    // list<int> ls;
    // ls.push_back(1);
    // ls.push_back(2);
    // ls.push_back(3);
    // ls.push_back(4);
    // ls.push_front(0);
    // ls.push_front(-1);
    // ls.pop_back();
    // ls.pop_front();
    // cout<<endl;
    // list<int>::iterator lt;
    // for(lt=ls.begin();lt!=ls.end();lt++)
    // cout<<*lt<<" ";
    // stack<int> st;
    // cout<<endl;
    // st.push(1);
    // st.push(2);
    // st.push(3);
    // st.push(5);
    // st.pop();
    // cout<<st.empty();
    // cout<<endl;
    // cout<<"The top of the stack is ->"<<st.top();
    // cout<<endl;
    // while(st.top())
    // {
    //     cout<<st.top()<<" ";
    //     st.pop();
    // }
    queue<int> qs;
    qs.push(1);
    qs.push(2);
    qs.push(3);
    qs.push(4);
    cout<<qs.front();
    while(qs.front())
    {
        cout<<qs.front();
        qs.pop();
    }



}