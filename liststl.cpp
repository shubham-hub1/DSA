#include<bits/stdc++.h>
using namespace std;
int main()
{
    //Stack stl
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
    st.push(6);
    st.pop();
    cout<<"The size of the stack is->"<<st.size();
    cout<<endl;
    cout<<"Chacking whther the stack is empty or not->"<<st.empty();
    cout<<endl;
    //printing the top of the stack
    cout<<"The top of the stack is ->"<<st.top();
    cout<<endl;
    // visiting the element of the stack
    while(st.size())
    {
        cout<<st.top()<<" ";
        st.pop();

    }
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
    st.push(6);
    cout<<endl;
    stack<int> st1;
    st1.swap(st);
    while(st1.size())
    {
        cout<<st1.top()<<" ";
        st1.pop();

    }

}