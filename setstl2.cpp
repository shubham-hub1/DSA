#include<bits/stdc++.h>
using namespace std;
int main()
{
    set<int> st= {1,2,3,4,5};
    cout<<"The size of the set is-"<<st.size();
    cout<<endl;
    set<int>::iterator it;
    for(it=st.begin();it!=st.end();it++)
    cout<<*it<<" ";
    cout<<endl;
    st.insert(6);
    set<int>::iterator it1;
    for(it1=st.begin();it1!=st.end();it1++)
    cout<<*it1<<" ";
    if(st.find(8)==st.end())
    cout<<"Element not present";
    else
    cout<<"Element present";
    cout<<endl;
    list<int> ls;
    ls.push_back(1);
    ls.push_front(0);
    ls.push_front(-1);
    ls.push_back(2);
    ls.push_back(3);
    ls.push_back(4);
    ls.pop_front();
    ls.pop_back();
    for(auto x:ls)
    cout<<x<<" ";
    cout<<endl;
    list<int>::iterator lit;
    for(lit=ls.begin();lit!=ls.end();lit++)
    cout<<*lit<<" ";
    cout<<endl;
    //Swapping on list to another list
    list<int> ls2;
    ls2.swap(ls);
    for(auto x: ls2)
    cout<<x<<" ";
    cout<<endl;
    //Knowing the size of the list
    cout<<"The size of the list->"<<ls2.size();
    cout<<endl;
    //Checking whther the list is empty or not
    cout<<"Chacking whther the list is empty or not->"<<ls.empty();
    cout<<endl;
    //Core functionality of the list
    cout<<"Checking out the core functionalyt of the list";
    cout<<endl;
    while(ls2.size())
    {
        cout<<ls2.front()<<" ";
        ls2.pop_front();
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
    cout<<"Checking whther the queue is empty or not->"<<qs.empty();
    cout<<endl;
    //printing the queue elemnt
    while(qs.size())
    {
        cout<<qs.front()<<" ";
        qs.pop();
    }

}