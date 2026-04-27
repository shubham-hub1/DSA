#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    pair<int,int> p1={1,2};
    pair<pair<int,int>,pair<int,int>> p2={{1,2},{3,4}};
    cout<<p1.first<<" "<<p1.second<<endl;
    cout<<p2.first.first<<" "<<p2.first.second<<" "<<p2.second.first<<" "<<p2.second.second<<endl;
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);
    v.pop_back();
    //Vectors intiliazing;
    //Size of the vector
    cout<<v.size();
    cout<<endl;
    //check whether a vector is empty or not
    cout<<!(v.empty());
    cout<<endl;
    //Printing the vectors;
    vector<int> :: iterator it;
    for(it=v.begin();it!=v.end();it++)
    cout<<*it<<" ";
    cout<<endl;
    //normal  loop
    for(int i=0;i<v.size();i++)
    cout<<v[i]<<" ";
    cout<<endl;
    //exploring a psrticular index
    cout<<v.at(0);
    cout<<endl;;
    cout<<v.at(3);
    cout<<endl;
    //List stl
    list<int> ls;   //Declaring a list
    ls.push_back(1);
    ls.push_back(2);
    ls.push_back(3);
    ls.push_back(4);
    ls.push_back(5);
    ls.push_front(0);
    ls.pop_back();
    ls.pop_front();
    list<int> :: iterator lit;
    for(lit=ls.begin();lit!=ls.end();lit++)
    cout<<*lit<<" ";
    cout<<endl;
    //Size of the list
    cout<<"The size of the list->"<<ls.size();
    cout<<endl;
    cout<<"Is list is empty->";
    if(ls.empty()==0)
    cout<<"NO";
    else
    cout<<"Yes";
    cout<<endl;
    //Stack operaration
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
    st.pop();
    while(st.top())
    {
        cout<<st.top()<<" ";
        st.pop();
    }
    cout<<"Top of the stack is->";
    cout<<st.top();
    st.push(1);
    st.push(2);
    cout<<endl;
    cout<<"Top of the stack->"<<st.top();
    cout<<endl;
    cout<<"Size of the stack is->"<<st.size();

}