#include<bits/stdc++.h>
using namespace std;
int main()
{
    pair<int,int> p1={1,2};
    cout<<p1.first<<" "<<p1.second<<endl;
    pair<pair<int,int>,pair<int,int>> p2={{1,2},{3,4}};
    cout<<p2.first.first<<" "<<p2.first.second<<" "<<p2.second.first<<" "<<p2.second.second;
    cout<<endl;
    vector<int> v1;
    v1.push_back(1);
    v1.push_back(21);
    v1.push_back(3);
    v1.push_back(0);
    for(int i=0;i<v1.size();i++)
    cout<<v1[i]<<" "; 
    cout<<endl;
    int n=v1.size();
    for(int i=0;i<v1.size();i++)
    cout<<v1[i]<<" "; 
    cout<<endl;
    sort(v1.begin()+0,v1.begin()+n);
    for(int i=0;i<v1.size();i++)
    cout<<v1[i]<<" "; 
    cout<<endl;
    int arr[]={10,9,8,7,6,5,4,3,2,1};
    int size=sizeof(arr)/sizeof(arr[0]);
    cout<<endl;
    for(int i=0;i<size;i++)
    cout<<arr[i]<<" ";
    sort(arr,arr+size);
    cout<<endl;
    for(int i=0;i<size;i++)
    cout<<arr[i]<<" ";
    list<int> ls;
    ls.push_back(1);
    ls.push_back(2);
    ls.push_back(3);
    ls.push_back(4);
    cout<<endl;
   cout<<ls.empty();
   ls.pop_back();
   for(int i=0;i<ls.size();i++)
   cout<<ls[i]<<" ";
}
#include<bits/stdc++.h>
using namespace std;
int main()
{
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.pop();
    cout<<st.top();
    cout<<endl;
    cout<<st.size();
    cout<<endl;
    cout<<st.empty();
    //Display all Stack elemnt
    while(st.top()!=-1)
    {
        cout<<st.top();
        st.pop();
    }
}