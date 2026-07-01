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
int second_max_of_linked_list(struct node * ptr)
{
    int secondmax=INT_MIN;
    int maxvalue=max_of_linked_list(ptr);
    while(ptr!=nullptr)
    {
        if(ptr->data>secondmax && ptr->data < maxvalue)
        secondmax=ptr->data;
        ptr=ptr->next;
    }
    return secondmax;
}
int second_min_linked_list(struct node * ptr)
{
    int secondmin=INT_MAX;
    int min=min_of_linked_list(ptr);
    while(ptr!=nullptr)
    {
        if(ptr->data<secondmin && ptr->data > min)
        secondmin=ptr->data;
        ptr=ptr->next;
    }
    return secondmin;
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
    cout<<endl;
    cin>>newnode->data;
    if(ptr==nullptr)
    {
        HEAD=newnode;
        newnode->next=nullptr;
    }
    else{
        newnode->next=ptr;
        HEAD=newnode;
    }
}
void insertatend(struct node * ptr)
{
    struct node * newnode= new node;
    cout<<"Entert the new node value";
    cout<<endl;
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
void  insertatmiddle(struct node * ptr)
{
    cout<<"Enter the node after you want to add new node"<<endl;
    int key;
    cin>>key;
    bool present=find(ptr,key);
    if(present)
    {
        struct node * newnode= new node;
        cout<<"Enter the new node value";
        cin>>newnode->data;
        while(ptr->data!=key)
        ptr=ptr->next;
        newnode->next=ptr->next;
        ptr->next=newnode;

    }
    else
    {
        cout<<"Enter a valid node";
    }
}
void  deletebeg(struct node * ptr)
{
    if(ptr==nullptr)
    return;
    else{
        HEAD=ptr->next;
        free(ptr);
    }
}
void deleteend(struct node * ptr)
{
    while(ptr->next->next!=nullptr)
    ptr=ptr->next;
    struct node * qtr=ptr->next;
    ptr->next=nullptr;
    free(qtr);

}
void deleteatmiddle(struct node * ptr)
{
    cout<<"Enter the node that you want to delete";
    cout<<endl;
    int key;
    cin>>key;
    bool present= find(ptr,key);
    if(present)
    { struct node * qtr=ptr->next;
        while(qtr->data!=key)
        {
            ptr=qtr;
            qtr=qtr->next;
        }
        ptr->next=qtr->next;
        free(qtr);

    }
    else{
        cout<<"Enter a valid note";
        
    }
}
void rotate_linked_list(struct  node * ptr){
if(ptr==nullptr)
return;
struct node * next=ptr->next;
struct node * previous=ptr;
previous->next=nullptr;
while(next!=nullptr)
{
    ptr=next;
    ptr->next=previous;
    previous=ptr;

}

}

int main()
{
    struct node node1,node2,node3,node4,node5;
    HEAD=&node1;
    node1.data=10;
    node1.next=&node2;
    node2.data=20;
    node2.next=&node3;
    node3.data=30;
    node3.next=&node4;
    node4.data=40;
    node4.next=&node5;
    node5.data=50;
    node5.next=nullptr;
    traversal(HEAD);
    cout<<endl;
    //Finding the max of the linked list
    int maxvalue=max_of_linked_list(HEAD);
    cout<<"The max of the linked list->"<<maxvalue<<endl;
    int minvalue=min_of_linked_list(HEAD);
    cout<<"The min of the linked list->"<<minvalue<<endl;
    int secondmax=second_max_of_linked_list(HEAD);
    cout<<"The second max of the linked list is->"<<secondmax;
    cout<<endl;
    int secondmin=second_min_linked_list(HEAD);
    cout<<"The second min of the linked list->"<<secondmin;
    cout<<endl;
    //Finding a node in the linked list
    cout<<"Enter the node that you want to find out->"<<endl;
    int key;
    cin>>key;
    bool present=find(HEAD,key);
    if(present)
    cout<<"Element present in the linked list";
    else
    cout<<"Element not present in the linked list";
    cout<<endl;
    //Adding a node in the linked list
    insertatbeg(HEAD);
    traversal(HEAD);
    cout<<endl;
    insertatend(HEAD);
    traversal(HEAD);
    cout<<endl;
    insertatmiddle(HEAD);
    traversal(HEAD);
    cout<<endl;
    //Deleting a node in the linked list
    deletebeg(HEAD);
    traversal(HEAD);
    cout<<endl;
    deleteend(HEAD);
    traversal(HEAD);
    cout<<endl;
    deleteatmiddle(HEAD);
    traversal(HEAD);
    cout<<endl;
    //Rotate an linked list
    rotate_linked_list(HEAD);
    traversal(HEAD);
    cout<<endl;


}