#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    pair<int,int> p={1,2};
    cout<<p.first<<" "<<p.second;
    cout<<endl;
    pair<pair<int,int>,pair<int,int>>p1={{1,2},{3,4}};
    cout<<p1.first.first<<" "<<p1.first.second<<" "<<p1.second.first<<" "<<p1.second.second;
    cout<<endl;
    pair<pair<int,int>,pair<int,int>>p2;
    p2.swap(p1);
    cout<<p2.first.first<<" "<<p1.first.second<<" "<<p1.second.first<<" "<<p2.second.second;
    cout<<endl;
    // Vector STL vector is the dynamic array which grow and shrink dynamically
    vector<int> v={1,2,3,4,5,6,7,8,9,10};
    //Traversing a vector
    for(auto x: v)
    cout<<x<<" ";
    cout<<endl;
    //Traversing a vector in other way
    for(int i=0;i<(int)(v.size());i++)
    cout<<v[i]<<" ";
    cout<<endl;
    //Traversing a vector in third form
    vector<int>::iterator it;
    for(it=v.begin();it!=v.end();it++)
    cout<<*it<<" ";
    cout<<endl;
    //Finding the size of the vector
    cout<<"The size of the vector is ->"<<v.size();
    cout<<endl;
    //Checking Whther the vector is empty or not
    cout<<"Checking whther the vector is empty or not->"<<v.empty();
    cout<<endl;
    //Randomly Acessing vector element
    cout<<v.at(1); //This is means value at index "1" keep it mind index starts from 0
    //Deleting an element in the vector
    cout<<endl;
    v.erase(v.begin(),v.begin()+2); //These means deleting from 0 to 0+2-1->1
    for(auto x: v)
    cout<<x<<" ";
    cout<<endl;
    //Swapping one vector value to another vector leaving previous vector empty
    vector<int> v1;
    v1.swap(v);
    //Printing the previous vector
    cout<<"Printing the previoud vector"<<endl;
    for(auto x: v)
    cout<<x<<" ";
    cout<<endl;
    cout<<"Printing the new vector->"<<endl;
    for(auto x: v1)
    cout<<x<<" ";
    cout<<endl;
    //List stl
    list<int> ls;
    ls.push_back(1);
    ls.push_back(2);
    ls.push_back(3);
    ls.push_back(4);
    ls.push_back(5);
    ls.push_back(6);
    ls.push_front(0);
    ls.push_front(-1);
    ls.pop_front();
    ls.pop_back();
    //Taversing the list
    //Method 1
    for(auto x: ls)
    cout<<x<<" ";
    cout<<endl;
    //Method 2
    list<int>::iterator lit;
    for(lit=ls.begin();lit!=ls.end();lit++)
    cout<<*lit<<" ";
    cout<<endl;
    //Printing the size of the list
    cout<<"The size of the list is->"<<ls.size();
    cout<<endl;
    cout<<"checking whther the list is empty or not->"<<ls.empty();
    cout<<endl;
    //Empty a list
    while(ls.size())
    {
        cout<<ls.front()<<" ";
        ls.pop_front();

    }
    //Stack stl
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
    st.pop();
    cout<<"The size of the stack is->"<<st.size();
    cout<<endl;
    cout<<"Checking whther the stack is empty or not->"<<st.empty();
    cout<<endl;
    //Printing the atsck element 
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
    st.pop();
    cout<<endl;
    //Swapping the stack element it works on LIFO
    stack<int> st1;
    st1.swap(st);
    while(st1.size())
    {
        cout<<st1.top()<<" ";
        st1.pop();
    }
    //Queue Stl it works on LIFO
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
    //Traversing the queue element
    while(qs.size())
    {
        cout<<qs.front()<<" ";
        qs.pop();
    }
    //Priority queue is queue but work as max heap stack max value always at the top
    priority_queue<int> pqs;
    pqs.push(5);
    pqs.push(4);pqs.push(3);
    pqs.push(2);
    pqs.push(1);
    pqs.push(0);
    pqs.pop();
    cout<<endl;
    cout<<"Printing the size of the priority queue->"<<pqs.size();
    cout<<endl;
    cout<<"Checking whther the priority queue is empty or not->"<<pqs.empty();
    cout<<endl;
    //Printing the prioty queue
    while(pqs.size())
    {
        cout<<pqs.top()<<" ";
        pqs.pop();
    }
    cout<<endl;
    //Set Stl -> it store the unique element
    set<int> s1={5,4,3,2,1,1,1,1};
    s1.insert(6);
    cout<<"Printing the size of the set->"<<s1.size()<<endl;
    cout<<"Checking whther the set is empty or not->"<<s1.empty();
    cout<<"Enter the element that you want to find out in the set";
    cout<<endl;
    int key;
    cin>>key;
    if(s1.end()!=s1.find(key))
    cout<<"Element is present in the set"<<endl;
    else
    cout<<"Element not present";
    //Printing the set element
    for(auto x:s1)
    cout<<x<<" ";
    cout<<endl;
    //Another way to traverse a set
    set<int>::iterator sit;
    for(sit=s1.begin();sit!=s1.end();sit++)
    cout<<*sit<<" ";
    cout<<endl;

}