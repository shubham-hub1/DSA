#include<iostream>
#include<bits/stdc++.h>
using namespace std;
struct node{
    int data;
    struct node * next;
};
struct node * HEAD=nullptr;
void traversal()
{
    struct node * ptr=HEAD;
    while(ptr!=nullptr)
    {
        cout<<ptr->data<<" ";
        ptr=ptr->next;
    }
}
void delete1()
{    cout<<"Enter the node that you want to delete";
    int key;
    cin>>key;
    cout<<endl;
    struct node * ptr=HEAD;
    struct node * qtr=ptr->next;
    while(qtr->data!=key)
    {
        qtr=qtr->next;
        ptr=ptr->next;
    }
    
    ptr->next=qtr->next;
    delete qtr;
}
int main()
{
struct node node1,node2,node3,node4;
node1.data=10;
node1.next=&node2;
node2.data=20;
node2.next=&node3;
node3.data=30;
node3.next=&node4;
node4.data=40;
node4.next=nullptr;
HEAD=&node1;
traversal();
delete1();
traversal();
}