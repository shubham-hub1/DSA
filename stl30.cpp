#include<bits/stdc++.h>
using namespace std;
int main()
{
    pair<int,int> p={1,2};
    cout<<p.first<<" "<<p.second<<endl;
    pair<pair<int,int>,pair<int,int>>p1={{1,2},{3,4}};
    cout<<p1.first.first<<" "<<p1.first.second<<" "<<p1.second.first<<" "<<p1.second.second<<endl;
    pair<int,int>p2;
    p2.first=10;
    p2.second=20;
    cout<<p2.first<<" "<<p2.second<<endl;
    pair<int,int>p3;
    p3.swap(p2);
    cout<<"Previous pair value->"<<endl;
    cout<<p2.first<<" "<<p2.second<<endl;
    cout<<"Pair in which value are swapped->"<<endl;
    cout<<p3.first<<" "<<p3.second<<endl;
    //Vector Stl
    vector<int>v={1,2,3,4,5,6,7,8,9,10};
    cout<<"Printing the size of the vector->"<<v.size();
    cout<<endl;
    cout<<"Checking whther the vector is empty or not->"<<v.empty();
    cout<<endl;
    //Traversing the vector
    for(auto x:v)
    cout<<x<<" ";
    cout<<endl;
    for(int i=0;i<v.size();i++)
    cout<<v[i]<<" ";
    cout<<endl;
    vector<int>::iterator it;
    for(it=v.begin();it!=v.end();it++)
    cout<<*it<<" ";
    cout<<endl;
    //Randing Acessing a perticular index in the vector 
    cout<<v.at(1);
    cout<<endl;
    //Deleting a particular index in the vector
    v.erase(v.begin()+1,v.begin()+2);
    for(auto x:v)
    cout<<x<<" ";
    cout<<endl;
    //Delting an range of value in the vector
    v.erase(v.begin(),v.begin()+5);
    for(auto x:v)
    cout<<x<<" ";
    cout<<endl;
    //Delting the whole vector
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
    for(auto x: v)
    cout<<x<<" ";
    cout<<endl;
    //List Stl
    list<int> ls;
    ls.push_back(2);
    ls.push_back(3);
    ls.push_back(4);
    ls.push_back(5);
    ls.push_back(6);
    ls.push_front(1);
    ls.push_front(0);
    ls.pop_back();
    ls.pop_front();
    //Printing the size of the list
    cout<<"The size of the list is->"<<ls.size();
    cout<<endl;
    cout<<"Checcking whether the list is empty or not->"<<ls.empty();
    cout<<endl;
    //Taversing the list
    for(auto x: ls)
    cout<<x<<" ";
    cout<<endl;
    //Printing the front of the lsit
    cout<<ls.front()<<endl;
    //Another way to traverse a lsit
    list<int>::iterator lit;
    for(lit=ls.begin();lit!=ls.end();lit++)
    cout<<*lit<<" ";
    cout<<endl;
    //poping the list
    while(ls.size())
    {
        cout<<ls.front()<<" ";
        ls.pop_front();
    }
    cout<<endl;
    //Printing the size of the empty list
    cout<<"The size of the list->"<<ls.size();
    cout<<endl;
    cout<<"Checking whther the list is empty or not->"<<ls.empty();
    cout<<endl;
    //Defing the another list
    list<int> ls1;
    ls1.push_back(1);
     ls1.push_back(2);
      ls1.push_back(3);
       ls1.push_back(4);
        ls1.push_back(5);
    for(auto x: ls1)
    cout<<x<<" ";
    cout<<endl;
    ls.swap(ls1);
    cout<<"The size of the list->"<<ls.size();
    cout<<endl;
    cout<<"The size of the list->"<<ls1.size();
    cout<<endl;
    for(auto x:ls)
    cout<<x<<" ";
    cout<<endl;
    for(auto x: ls1)
    cout<<x<<" ";
    cout<<endl;
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
    cout<<"Checking whther the stack is empty->"<<st.empty();
    cout<<endl;
    //Printing the top of the stack 
    cout<<"Top of the stack->"<<st.top()<<endl;
    //traversing the stack while coping the value to another stack
    stack<int> st1;
    while(st.size())
    {
        st1.push(st.top());
        cout<<st.top()<<" ";
        st.pop();
    }
    cout<<endl;
    cout<<"The size of the second stack->"<<st1.size();
    cout<<endl;
    cout<<"The size of the first stack is->"<<st.size();
    cout<<endl;
    //Queue STL
    queue<int> qs;
    qs.push(0);
    qs.push(1);
    qs.push(2);
    qs.push(3);
    qs.push(4);
    qs.push(5);
    qs.push(6);
    qs.pop();
    cout<<"The front of the queue is->"<<qs.front();
    cout<<endl;
    cout<<"The size of the queue is->"<<qs.size();
    cout<<endl;
    cout<<"Checking whther the queue is empty or not->"<<qs.empty();
    cout<<endl;
    cout<<"Element in the queue is->"<<endl;
    while(qs.size())
    {
        cout<<qs.front()<<" ";
        qs.pop();
    }
    priority_queue<int> pqs;
    pqs.push(1);
    pqs.push(0);
    pqs.push(2);
    pqs.push(3);
    pqs.push(4);
    pqs.push(5);
    pqs.pop();
    cout<<"The size of the priorty queue is->"<<pqs.size();
    cout<<endl;
    cout<<"Checking whther the queue is empty or not->"<<pqs.empty();
    cout<<endl;
    cout<<"The the top of the pririoty queue->"<<pqs.top();
    cout<<endl;
    while(pqs.size())
    {
        cout<<pqs.top()<<" ";
        pqs.pop();
    }
    set<int> set1={1,2,3,3,4,5,6,7};
    set1.insert(8);
    set1.insert(9);
    set1.insert(10);
    cout<<"The size of the set is->"<<set1.size();
    cout<<endl;
    cout<<"Checking whther the set is empty or not->"<<set1.empty();
    cout<<endl;
    //Traversing the set 
    cout<<"Printing the set element->"<<endl;
    for(auto x: v)
    cout<<x<<" ";
    cout<<endl;
    cout<<"Checking whether 2 belong to the set or not->"<<endl;
    if(set1.end()!=set1.find(2))
    cout<<" 2 is present in the set";
    else
    cout<<" 2 is not present in the set";
    cout<<endl;
    //Multiset in stl
    multiset<int> mset={1,10,1,2,2,2,3,4,5,6};
    mset.insert(7);
    mset.insert(8);
    mset.insert(9);
    mset.insert(10);
    cout<<"The size of the set is->"<<mset.size();
    cout<<endl;
    for(auto x: mset)
    cout<<x<<" ";
    cout<<endl;
    //Checking whther a element belong to set or not
    cout<<"Checking 2 belong to multiset or not->"<<endl;
    if(mset.end()!=mset.find(2))
    cout<<"2 is present in the set";
    else
    cout<<"2 is not present in the set";
    cout<<endl;
    //Deleting the first ocurence of value in the set
    if(mset.end()!=mset.find(2))
    mset.erase(mset.find(2));
    else
    cout<<"The value you have enter is not present in the set";
    cout<<endl;
    for(auto x: mset)
    cout<<x<<" ";
    cout<<endl;
    //Deleting all ocurence of the multiset
    if(mset.end()!=mset.find(1))
    mset.erase(1);
    else
    cout<<"Element that you have entered is not present in the set";
    cout<<endl;
    for(auto x: mset)
    cout<<x<<" ";
    cout<<endl;

}