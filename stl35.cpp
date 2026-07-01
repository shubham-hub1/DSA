#include<bits/stdc++.h>
using namespace std;
int main()
{
    pair<int,int> p={1,2};
    cout<<p.first<<" "<<p.second<<endl;
    pair<pair<int,int>,pair<int,int>>p1={{1,2},{3,4}};
    cout<<p1.first.first<<" "<<p1.first.second<<" "<<p1.second.first<<" "<<p1.second.second<<endl;
    pair<int,int>p2;
    p2.swap(p);
    cout<<p2.first<<" "<<p2.second<<endl;
    vector<int>v={1,2,3,4,5,6,7,8,9,10};
    cout<<"The size of the vector is->"<<v.size();
    cout<<endl;
    cout<<"Checking whether the vector is empty or not->"<<v.empty();
    cout<<endl;
    //Traversing a vector
    for(auto x: v)
    cout<<x<<" ";
    cout<<endl; 
    //Traversing the vector in another way
    for(int i=0;i<v.size();i++)
    cout<<v[i]<<" ";
    cout<<endl;
    //Traversing the vector
    vector<int>::iterator it;
    for(it=v.begin();it!=v.end();it++)
    cout<<*it<<" ";
    cout<<endl;
    //Randoming acessing the vector element at a particular index
    cout<<v.at(2);
    cout<<endl;
    //Deleting a particular index element in the vector
    v.erase(v.begin()+1,v.begin()+2);
    for(auto x: v)
    cout<<x<<" ";
    cout<<endl;
    //Deleting the range of value
    v.erase(v.begin(),v.begin()+5);
    for(auto  x:v)
    cout<<x<<" ";
    cout<<endl;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);
    v.push_back(6);
    for(auto x:v)
    cout<<x<<" ";
    cout<<endl;
    sort(v.begin(),v.end());
    for(auto x: v)
    cout<<x<<" ";
    cout<<endl;
    list<int> ls;
    ls.push_back(1);
    ls.push_back(2);
    ls.push_back(3);
    ls.push_back(4);
    ls.push_back(5);
    ls.push_back(6);
    ls.push_back(7);
    cout<<"The size of the list is->"<<ls.size();
    cout<<endl;
    cout<<"Checking whther the list is empty or not->"<<ls.empty();
    cout<<endl;
    //Traversing the list
    for(auto x: ls)
    cout<<x<<" ";
    cout<<endl;
    //Another way to traverse the list
    list<int>::iterator lit;
    for(lit=ls.begin();lit!=ls.end();lit++)
    cout<<*lit<<" ";
    cout<<endl;
    ls.pop_back();
    ls.pop_back();
    ls.pop_front();
    ls.pop_front();
    for(auto x: ls)
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
    cout<<"The size of the stack is->"<<st.size();
    cout<<endl;
    cout<<"Checking whther the stack is empty or not->"<<st.empty();
    cout<<endl;
    cout<<"The top of the stack is->"<<st.top();
    cout<<endl;
    //visiting the stack
    while(st.size())
    {
        cout<<st.top()<<" ";
        st.pop();

    }
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
    cout<<"Checking whther the queue is empty or not->"<<qs.empty();
    cout<<endl;
    cout<<"Printing the front of the queue is->"<<qs.front();
    cout<<endl;
    //Traversing the queue element 
    while(qs.size())
    {
        cout<<qs.front()<<" ";
        qs.pop();

    }
    priority_queue<int> pqs;
    pqs.push(1);
    pqs.push(2);
    pqs.push(3);
    pqs.push(0);
    pqs.push(10);
    pqs.pop();
    cout<<"The size of the priority queue is->"<<pqs.size();
    cout<<endl;
    cout<<"checking wether the queue is empty or not->"<<pqs.empty();
    cout<<endl;
    while(pqs.size())
    {
        cout<<pqs.top()<<" ";
        pqs.pop();
        
    }
    cout<<endl;
    set<int> set1;
    set1.insert(1);
    set1.insert(2);
    set1={2,3,4,5,6,7,8,9,10};
    cout<<"The size of the set is->"<<set1.size();
    cout<<endl;
    cout<<"Checking whether is set is empty or not->"<<set1.empty();
    cout<<endl;
    //traversing the set
    for(auto x: set1)
    cout<<x<<" ";
    cout<<endl;
    cout<<"checking whther 2 is present in the set or not"<<endl;
    if(set1.find(2)==set1.end())
    cout<<"2 is not present";
    else
    cout<<"2 is present";
    cout<<endl;
    //Checking for the element which is not prsent
    if(set1.find(22)==set1.end())
    cout<<"22 is not present";
    else
    cout<<"22 is present ";
    cout<<endl;
    unordered_set<int> set2={1,2,3,4,5,6,7,7,8,8,1,1,3,3,10};
    cout<<"The size of the set->"<<set2.size();
    cout<<endl;
    cout<<"Checking whther set is empty or not->"<<set2.empty();
    cout<<endl;
    for(auto x: set2)
    cout<<x<<" ";
    cout<<endl;
    multiset<int> ms={1,1,1,2,2,2,3,3,4,4,5,5,5,6,7,8,9,10};
    cout<<"The size of the multiset is->"<<ms.size();
    cout<<endl;
    cout<<"Checking whther multiset is empty or not->"<<ms.empty();
    cout<<endl;
    //traversing in the multiset
    for(auto x: ms)
    cout<<x<<" ";
    cout<<endl;
}