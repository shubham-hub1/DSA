#include<iostream>
#include<bits/stdc++.h>
struct node{
    int data;
    struct node * next;
};
struct node * HEAD =nullptr;
using namespace std;
void traversal()
{
    struct node * ptr= HEAD;
    while(ptr!=nullptr)
    {
        cout<<ptr->data<<" ";
        ptr=ptr->next;
    }
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
int count_nodes(){
    int count=0;
    struct node * ptr=HEAD;
    while(ptr!=nullptr)
    {
        count++;
        ptr=ptr->next;
    }
    return count;
}
void insertatbeg()
{
    node * newnode= new node;
    cout<<"Enter the new node value->"<<endl;
    cin>>newnode->data;
    if(HEAD==nullptr)
    {
        HEAD=newnode;
        newnode=nullptr;
    }
    else{
        newnode->next=HEAD;
        HEAD=newnode;
    }
}
void insertatend()
{
    struct node * ptr=HEAD;
    struct node * newnode = new node;
    cout<<"Enter the new node value->"<<endl;
    cin>>newnode->data;
    if(ptr==nullptr){
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
    cout<<"Enter the node value after you want to add new node->"<<endl;
    int key;
    cin>>key;
    bool present=find(key);
    if(present)
    { struct node * ptr=HEAD;
      struct node * newnode= new node;
      cout<<"Enter the new node value->"<<endl;
      cin>>newnode->data;
      while(ptr->data!=key)
      ptr=ptr->next;
      newnode->next=ptr->next;
      ptr->next=newnode;

    }

}
void deleteatbeg()
{
    if(HEAD==nullptr)
    return;
    else{
        struct node * ptr=HEAD;
        HEAD=ptr->next;
        delete(ptr);
    }
}
void deleteatend()
{   struct node * ptr=HEAD;
    if(HEAD==nullptr)
    return ;
    else if(ptr->next==nullptr)
    {
        HEAD=nullptr;
        delete(ptr);
    }
    else{
         struct node * qtr=ptr->next;
        while(qtr->next!=nullptr)
        {
            ptr=qtr;
            qtr=qtr->next;
        }
        ptr->next=nullptr;
        delete(qtr);

    }
}
void reverselist(struct node * current)
{
    struct node * forward=current->next;
    struct node * previous=current;
    previous->next=nullptr;
    while(forward!=nullptr)
    { 
        current=forward;
        forward=forward->next;
        current->next=previous;
        previous=current;

    }
    HEAD=current;

}
int max_of_linked_list(){
    int maxvalue=INT_MIN;
    struct node * ptr=HEAD;
    while(ptr!=nullptr)
    {
        if(ptr->data > maxvalue)
        maxvalue=ptr->data;
        ptr=ptr->next;
    }
    return maxvalue;
}
int second_max_of_linked_list(){
    int maxvalue=max_of_linked_list();
    int secondmax=INT_MIN;
    struct node * ptr = HEAD;
    while(ptr!=nullptr)
    {
        if(ptr->data > secondmax &&  ptr->data < maxvalue)
        secondmax=ptr->data;
        ptr=ptr->next;
    }
    return secondmax;
}
int min_of_liunked_list(){
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
int second_min_of_linked_list(){
int minvalue=min_of_liunked_list();
int secondmin=INT_MAX;
struct node * ptr=HEAD;
while(ptr!=nullptr)
{
    if(ptr->data < secondmin && ptr->data > minvalue)
    secondmin=ptr->data;
    ptr=ptr->next;
}
return secondmin;
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
    cout<<"Enter the element that you want to find out->";
    int key;
    cin>>key;
    bool present= find(key);
    if(present)
    cout<<"Element found";
    else
    cout<<"Element not present";
    cout<<endl;
    int countnode=count_nodes();
    cout<<"The number of node in the linked list is->"<<countnode<<endl;
    insertatbeg();
    cout<<endl;
    traversal();
    cout<<endl;
    insertatend();
    cout<<endl;
    traversal();
    cout<<endl;
    insertatmiddle();
    cout<<endl;
    traversal();
    cout<<endl;
    //Deleting the node in the linked list
    deleteatbeg();
    
    traversal();
    cout<<endl;
    deleteatend();
    
    traversal();
    cout<<endl;
    reverselist(HEAD);
    traversal();
    cout<<endl;
    //Finding the max of the linked list
    int maxvalue=max_of_linked_list();
    cout<<"The max of the linked list->"<<maxvalue;
    cout<<endl;
    //Finding the second max value of the linked list
    int secondmax=second_max_of_linked_list();
    if(secondmax==INT_MIN)
    cout<<"There is no second max in the linked list";
    else
    cout<<"The second max of the linked list is->"<<secondmax;
    cout<<endl;
    int minvalue=min_of_liunked_list();
    cout<<"The min of the linked list is->"<<minvalue;
    cout<<endl;
    int secondmin=second_min_of_linked_list();
    if(secondmin==INT_MAX)
    cout<<"There is no second min in the linked list->";
    else
    cout<<"The second min in the linked list->"<<secondmin;
    cout<<endl;
    

    



}