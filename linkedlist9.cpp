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
 void insertatbeg(struct node * ptr)
 {
    struct node * newnode= new node;
    cout<<"Enter the new node value";
    cin>>newnode->data;
    if(ptr==nullptr){
    HEAD=newnode;
    newnode->next=nullptr;
    }
    else
    {
        newnode->next=HEAD;
        HEAD=newnode;
    }
 }
 void insertatend(struct node * ptr)
 {
    struct node * newnode= new node;
    cout<<"Enter the new node value";
     cin>>newnode->data;
    if(HEAD==nullptr)
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
 void insertatmiddle(struct node * ptr)
 {
    struct node * newnode= new node;
    cout<<"Enter the new node value";
    cout<<endl;
    cin>>newnode->data;
    cout<<endl;
    cout<<"Enter the node after you want to add the new node";
    int key;
    cin>>key;
    int result=find(HEAD,key);
    if(result)
    {
        while(ptr->data!=key)
        ptr=ptr->next;
        //ptr=ptr->next;
        newnode->next=ptr->next;
        ptr->next=newnode;

    }
    else
    {
        cout<<"Enter a valid node";
    }
 }
 void deleteatbeg(struct node * ptr)
 {
    if(ptr==nullptr)
    return;
    else{
        HEAD=ptr->next;
        free(ptr);
    }
 }
 void deleteatend(struct node * ptr)
 {
    if(ptr==nullptr)
    return;
    else
    {
        while(ptr!=nullptr)
        {
            ptr=ptr->next;
        }
        free(ptr);
    }
 }
int main()
{
    node node1,node2,node3,node4,node5;
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
    traversal(HEAD);
    cout<<endl;
    cout<<"Enter the node that you want to find out->"<<endl;
    int key;
    cin>>key;
    bool result=find(HEAD,key);
    if(result)
    cout<<"Element found";
    else
    cout<<"Element not found";
    cout<<endl;
    //Adding node in the linked list
    insertatbeg(HEAD);
    traversal(HEAD);
    cout<<endl;
    //Adding node in the linked list
    insertatend(HEAD);
    traversal(HEAD);
    cout<<endl;
    insertatmiddle(HEAD);
    traversal(HEAD);
    cout<<endl;
    //Deleting a   node in linked
    deleteatbeg(HEAD);
    traversal(HEAD);
    cout<<endl;
    deleteatend(HEAD);
    traversal(HEAD);
    cout<<endl;
}