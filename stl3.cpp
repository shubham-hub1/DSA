#include<bits/stdc++.h>
using namespace std;
int main()
{
    pair<int,int> p={1,2};
    cout<<p.first<<" "<<p.second;
    cout<<endl;
    pair<pair<int,int>,pair<int,int>> p2={{1,2},{3,4}};
    cout<<p2.first.first<<" "<<p2.first.second<<" "<<p2.second.first<<" "<<p2.second.second;
    cout<<endl;
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.pop_back();
    v.push_back(5);
    //Printing a vector
    vector<int> :: iterator it;
    for(it=v.begin();it<v.end();it++)
    cout<<*it<<" ";
    //Using loop
    cout<<endl;
    for(int i=0;i<v.size();i++)
    cout<<v[i]<<" "; 
    //Size of the vector
    cout<<endl;
    cout<<"Size of the array->";
    cout<<v.size();
    //checking whether the vector is empty or not
    cout<<endl;
    if(v.empty()==1)
    cout<<"Vector is empty";
    else
    cout<<"Vector is not empty";
    cout<<endl;
    //printing specific element int the vector
    cout<<v.at(1);
    cout<<endl;
    cout<<v.at(2);
    cout<<endl;
    v.erase(v.begin()+0);
    for(int i=0;i<v.size();i++)
    cout<<v[i]<<" ";
    //List Stl;
    list<int> ls;
    ls.push_back(1);
    ls.push_back(2);
    ls.push_back(3);
    ls.push_back(4);
    ls.push_back(5);
    ls.push_back(6);
    ls.push_front(0);
    ls.pop_front();
    ls.pop_back();
    cout<<endl;
    list<int> :: iterator lit;
    for(lit=ls.begin();lit!=ls.end();lit++)
    cout<<*lit<<" ";
    cout<<endl;
    cout<<"The size of the list->"<<ls.size();
    cout<<endl;
    if(!ls.empty())
    cout<<"Not empty";
    else
    cout<<"Empty";
    cout<<endl;
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
    st.pop();
    cout<<"The size of the stack->"<<st.size();
    cout<<endl;
    if(!st.empty())
    cout<<"Stack is not empty";
    else
    cout<<"Stack is empty";
    cout<<endl;
    // while(st.top())
    // {
    //     cout<<st.top()<<" ";
    //     st.pop();
    // }
    cout<<endl;
    stack<int> st1;
    st1.swap(st);
    while(!st1.empty())
    {
        cout<<st1.top()<<" ";
        st1.pop();
    }
    queue<int> qs;
    qs.push(1);
    qs.push(2);
    qs.push(3);
    qs.push(4);
    qs.pop();
    cout<<endl;
    list<int> :: iterator qit;
    while(!qs.empty()){
    cout<<qs.front()<<" ";
    qs.pop();
    }
    priority_queue<int> pqt;
    pqt.push(1);
    pqt.push(2);
    pqt.push(3);
    pqt.push(4);
    pqt.pop();
    cout<<endl;
    while(!pqt.empty())
    {
        cout<<pqt.top()<<" ";
        pqt.pop();
    }

}