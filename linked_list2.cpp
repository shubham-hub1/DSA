#include<iostream>
using namespace std;
struct node {
    int data;
    node* next;
};
void traversal(node * ptr)
{
    while(ptr!=nullptr)
    {
        cout<<ptr->data<<" ";
        ptr=ptr->next;
    }
}
int count(node * ptr)
{ int count=0;
    while(ptr!=nullptr)
    { 
        count++;
        ptr=ptr->next;

    }
    return count;
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
void insert_at_begining(node ** ptr)
{
    node * newnode=new node;
    cout<<"Enter the new node data";
    cout<<endl;
    cin>>newnode->data;
    newnode->next=*ptr;
    *ptr=newnode;
}
void insert_after_element(node ** ptr)
{ 
    cout<<"Enter the element after which you want place the new element";
    cout<<endl;
    int value;
    cin>>value;
    bool result=find(*ptr,value);
    if(result)
    {
        node * newnode=new node;
        cout<<"Enter the new node value";
        cout<<endl;
        cin>>newnode->data;
        while(*ptr!=nullptr)
        {
            if((*ptr->next)->data)==value))
        }
    }
    else{
        cout<<"Enter a valid node";
    }
}

int main()
{
    node s1,s2,s3,s4;
    s1.data=10;
    s2.data=20;
    s3.data=30;
    s4.data=40;
    s1.next=&s2;
    s2.next=&s3;
    s3.next=&s4;
    s4.next=nullptr;
    node * head=&s1;//Local header
    cout<<endl;
    traversal(head);
    cout<<endl;
    //length of the linked list
    int length=count(head);
    cout<<"The length of the linked list is->"<<length;
    cout<<endl;
    //Finding a element in the array
    cout<<"Enter the element that you want to find"<<endl;
    int key;
    cin>>key;
    cout<<endl;
   bool result=find(head,key);
    if(result)
    cout<<"Element found";
    else
    cout<<"Element not found";
    //insertion in the linked list
    insert_at_begining(&head);
    cout<<endl;
    traversal(head);
    cout<<endl;
    //Insert after an element 
    insert_after_element(&head);
    traversal(head);
}