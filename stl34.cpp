#include<bits/stdc++.h>
using namespace std;
int main()
{
    pair<int,int>p={1,2};
    cout<<p.first<<" "<<p.second<<endl;
    pair<pair<int,int>,pair<int,int>>p1={{1,2},{3,4}};
    cout<<p1.first.first<<" "<<p1.first.second<<" "<<p1.second.first<<" "<<p1.second.second<<endl;
    pair<int,int>p2;
    p2.swap(p);
    cout<<"After the swapping value of the previous pair"<<endl;
    cout<<p.first<<" "<<p.second;
    cout<<endl;
    cout<<"After swapping the new pair value"<<endl;
    cout<<p2.first<<" "<<p2.second<<endl;
    vector<int> v={1,2,3,4,5,6,7,9,10};
    cout<<"The size of the vector is->"<<v.size();
    cout<<"checking whether vector is empty or not->"<<v.empty();
    cout<<endl;
    //Traversing a vector
    for(int i=0;i<v.size();i++)
    cout<<v[i]<<" ";
    cout<<endl;
    //traversing in other way
    for(auto x: v)
    cout<<x<<" ";
    cout<<endl;
    //traversing in other way
    vector<int>::iterator it;
    for(it=v.begin();it!=v.end();it++)
    cout<<*it<<" ";
    cout<<endl;
    //Swapping the vector to another vector
    vector<int> v1;
    v1.swap(v);
    cout<<"The value of the new vector id->"<<endl;
    for(auto x: v1)
    cout<<x<<" ";
    cout<<endl;
    cout<<"The value of the previous vector is->"<<endl;
    for(auto x: v)
    cout<<x<<" ";
    cout<<endl;
    //Randoming acessing the vector element 
    cout<<"The value of the element at index->2(0-Based index) is ->"<<v1.at(2);
    cout<<endl;
    //Deleting a particular index in the vector
    v1.erase(v1.begin()+1,v1.begin()+2);
    for(auto x: v1)
    cout<<x<<" ";
    cout<<endl;
    //deleting a range off value in the vector
    v1.erase(v1.begin(),v1.begin()+4);
    for(auto x: v1)
    cout<<x<<" ";
    cout<<endl;
    //queue stl 
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
    cout<<"checking whether the queue is empty or not->"<<qs.empty();
    cout<<endl;
    //Traversing the queue 
    while(qs.size())
    {
    cout<<qs.front()<<" ";
    qs.pop();
    }

    //Stack Stl
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
    cout<<"checking the wther stack is empty or not->"<<st.empty();
    cout<<endl;
    //traversing the stack
    while(st.size())
    {
        cout<<st.top()<<" ";
        st.pop();
    }
    priority_queue<int>pqs;
    pqs.push(1);
    pqs.push(2);
    pqs.push(3);
    pqs.push(11);
    pqs.push(0);
    pqs.push(12);
    pqs.pop();
    cout<<"The size of the priority queue ->"<<pqs.size();
    cout<<endl;
    cout<<"Checking wether is queue is empty or not->"<<pqs.empty();
    cout<<endl;
    cout<<"printing the max value of the queue->"<<pqs.top();
    cout<<endl;
    //Taversing the stack
    while(pqs.size())
    {
        cout<<pqs.top()<<" ";
        pqs.pop();
        
    }
    cout<<endl;
    set<int> s={1,2,3,4,5,5,5,6,7,8};
    for(auto x: s)
    cout<<x<<" ";
    cout<<endl;
    s.insert(9);
    s.insert(10);
    s.insert(11);
    cout<<"The size of the set is ->"<<s.size();
    cout<<endl;
    cout<<"checking wether set is empty or not->"<<s.empty();
    cout<<endl;
    //Finding an element in the set 
    cout<<"Checking 2 belong to set or not->"<<endl;
    if(s.end()==s.find(2))
    cout<<"Element not present in the set";
    else
    cout<<"Element is present in the set";
    cout<<endl;
    cout<<"Cjhecking wther 112 is present in the set or not";
    if(s.end()==s.find(112))
    cout<<"Element is not present in the set";
    else
    cout<<"Element present in the set";
    cout<<endl;
    //Multiset which is similar to set but it cqan have dupiiacate value
    multiset<int> ms={1,2,2,3,4,5,6,7,89,10,10};
    cout<<"The size of the multiset is->"<<ms.size();
    cout<<endl;
    cout<<"checking whether is multiset is empty or not ->"<<ms.empty();
    cout<<endl;
    //traversing in the multiset
    for(auto x: ms)
    cout<<x<<" ";
    cout<<endl;
    //Deleting the first instance of the element 
    ms.erase(ms.find(2));
    for(auto x: ms)
    cout<<x<<" ";
    cout<<endl;
    //Deleting all the instance of the element in the multiset
    ms.erase(10);
    for(auto x: ms)
    cout<<x<<" ";
    cout<<endl;
    //Iska bhai a unsoder set
    unordered_set<int> us={1,1,2,2,3,4,5,6,7,8};
    cout<<"The size of the set->"<<us.size();
    cout<<endl;
    cout<<"checking whther the set is empty or not->"<<us.empty();
    cout<<endl;
    for(auto x:us)
    cout<<x<<" ";
    cout<<endl;
    unordered_multiset<int> uns={1,1,1,1,2,2,3,3,3,4,5,6,7,8,9,10};
    cout<<"Size of the unoder multiset ->"<<uns.size();
    cout<<endl;
    cout<<"Checking Whther the multiset is empty or not->"<<uns.empty();
    cout<<endl;
    //Traversing the ounder multiset set
    for(auto x:uns)
    cout<<x<<" ";
    cout<<endl;




}