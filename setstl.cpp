#include<set>
#include<iostream>
using namespace std;
int main()
{
    set<int> st;
    st.insert(1);
    st.insert(8);
    st.insert(2);
    st.insert(3);
    st.insert(3);
    st.insert(4);
    cout<<"The size of the set->"<<st.size();
    cout<<endl;
    for(auto x:st)
    cout<<x<<" ";
    cout<<endl;
    st.erase(st.find(4));
    for(auto x: st)
    cout<<x<<" ";
    cout<<endl;n
}