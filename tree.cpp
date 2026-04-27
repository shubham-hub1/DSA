#include<iostream>
using namespace std;
struct node
{
    int data;
    struct node * next;
};
struct node *HEAD=nullptr;
void reverse()
{
    struct node * ptr=HEAD;
    struct node * next=ptr->next;
    
}
void traversal(struct node * ptr)
{
    if(ptr==nullptr)
    return;
    cout<<ptr->data<<" ";
    traversal(ptr->next);
}
void traversal1()
{
    struct node * ptr=HEAD;
    if(ptr==nullptr)
    return ;
    while(ptr!=nullptr)
    {
        cout<<ptr->data<<" ";
        ptr=ptr->next;
    }
}
int max_of_linked_list(struct node * ptr)
{
    int max=INT_MIN;
    if(ptr==nullptr)
    return -1;
    while(ptr!=nullptr)
    {
        if(ptr->data>max)
        max=ptr->data;
        ptr=ptr->next;
    }
    return max;
}
int min_of_linked_list()
{
    struct node * ptr=HEAD;
    int min=INT_MAX;
    if(ptr==nullptr)
    return min;
    while(ptr!=nullptr)
    {
        if(ptr->data<min)
        min=ptr->data;
        ptr=ptr->next;
    }
    return min;
}
int main()
{
    struct node node1,node2,node3,node4;
    node1.data=10;
    node2.data=20;
    node3.data=30;
    node4.data=40;
    node1.next=&node2;
    node2.next=&node3;
    node3.next=&node4;
    node4.next=nullptr;
    HEAD=&node1;
    traversal(HEAD);
    cout<<endl;
    traversal1();
    cout<<endl;
    int max=max_of_linked_list(HEAD);
    if(max==-1)
    cout<<"Linked list is empty";
    else
    cout<<"The max of linked list is->"<<max;
    cout<<endl;
    int min=min_of_linked_list();
    if(min==INT_MAX)
    cout<<"linked list is empty";
    else
    cout<<"The minimum of the linked list->"<<min;
    cout<<endl;
    //reverse a linked list
    reverse();
    traversal1();
    
}