#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    list<int> ls;
    ls.push_back(1);
    ls.push_back(2);
    ls.push_back(3);
    ls.push_back(4);
    ls.push_back(5);
    ls.push_back(6);
    ls.push_front(0);
    ls.push_front(-1);
    ls.pop_front();
    ls.pop_back();
    for(auto x: ls)
    cout<<x<<" ";
    cout<<endl;
    ///Other way to traverse the list
    list<int> ::iterator lit;
    for(lit=ls.begin();lit!=ls.end();lit++)
    cout<<*lit<<" ";
    cout<<endl;
    cout<<"The size of the list->"<<ls.size();
    cout<<endl;
    cout<<"Checking whther the list is empty or not->"<<ls.empty();
    cout<<endl;
    while(ls.size())
    {
        cout<<ls.front()<<" ";
    ls.pop_front();
    }
    stack<int>st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
    st.push(6);
    st.pop();
    st.pop();
    cout<<"The size of the stack is->"<<st.size();
    cout<<endl;
    cout<<"Checking whether the stack is empty or not->"<<st.empty();
    cout<<endl;
    while(st.size())
    {
        cout<<st.top()<<" ";
        st.pop();
        
    }
}