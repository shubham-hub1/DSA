#include<bits/stdc++.h>
using namespace std;
int main()
{
    pair<int,int>p={1,2};
    cout<<p.first<<" "<<p.second;
    cout<<endl;
    pair<pair<int,int>,pair<int,int>>p1={{1,2},{3,4}};
    cout<<p1.first.first<<" "<<p1.first.second<<" "<<p1.second.first<<" "<<p1.second.second;
    cout<<endl;
    pair<int,int>p2;
    p2.first=10;
    p2.second=20;
    cout<<p2.first<<" "<<p2.second;
    cout<<endl;
    pair<int,int>p3;
    p3.swap(p2);
    cout<<p3.first<<" "<<p3.second;
    cout<<endl;
    cout<<"Previous pair is empty after swap";
    cout<<endl;
    cout<<p2.first<<" "<<p2.second;
    cout<<endl;
    vector<int> v={1,2,3,4,5,6,7,8,9,10};
    cout<<"The size of the vector is->"<<v.size();
    cout<<endl;
    cout<<"Checking whther the vector is empty or nor->"<<v.empty();
    cout<<endl;
    //Way of traversing an vector
    for(auto x: v)
    cout<<x<<" ";
    cout<<endl;
    for(int i=0;i<v.size();i++)
    cout<<v[i]<<" ";
    cout<<endl;
    vector<int> ::iterator it;
    for(it=v.begin();it!=v.end();it++)
    cout<<*it<<" ";
    cout<<endl;
    //Randoming accesing the paricular index in the vector;
    cout<<v.at(1);
    cout<<endl;
    //deleting a particular index in the vector
    v.erase(v.begin()+1,v.begin()+2); //Deltinf the vector indexx-1
    for(auto x: v)
    cout<<x<<" ";
    cout<<endl;
    //Deleting an range of value in the vector
    v.erase(v.begin()+2,v.begin()+5); //delting vector index 3&4
    for(auto x: v)
    cout<<x<<" ";
    cout<<endl;
    //swapping one vector to another vector
    vector<int>v1;
    v1.swap(v);
    v1.push_back(11);
    v1.push_back(12);
    v1.push_back(13);
    v1.push_back(0);
    v1.push_back(5);
    v1.pop_back();
    cout<<"Printing the previous vecctor"<<endl;
    for(auto x: v)
    cout<<x<<" ";
    cout<<endl;
    cout<<"printing the new vector value"<<endl;
    for(auto x: v1)
    cout<<x<<" ";
    cout<<endl;
    sort(v1.begin(),v1.end());
    for(auto x: v1)
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
    ls.pop_back();
    cout<<"The size of the list is->"<<ls.size();
    cout<<endl;
    cout<<"Checking wther the list is empty or not-."<<ls.empty();
    cout<<endl;
    //Traversing a list
    for(auto x: ls)
    cout<<x<<" ";
    cout<<endl;
    list<int> ::iterator lit;
    for(lit=ls.begin();lit!=ls.end();lit++)
    cout<<*lit<<" ";
    cout<<endl; 
    //Swapping a list in other list
    list<int> ls1;
    ls1.swap(ls);
    cout<<"After swappping previous list value";
    cout<<endl;
    for(auto x: ls)
    cout<<x<<" ";
    cout<<endl;
    cout<<"After swapping new list value";
    cout<<endl;
    for(auto x: ls1)
    cout<<x<<" ";
    cout<<endl;
    stack<int> stk;
    stk.push(1);
    stk.push(2);
    stk.push(3);
    stk.push(4);
    stk.push(5);
    stk.pop();
    cout<<"The size of the stack is ->"<<stk.size();
    cout<<endl;
    cout<<"Checking whther the stack is empty or not"<<stk.empty();
    cout<<endl;
    while(stk.size())
    {
        cout<<stk.top()<<" ";
        stk.pop();
    }
    stk.push(1);
    stk.push(2);
    stk.push(3);
    stk.push(4);
    stk.pop();
    stack<int> stk2;
    stk2.swap(stk);
    cout<<"The size of the new stack->"<<stk2.size();
    cout<<endl;
    cout<<"Checking whther the stack is empty or not->"<<stk2.empty();
    cout<<endl;
    while(stk2.size())
    {
        cout<<stk2.top()<<" ";
        stk2.pop();
    }
    queue<int> qs;
    qs.push(1);
    qs.push(2);
    qs.push(3);
    qs.push(4);
    qs.push(5);
    qs.pop();
    cout<<"The size of the queue is->"<<qs.size();
    cout<<endl;
    cout<<"checkin wether the queue is empty or not->"<<qs.empty();
    cout<<endl;
    while(qs.size())
    {
        cout<<qs.front()<<" ";
        qs.pop();
    }
    priority_queue<int> pqs;
    pqs.push(1);
    pqs.push(2);
    pqs.push(3);
    pqs.push(11);
    pqs.push(12);
    pqs.push(4);
    pqs.push(5);
    pqs.pop();
    cout<<"Checking the priority queue size ->"<<pqs.size();
    cout<<endl;
    cout<<"Checcking whther the priority queue is empty or not->"<<pqs.empty();
    cout<<endl;
    while(pqs.size())
    {
        cout<<pqs.top()<<" ";
        pqs.pop();
    }
    set<int> st={1,2,3,4,5,6,7,8,9,10};
    cout<<"The size of the set is ->"<<st.size();
    cout<<endl;
    cout<<"Chcking whther the set is empty or not";
    cout<<endl;
    //traversing the set
    for(auto x: st)
    cout<<x<<" ";
    cout<<endl;
    //Finding an element in the set
    //checking wther 3 is present in the set
    if(st.find(2)==st.end())
    cout<<"2 is not present in the set";
    else
    cout<<"2 is present in the set";
    //Deleting an element in the set
    if(st.find(2)!=st.end())
    st.erase(st.find(2));
    else
    cout<<"2 is not present in the set";
    cout<<endl;
    for(auto x: st)
    cout<<x<<" ";
    cout<<endl;
    multiset<int> mst={1,1,1,1,2,2,2,3,3,4,4,4,5,6};
    mst.insert(7);
    mst.insert(8);
    mst.insert(9);
    mst.insert(10);
    cout<<"The size of the multiset ->"<<mst.size();
    cout<<endl;
    cout<<"Checking whther the set is empty or not->"<<mst.empty();
    cout<<endl;
    for(auto x: mst)
    cout<<x<<" ";
    cout<<endl;
    //Finding an element in the multiset
    if(mst.find(2)==mst.end())
    cout<<"2 is not present in the set";
    else
    cout<<"2 is present in the set";
    //Deleting a value of number
    mst.erase(mst.find(2));
    for(auto x: mst)
    cout<<x<<" ";
    cout<<endl;
    mst.erase(2);
    for(auto x: mst)
    cout<<x<<" ";
    cout<<endl;
}