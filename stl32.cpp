#include<bits/stdc++.h>
using namespace std;
int main()
{
    pair<int,int> p={1,2};
    cout<<p.first<<" "<<p.second<<endl;
    pair<pair<int,int>,pair<int,int>>p1={{1,2},{3,4}};
    cout<<p1.first.first<<" "<<p1.first.second<<" "<<p1.second.first<<" "<<p1.second.second;
    cout<<endl;
    pair<int,int>p2;
    p2.swap(p);
    cout<<p2.first<<" "<<p2.second<<endl;
    cout<<p.first<<" "<<p.second<<endl;
    p.first=123;
    p.second=234;
    cout<<p.first<<" "<<p.second;
    cout<<endl;
    vector<int> v={1,2,3,4,5,6,7,8,9,10};
    for(auto x: v)
    cout<<x<<" ";
    cout<<endl;
    //Another a traversal method
    vector<int> ::iterator it;
    for(it=v.begin();it!=v.end();it++)
    cout<<*it<<" ";
    cout<<endl;
    //Another traversal method
    for(int i=0;i<v.size();i++)
    cout<<v[i]<<" ";
    cout<<endl;
    cout<<"The size of the vector is->"<<v.size();
    cout<<endl;
    cout<<"Checking whther the vector is empty or not->"<<v.empty();
    cout<<endl;
    //Swapping the a vector to another vector
    vector<int> v1;
    v1.swap(v);
    for(auto x: v)
    cout<<x<<" ";
    cout<<endl;
    for(auto x: v1)
    cout<<x<<" ";
    cout<<endl;
    //Randomly accessing element in the list
    cout<<"Element at index->1="<<v1.at(1);
    cout<<endl;
    //Deleting range of value in the linked list->
    v1.erase(v1.begin(),v1.begin()+3);
    for(auto x: v1)
    cout<<x<<" ";
    cout<<endl;
    cout<<"This is list STL->"<<endl;
    list<int> ls={1,2,3,4,5,6,7,8,9,10};
    for(auto x: ls)
    cout<<x<<" ";
    cout<<endl;
    ls.push_back(11);
    ls.push_back(12);
    ls.push_back(13);
    ls.push_front(0);
    ls.push_front(-1);
    ls.pop_back();
    ls.pop_front();
    for(auto x: ls)
    cout<<x<<" ";
    cout<<endl;
    cout<<"The size of the list is->"<<ls.size();
    cout<<endl;
    cout<<"Checking whther the list is empty or not->"<<ls.empty();
    cout<<endl;
    list<int> ls1;
    ls1.swap(ls);
    for(auto x:ls1)
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
    //Traversing the stack 
    while(st.size())
    {
        cout<<st.top()<<" ";
        st.pop();
    }
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    stack<int> st2;
    st2.swap(st);
    cout<<"The size of the stack is->"<<st2.size();
    cout<<endl;
    cout<<"Checking Whther the stack is empty or not->"<<st2.empty();
    cout<<endl;
    queue<int> qs;
    qs.push(1);
    qs.push(2);
    qs.push(3);
    qs.push(4);
    qs.pop();
    cout<<"The size of the queue is->"<<qs.size()<<endl;
    cout<<endl;
    cout<<"Checking Whther the queue is empty or not->"<<qs.empty()<<endl;
    cout<<"Printing the front element in the queue is->"<<qs.front()<<endl;
    //Traversing Queue 
    while(qs.size())
    {
        cout<<qs.front()<<" ";
        qs.pop();
    }
    priority_queue<int> pqs;
    pqs.push(1);
    pqs.push(9);
    pqs.push(10);
    pqs.push(2);
    pqs.push(3);
    pqs.pop();
    cout<<"The top of the prirotiy que is ->"<<pqs.top();
    cout<<endl;
    //traversing the priority queue ->
   while(pqs.size())
   {
    cout<<pqs.top()<<" ";
    pqs.pop();
   }
   set<int> set1={1,2,3,4,5,9,8,7,6};
   cout<<"The size of the set is->"<<set1.size();
   cout<<endl;
   cout<<"Checking Whther the set is empty or not->"<<set1.empty();
   cout<<endl;
   //Traving the set
   for(auto x: set1)
   cout<<x<<" ";
   cout<<endl;
   set1.insert(11);
   set1.insert(12);
   cout<<endl;
   for(auto x: set1)
   cout<<x<<" ";
   cout<<endl;
   cout<<"Checking Whther the 2 belong in the set or not->"<<endl;
   if(set1.end()==set1.find(2))
   cout<<"Element is not present ";
   else
   cout<<"Element present in the set->";
   //Deleting an element in the set
   set1.erase(set1.find(2));
   for(auto x: set1)
   cout<<x<<" ";
   cout<<endl;
   //Multi set
   multiset<int> ms={1,1,1,2,2,2,3,4,5,6,7};
   cout<<"The size of the multiset is ->"<<ms.size();
   cout<<endl; 
   for(auto x: ms)
   cout<<x<<" ";
   cout<<endl;
   cout<<"Checking Whther the multiset is empty or not->"<<ms.empty();
   cout<<endl; 
   cout<<"Finding an eleemnt in the  multiset->"<<endl;
   if(ms.end()==ms.find(2))
   cout<<"Eleemnet 2 is not present in the multiset";
   else
   cout<<"Eleemnt present in the multiset";

   if(ms.end()==ms.find(11))
   cout<<"Element is not present in the multiset";
   else
   cout<<"Element present in the multiset";
   //Deleting the first instance of the of the numbe
   ms.erase(ms.find(2));
   for(auto x: ms)
   cout<<x<<" ";
   cout<<endl;
   //Deleting all instance of the element in the multiset
   ms.erase(1);
   for(auto x: ms)
   cout<<x<<" ";
   cout<<endl;
   

}