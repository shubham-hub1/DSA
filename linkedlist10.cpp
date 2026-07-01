#include<iostream>
using namespace std;
struct node{
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
int max_linked_list(struct node * ptr)
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
int min_linked_list(struct node * ptr)
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
void insert_at_beg(struct node * ptr)
{
    struct node * newnode=new node;
    cout<<"Enter the new node value->";
    cout<<endl;
    cin>>newnode->data;
    if(ptr==nullptr)
    {
        HEAD=newnode;
        newnode->next=nullptr;
    }
    else{
        newnode->next=HEAD;
        HEAD=newnode;
    }
}
void insert_at_end(struct node * ptr)
{
    struct node * newnode=new node;
    cout<<"Enter the new node value";
    cout<<endl;
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
void insert_at_middle(struct node * ptr)
{
    cout<<"Enter the node value after you want to add node";
    cout<<endl;
    int key;
    cin>>key;
    bool result=find(ptr,key);
    
    if(result)
    { struct node * newnode = new node;
        cout<<"Enter the new node value";
        cout<<endl;
        cin>>newnode->data;
        while(ptr->data!=key)
        ptr=ptr->next;
        newnode->next=ptr->next;
        ptr->next=newnode;

    }
    else
    {    cout<<endl;
        cout<<"Element not found";
    }
}
void delete_at_beg(struct node * ptr)
{
    if(ptr==nullptr)
    return ;
    HEAD=ptr->next;
    free(ptr);
}
void  delete_at_end(struct node * ptr)
{  struct node * qtr=ptr->next;
    while(qtr->next!=nullptr){
    ptr=qtr;
    qtr=qtr->next;
    }
    ptr->next=nullptr;
    free(qtr);
}
int main()
{
    struct node node1,node2,node3,node4,node5;
    node1.data=10;
    node2.data=20;
    node3.data=30;
    node4.data=40;
    node5.data=50;
    HEAD=&node1;
    node1.next=&node2;
    node2.next=&node3;
    node3.next=&node4;
    node4.next=&node5;
    node5.next=nullptr;
    //traversal of the linked list
    traversal(HEAD);
    cout<<endl;
    //Finding max of the linked list
    int maxvalue=max_linked_list(HEAD);
    cout<<"The max of the linked list->"<<maxvalue;
    cout<<endl;
    int minvalue=min_linked_list(HEAD);
    cout<<"The min of the linked list->"<<minvalue;
    cout<<endl;
    //Adding node in tl lnked list
    insert_at_beg(HEAD);
    traversal(HEAD);
    cout<<endl;
    insert_at_end(HEAD);
    traversal(HEAD);
    cout<<endl;
    insert_at_middle(HEAD);
    traversal(HEAD);
    cout<<endl;
    //Deleting a node in linked list 
    delete_at_beg(HEAD);
    traversal(HEAD);
    cout<<endl;
    delete_at_end(HEAD);
    traversal(HEAD);
    cout<<endl;

}