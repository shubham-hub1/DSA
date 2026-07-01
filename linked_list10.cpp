#include<iostream>
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
int max_of_linked_list()
{
    struct node * ptr=HEAD;
    int maxvalue=INT_MIN;
    while(ptr!=nullptr)
    {
        if(ptr->data > maxvalue)
        maxvalue=ptr->data;
        ptr=ptr->next;
    }
    return maxvalue;
}
int second_max_of_linked_list()
{
    int maxvalue=max_of_linked_list();
    int secondmax=INT_MIN;
    struct node * ptr=HEAD;
    while(ptr!=nullptr)
    {
        if(ptr->data > secondmax && ptr->data < maxvalue)
        secondmax=ptr->data;
        ptr=ptr->next;
    }
    return secondmax;
}
int min_of_linked_list()
{
    int minvalue=INT_MAX;
    struct node * ptr=HEAD;
    while(ptr!=nullptr)
    {
        if(ptr->data < minvalue)
        minvalue=ptr->data;
        ptr=ptr->next;
    }
    return minvalue;
}
int second_min_of_linked_list()
{
    struct node * ptr=HEAD;
    int minvalue=min_of_linked_list();
    int secondmin=INT_MAX;
    while(ptr!=nullptr)
    {
        if(ptr->data < secondmin && ptr->data > minvalue)
        secondmin=ptr->data;
        ptr=ptr->next;
    }
    return secondmin;
}
bool find(int key)
{
    struct node * ptr=HEAD;
    while(ptr!=nullptr)
    {
        if(ptr->data==key)
        return true;
        ptr=ptr->next;
    }
    return false;
}
void insertatbeg()
{
    struct node * newnode = new node;
    cout<<"Enter the new node value"<<endl;
    cin>>newnode->data;
    struct node * ptr=HEAD;
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
void insertatend()
{
    struct node* newnode= new node;
    cout<<"Enter the new node value"<<endl;
    cin>>newnode->data;
    struct node * ptr=HEAD;
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
void insertatmiddle()
{
    int key;
    cout<<"Enter the element after which you want to insert an element";
    cin>>key;
    bool present=find(key);
    if(present)
    {
        struct node * ptr=HEAD;
        struct node * newnode=new node;
        cout<<"Enter the new node value";
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
void deleteatbeg(){
    if(HEAD==nullptr)
    {
        return;
    }
    else{
    struct node * ptr=HEAD;
    HEAD=ptr->next;
    delete(ptr);
    }
}
void deleteatend(){
    struct node * ptr=HEAD;
   
    if(ptr==nullptr)
    {
        HEAD=nullptr;
    }
    else{
         struct node * qtr=ptr->next;
    while(qtr->next!=nullptr)
    {   ptr=qtr;
        qtr=qtr->next;
        
    }
    ptr->next=nullptr;
    delete(qtr);
}
}
void deleteatmiddle(){
    int key;
    cout<<"Enter the node that you want to delete";
    cin>>key;

    bool present=find(key);
    if(present)
    {
        struct node * ptr=HEAD;
        struct node * qtr=ptr->next;
        while(qtr->data!=key)
        {
            ptr=qtr;
            qtr=qtr->next;
        }
        ptr->next=qtr->next;
        delete(qtr);

    }
    else{
        cout<<"Enter the valid node";
    }
}
void  rotate(){
    struct node * current=HEAD;
    struct node * previous=current;
    struct node * future=current->next;
    previous->next=nullptr;
    while(current->next!=nullptr)
    {
        current=future;
        future=future->next;
        current->next=previous;
        previous=current;
    }
    HEAD=current;
}

int main()
{
    node n1,n2,n3,n4;
    n1.data=10;
    n2.data=20;
    n3.data=30;
    n4.data=40;
    HEAD=&n1;
    n1.next=&n2;
    n2.next=&n3;
    n3.next=&n4;
    n4.next=nullptr;
    traversal();
    cout<<endl;
    int maxvalue=max_of_linked_list();
    cout<<"The max of the linked list is->"<<maxvalue;
    cout<<endl;
    int secondmax=second_max_of_linked_list();
    if(secondmax==INT_MIN)
    cout<<"There is no second max";
    else
    cout<<"The second max of the linked list is->"<<secondmax;
    cout<<endl;
    int minvalue=min_of_linked_list();
    cout<<"The min of the linked list->"<<minvalue;
    int secondmin=second_min_of_linked_list();
    if(secondmin==INT_MAX)
    cout<<"There is no second min";
    else
    cout<<"The second min of the linked list is->"<<secondmin;
    cout<<endl;
    cout<<"Enter the element that you want to find out->"<<endl;
    int key;
    cin>>key;
    bool present=find(key);
    if(present)
    cout<<"Element present in the linked list";
    else
    cout<<"Element not present in the linked list";
    cout<<endl;
    //Adding node in the linked list
    insertatbeg();
    traversal();
    cout<<endl;
    insertatend();
    traversal();
    cout<<endl;
    insertatmiddle();
    traversal();
    cout<<endl;
    //Deleting a node in the linked list
    deleteatbeg();
    traversal();
    cout<<endl;
    deleteatend();
    traversal();
    cout<<endl;
    // deleteatmiddle();
    // traversal();
    // cout<<endl;
    rotate();
    traversal();
    cout<<endl;
    


}