#include<iostream>
using namespace std;
struct node {
    int data;
    struct node * next;
};
struct node * HEAD;
void traversal(struct node * ptr)
{
    while(ptr!=nullptr)
    {
        cout<<ptr->data<<" ";
        ptr=ptr->next;
    }
}
int max_of_linked_list(struct node * ptr)
{
    int maxvalue=INT_MIN;
    while(ptr!=nullptr)
    {
        if(ptr->data>maxvalue)
        maxvalue=ptr->data;
        ptr=ptr->next;
    }
    return maxvalue;
}
int min_of_linked_list(struct node * ptr)
{
    int minvalue=INT_MAX;
    while(ptr!=nullptr)
    {
        if(ptr->data<minvalue)
        minvalue=ptr->data;
        ptr=ptr->next;
    }
    return minvalue;
}
int count_of_node_linked_list(struct node * ptr)
{
    int count=0;
    while(ptr!=nullptr)
    {
        count++;
        ptr=ptr->next;
    }
    return count;
}
void insertatbeg(struct node * ptr)
{
    struct node * newnode= new node;
    cout<<"Enter the new node value";
    cin>>newnode->data;
    cout<<endl;
    if(ptr==nullptr)
    {
        HEAD=newnode;
        newnode->next=nullptr;
    }
    else
    {
        newnode->next=ptr;
        HEAD=newnode;
    }
}
void inseratend(struct node * ptr)
{
    struct node * newnode=new node;
    cout<<"Enter the new node value";
    cin>>newnode->data;
    if(ptr==nullptr)
    {
        HEAD=newnode;
        newnode->next=nullptr;
    }
    else{
        while(ptr->next!=nullptr)
        {
            ptr=ptr->next;
        }
        ptr->next=newnode;
        newnode->next=nullptr;
    }
}
bool find(struct node * ptr,int key)
{
    while(ptr!=nullptr)
    {
        if(ptr->data==key)
        return true;
        ptr=ptr->next;
    }
    return false;
}
void insertatmid(struct node * ptr)
{
    cout<<"Enter the node after you want to add node";
    int key;
    cout<<endl;
    cin>>key;
    bool result=find(ptr,key);
    if(result)
    {
         struct node * newnode = new node;
         cout<<"Enter the new node value";
         cout<<endl;
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
int main()
{
    struct node n1,n2,n3,n4;
    n1.data=10;
    n2.data=20;
    n3.data=30;
    n4.data=40;
    HEAD=&n1;
    n1.next=&n2;
    n2.next=&n3;
    n3.next=&n4;
    n4.next=nullptr;
    traversal(HEAD);
    cout<<endl;
    int maxvalue=max_of_linked_list(HEAD);
    cout<<"The max of the linked list->"<<maxvalue;
    cout<<endl;
    int minvalue=min_of_linked_list(HEAD);
    cout<<"The min of the linked list is->"<<minvalue;
    cout<<endl;
    int count=count_of_node_linked_list(HEAD);
    cout<<"The number of node in the linked list is->"<<count;
    cout<<endl;
    //Inserting an node in the linked list
    insertatbeg(HEAD);
    traversal(HEAD);
    cout<<endl;
    inseratend(HEAD);
    traversal(HEAD);
    cout<<endl;
    insertatmid(HEAD);
    traversal(HEAD);
    cout<<endl;
    //Deleting a node in the linked list
    deleteatbeg(HEAD);
    traversal(HEAD);
    cout<<endl;



}