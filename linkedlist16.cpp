#include<iostream>
using namespace std;
struct node{
    int data;
    node * next;
};
struct node * HEAD;
void traversal(node * ptr)
{
    while(ptr!=nullptr)
    {
        cout<<ptr->data<<" ";
        ptr=ptr->next;
    }
}
bool find(node * ptr,int key)
{
    while(ptr!=nullptr)
    {
        if(ptr->data==key)
        return true;
        ptr=ptr->next;
    }
    return false;
}
int max_of_linked_list(node * ptr)
{
    int maxvalue=INT_MIN;
    while(ptr!=nullptr)
    {
        if(ptr->data > maxvalue)
        maxvalue=ptr->data;
        ptr=ptr->next;
    }
    return maxvalue;
}
int min_of_linked_list(node * ptr)
{
    int minvalue=INT_MAX;
    while(ptr!=nullptr)
    {
        if(ptr->data < minvalue)
        minvalue=ptr->data;
        ptr=ptr->next;
    }
    return minvalue;
}
void insertatbeg(node * ptr )
{
    node * newnode= new node;
    cout<<"Enter the newnode value->"<<endl;
    cin>>newnode->data;
    if(ptr==nullptr){
    HEAD=newnode;
    newnode->next=nullptr;
    }
    else{
        newnode->next=ptr;
        HEAD=newnode;
    }
}
void insertatend(node * ptr)
{
    node * newnode= new node;
    cout<<"Enter the new node value->"<<endl;
    cin>>newnode->data;
    if(ptr==nullptr)
    {
        HEAD=newnode;
        newnode->next=nullptr;
    }
    else{
        while(ptr->next!=nullptr)
        ptr=ptr->next;
        ptr->next=newnode;
        newnode->next=nullptr;
    }
}
void insertatmid(node * ptr)
{
    cout<<"Enter the node value after which you want to add new node";
    cout<<endl;
    int key;
    cin>>key;
    bool present=find(ptr,key);
    if(present)
    {
        struct node * newnode= new node;
        cout<<"Enter the new node value"<<endl;
        cin>>newnode->data;
        while(ptr->data!=key)
        ptr=ptr->next;
        newnode->next=ptr->next;
        ptr->next=newnode;

    }
    else{
        cout<<"Enter a valid node";
    }
}
int count(node * ptr)
{
    int count=0;
    while(ptr!=nullptr)
    {
        count++;
        ptr=ptr->next;
    }
    return count;
}
void reverse(node * ptr)
{
    node * previous=ptr;
    node * next= ptr->next;
    previous->next=nullptr;
    while(ptr->next!=nullptr)
    {
        ptr=next;
        next=next->next;
        ptr->next=previous;
        previous=ptr;

    }
    HEAD=ptr;
}
int main()
{
    node node1,node2,node3,node4;
    node1.data=10;
    node2.data=20;
    node3.data=30;
    node4.data=40;
    HEAD=&node1;
    node1.next=&node2;
    node2.next=&node3;
    node3.next=&node4;
    node4.next=nullptr;
    traversal(HEAD);
    cout<<endl;
    cout<<"Enter the element that you want to find out in the linked list->"<<endl;
    int key;
    cin>>key;
    bool present=find(HEAD,key);
    if(present)
    cout<<"Element present in the linked list->"<<endl;
    else
    cout<<"Element not present in the linked list"<<endl;
    int maxvalue=max_of_linked_list(HEAD);
    cout<<"The max of the linked list is->"<<maxvalue;
    int minvalue=min_of_linked_list(HEAD);
    cout<<"The min of the linked list is->"<<minvalue;
    cout<<endl;
    insertatbeg(HEAD);
    traversal(HEAD);
    cout<<endl;
    insertatend(HEAD);
    traversal(HEAD);
    cout<<endl;
    insertatmid(HEAD);
    traversal(HEAD);
    cout<<endl;
    int count1=count(HEAD);
    cout<<"The number of node in the linked list->"<<count1;
    cout<<endl;
    reverse(HEAD);
    traversal(HEAD);
    cout<<endl;

}