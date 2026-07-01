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
    struct node * ptr= HEAD;
    int maxvalue=INT_MIN;
    while(ptr!=nullptr)
    {
        if(ptr->data > maxvalue)
        maxvalue=ptr->data;
        ptr=ptr->next;
    }
    return maxvalue;
}
int second_of_linked_list()
{
    struct node * ptr=HEAD;
    int secondmax=INT_MIN;
    int maxvalue=max_of_linked_list();
    while(ptr!=nullptr)
    {
        if(ptr->data > secondmax && ptr->data < maxvalue)
        secondmax =ptr->data;
        ptr=ptr->next;
    }
    return secondmax;
}
int min_linked_list()
{
    struct node * ptr=HEAD;
    int minvalue=INT_MAX;
    while(ptr!=nullptr)
    {
        if(ptr->data < minvalue)
        minvalue=ptr->data;
        ptr=ptr->next;
    }
    return minvalue;
}
int second_min()
{
    struct node * ptr=HEAD;
    int second_min=INT_MAX;
    int minvalue=min_linked_list();
    while(ptr!=nullptr)
    {
        if(ptr->data < second_min && ptr->data > minvalue)
        second_min=ptr->data;
        ptr=ptr->next;
    }
    return second_min;
}
int count_node()
{
    struct node * ptr= HEAD;
    int count=0;
    while(ptr!=nullptr)
    {
        count++;
        ptr=ptr->next;
    }
    return count;
}
 void insertatbeg()
{
    node * newnode = new node;
    cout<<"Enter the new node value->"<<endl;
    cin>>newnode->data;
    if(HEAD==nullptr)
    {
        HEAD=newnode;
        newnode->next=nullptr;
    }
    else{
        newnode->next=HEAD;
        HEAD=newnode;
    }

}
void insertatend()
{
    struct node * newnode= new node;
    cout<<"Enter the new node value->"<<endl;
    cin>>newnode->data;
    struct node * ptr= HEAD;
    while(ptr->next!=nullptr)
    ptr=ptr->next;
    ptr->next=newnode;
    newnode->next=nullptr;
}
bool find(int key)
{
    struct node * ptr= HEAD;
    while(ptr!=nullptr)
    {
        if(ptr->data==key)
        return true;
        ptr=ptr->next;
    }
    return false;
}
void insertatmid()
{
    cout<<"Enter the element after you want to add new element"<<endl;
    int key;
    cin>>key;
    bool present = find(key);
    if(present)
    { 
        struct node * newnode= new node;
        cout<<"Enter the new node value->"<<endl;
        cin>>newnode->data;
        struct node * ptr= HEAD;
        while(ptr->data!=key)
        ptr=ptr->next;
        newnode->next=ptr->next;
        ptr->next=newnode;


    }
    else{
        cout<<"Enter a valid node->"<<endl;
    }
}
void reverse()
{
    struct node * ptr=HEAD;
    struct node * prev=HEAD;
    prev->next=nullptr;
    struct node * next=ptr->next;
    while(next->next!=nullptr)
    {
        ptr=next;
        ptr->next=prev;
        prev=ptr;
        next=next->next;
    }
    HEAD=ptr;
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
    cout<<"The max of the linked list->"<<maxvalue;
    cout<<endl;
    int secondmax=second_of_linked_list();
    cout<<"The second max of the linked list->"<<secondmax;
    cout<<endl;
    int minvalue=min_linked_list();
    cout<<"The min of the linkd list->"<<minvalue;
    cout<<endl;
    int secondmin=second_min();
    cout<<"The second min of the linked list->"<<secondmin;
    cout<<endl;
    int count= count_node();
    cout<<"The number of nodes in the linked list id->"<<count;
    cout<<endl;
    insertatbeg();
    traversal();
    cout<<endl;
    insertatend();
    traversal();
    cout<<endl;
    insertatmid();
    traversal();
    cout<<endl;
    reverse();
    traversal();
    cout<<endl;




}