#include<bits/stdc++.h>
using namespace std;
int main()
{
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
    cout<<"Printing the front of the stack ->"<<qs.front();
    cout<<endl;
    while(qs.size())
    {
        cout<<qs.front()<<" ";
        qs.pop();

    }
    //one last stl function in the stl
    queue<int> qs1;
    qs.push(1);
    qs.push(2);
    qs.push(3);
    qs.push(4);
    qs.push(5);
    qs1.swap(qs);
    cout<<endl;
    cout<<"The size of the queue is->"<<qs1.size();
    cout<<endl;
    cout<<"Checking whtehr the queue is empty or not->"<<qs1.empty();
    cout<<endl;
    while(qs1.size())
    {
        cout<<qs1.front()<<" ";
        qs1.pop();
        
    }
}