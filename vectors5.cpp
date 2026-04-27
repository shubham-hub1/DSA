#include<bits/stdc++.h>
using namespace std;
int main()
{
    pair<int,int> p1={1,2};
    cout<<p1.first<<" "<<p1.second;
    cout<<endl;
    pair<pair<int,int>,pair<int,int>> p2={{1,2},{3,4}};
    cout<<p2.first.first<<" "<<p2.first.second<<" "<<p2.second.first<<" "<<p2.second.second;
    cout<<endl;
    stack<int> st;

    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    cout<<endl;
    while(!st.empty())
    {
        cout<<st.top();
        cout<<endl;
        st.pop();
    }



}