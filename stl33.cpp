#include<bits/stdc++.h>
using namespace std;
void printarray(vector<int> &v)
{
    for(int i=0;i<v.size();i++)
    cout<<v[i]<<" ";

}
int main(){
    pair<int,int>p={1,2};
    cout<<p.first<<" "<<p.second<<endl;
    pair<pair<int,int>,pair<int,int>>p1={{1,2},{3,4}};
    cout<<p1.first.first<<" "<<p1.first.second<<" "<<p1.second.first<<" "<<p1.second.second;
    cout<<endl;
    pair<int,int>p2;
    p2.swap(p);
    cout<<"After swapping the pair->"<<endl;
    cout<<p.first<<" "<<p.second;
    cout<<endl;
    cout<<"Value swapped in the pair"<<endl;
    cout<<p2.first<<" "<<p2.second;
    cout<<endl;
    //Assigning value in the vector
    pair<pair<int,int>,pair<int,int>>p3;
    p3.first.first=10;
    p3.first.second=20;
    p3.second.first=30;
    p3.second.second=40;
    cout<<p3.first.first<<" "<<p3.first.second<<" "<<p3.second.first<<" "<<p3.second.second<<endl;
    vector<int>v={1,2,3,4,5,6,7,8,9,10};
    cout<<"The size of the vector->"<<v.size();
    cout<<endl;
    cout<<"Checking whether the vector is empty or not->"<<v.empty();
    cout<<endl;
    //Printing a vector
    printarray(v);
    //Randoming accessing the vector
    cout<<"The Element value at index->3 is->"<<v.at(3);
    cout<<endl;
    //traversing the vector 
    for(auto x: v)
    cout<<x<<" ";
    cout<<endl;
    vector<int>::iterator it;
    for(it=v.begin();it!=v.end();it++)
    cout<<*it<<" ";
    cout<<endl;
    for(int i=0;i<v.size();i++)
    cout<<v[i]<<" ";
    cout<<endl;
    //Delting a particular index in the vector
    v.erase(v.begin()+1,v.begin()+2);
    for(auto x:v)
    cout<<x<<" ";
    cout<<endl;
    //Deleting a range of value in the vector
    v.erase(v.begin(),v.begin()+5);
    for(auto x: v)
    cout<<x<<" ";
    cout<<endl;
    //List stl
    list<int> ls;
    ls.push_back(2);
    ls.push_back(3);
    ls.push_back(4);
    ls.push_back(5);
    ls.push_back(6);
    ls.push_back(7);
    ls.push_front(1);
    ls.push_front(0);
    ls.pop_front();
    ls.pop_back();
    cout<<"The size of the list is->"<<ls.size();
    cout<<endl;
    cout<<"Checking out whther the list is empty or not->"<<ls.empty();
    cout<<endl;
   //Traversing the list
   for(auto x: ls)
   cout<<x<<" ";
   cout<<endl;
   //Another method to traverse a list
   list<int>::iterator lit;
   for(lit=ls.begin();lit!=ls.end();lit++)
   cout<<*lit<<" ";
   cout<<endl;
   //Stack STL
   stack<int> st;
   st.push(1);
   st.push(2);
   st.push(3);
   st.push(4);
   st.push(5);
   st.pop();
   cout<<"The size of the stack is->"<<st.size();
   cout<<endl;
   cout<<"Checking wther the stack is empty or not->"<<st.empty();
   cout<<endl;
   //traversing the stack
   while(st.size())
   {
    cout<<st.top()<<" ";
    st.pop();
   }

}