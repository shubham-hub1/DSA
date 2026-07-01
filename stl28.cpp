#include<bits/stdc++.h>
using namespace std;
int main()
{
    pair<int,int> p={1,2};
    pair<pair<int,int>,pair<int,int>> p1={{1,2},{3,4}};
    cout<<p.first<<" "<<p.second<<endl;
    cout<<p1.first.first<<" "<<p1.first.second<<" "<<p1.second.first<<" "<<p1.second.second<<endl;
    //Swapping the pair in the stl
    pair<int,int> p2;
    p2.swap(p);
    cout<<p2.first<<" "<<p2.second<<endl;
    pair<pair<int,int>,pair<int,int>> p3;
    p3.first.first=1;
    p3.first.second=2;
    p3.second.first=3;
    p3.second.second=4;
    cout<<p3.first.first<<" "<<p3.first.second<<" "<<p3.second.first<<" "<<p3.second.second<<endl;
    //Vector STL 
    vector<int> v={1,2,3,4,5,6,7,8,9,10};
    cout<<"The size of the vector is->"<<v.size()<<endl;
    cout<<"Checking whther the vector is empty or not->"<<v.empty()<<endl;
    //Traversing the vector 
    //Method 1
    for(auto x: v)
    cout<<x<<" ";
    cout<<endl;
    //Method 2
    for(int i=0;i<v.size();i++)
    cout<<v[i]<<" ";
    cout<<endl;
    //Method 3
    vector<int> ::iterator it;
    for(it=v.begin();it!=v.end();it++)
    cout<<*it<<" ";
    cout<<endl; 
    //Randing accessing an index in the vector using at keyword
    cout<<v.at(1)<<endl;
    //Deleting An element in the vector
    v.erase(v.begin()+2,v.begin()+3);
    for(auto x: v)
    cout<<x<<" ";
    cout<<endl;
    //Delting an range of the value in the vector
    v.erase(v.begin(),v.begin()+4);
    for(auto x: v)
    cout<<x<<" ";
    cout<<endl;
    v.erase(v.begin(),v.end());
    for(auto x: v)
    cout<<x<<" ";
    cout<<endl;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);
    v.push_back(6);
    v.push_back(7);
    v.push_back(8);
    v.push_back(9);
    v.push_back(10);
    v.push_back(11);
    v.pop_back();
    for(auto x: v)
    cout<<x<<" ";
    cout<<endl;
    cout<<"The size of the vector is ->"<<v.size();
    cout<<endl;
    cout<<"Checking whether vector is empty or not->"<<v.empty();
    cout<<endl;
    //Swapping the vector
    vector<int> v1;
    v1.swap(v);
    for(auto x: v1)
    cout<<x<<" ";
    cout<<endl;
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
    st.push(6);
    st.pop();
    cout<<"The size of the stack is ->"<<st.size();
    cout<<endl;
    cout<<"Checking out whther the stack is empty or not->"<<st.empty();
    cout<<endl;
    cout<<"Printing the top of the stack->"<<st.top();
    cout<<endl;
    while(st.size())
    {
        cout<<st.top()<<" ";
        st.pop();
    }
    list<int> ls;
    ls.push_back(1);
    ls.push_front(0);
    ls.push_back(2);
    ls.push_back(3);
    ls.push_back(4);
    ls.push_back(5);
    ls.pop_front();
    ls.pop_back();
    cout<<"The size of the list is ->"<<ls.size();
    cout<<endl;
    cout<<"Checking whther the list is empty or not->"<<ls.empty();
    cout<<endl;
    cout<<"printing the list element ->"<<endl;
    //traversing a list
    for(auto x: ls)
    cout<<x<<" ";
    cout<<endl;
    //traversing the list element 
    list<int> ::iterator lit;
    for(lit=ls.begin();lit!=ls.end();lit++)
    cout<<*lit<<" ";
    cout<<endl;
    //Queue STL
    queue<int> qs;
    qs.push(1);
    qs.push(2);
    qs.push(3);
    qs.push(4);
    qs.push(5);
    qs.push(6);
    qs.pop();
    cout<<"The size of the queue is->"<<qs.size();
    cout<<endl;
    cout<<"Checking the queue is empty or not->"<<qs.empty();
    cout<<endl;
    cout<<"The front of the queue is ->"<<qs.front();
    cout<<endl;
    while(qs.size())
    {
        cout<<qs.front()<<" ";
        qs.pop();

    }
    //priroriy qyue
    priority_queue<int> prt;
    prt.push(1);
    prt.push(2);
    prt.push(3);
    prt.push(4);
    prt.push(5);
    prt.push(6);
    prt.pop();
    cout<<"The size of the priority queue->"<<prt.size();
    cout<<endl;
    cout<<"Checking whther the priority queue is empty or not->"<<prt.empty();
    cout<<endl;
    cout<<"The top of the priority queue is ->"<<prt.top();
    cout<<endl;
    while(prt.size())
    {
        cout<<prt.top()<<" ";
        prt.pop();
        
    }
    set<int> st1={1,2,3,4,5,6,7,8};
    st1.insert(9);
    st1.insert(10);
    st1.insert(11);
    st1.insert(12);
    cout<<"The size of the set is->"<<st1.size()<<endl;
    cout<<"Checking whther the set is empty or not->"<<st1.empty()<<endl;
    for(auto x: st1)
    cout<<x<<" ";
    cout<<endl;
    set<int>::iterator sit;
    for(sit=st1.begin();sit!=st1.end();sit++)
    cout<<*sit<<" ";
    cout<<endl;
    //Finding an element in the set
    cout<<"Enter the elemnt that you want to find out in the set->"<<endl;
    int key;
    cin>>key;
    if(st1.end()!=st1.find(key))
    cout<<"Element is present";
    else
    cout<<"element not present in the set";
    cout<<endl;
}