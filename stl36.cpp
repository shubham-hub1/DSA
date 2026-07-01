#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node * next;
};
node * HEAD=nullptr;
void traversal()
{
    node * ptr=HEAD;
    while(ptr!=nullptr)
    {
        cout<<ptr->data<<" ";
        ptr=ptr->next;
    }
}
int max_of_linked_list(){
    node * ptr=HEAD;
    if(ptr==nullptr)
    return -1;
    else{
        int maxvalue=INT_MIN;
        while(ptr!=nullptr)
        {
            if(ptr->data >  maxvalue)
            maxvalue=ptr->data;
            ptr=ptr->next;

        }
        return maxvalue;
    }
}
int min_of_linked_list()
{
    node * ptr=HEAD;
    int minvalue=INT_MAX;
    while(ptr!=nullptr)
    {
        if(ptr->data < minvalue)
        minvalue=ptr->data;
        ptr=ptr->next;
    }
    return minvalue;
}
bool find(int key)
{
    node * ptr=HEAD;
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
    node * newnode= new node;
    cout<<"Enter the new node value";
    cout<<endl;
    cin>>newnode->data;
    if(HEAD==nullptr){
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
    node * newnode= new node;
    cout<<"Enter the new node value"<<endl;
    cin>>newnode->data;
    if(HEAD==nullptr){
    HEAD=newnode;
    newnode->next=nullptr;
    }
    else{
        node * ptr=HEAD;
        while(ptr->next!=nullptr)
        ptr=ptr->next;
        ptr->next=newnode;
        newnode->next=nullptr;
    }
}
void insertatmiddle()
{
    cout<<"Enter the node after which you want to add new element";
    int key;
    cin>>key;
    bool present=find(key);
    if(present)
    {
        node* ptr=HEAD;
        node * newnode= new node;
        cout<<"Enter the new node";
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
void deleteinbeg(){
    node * ptr= HEAD;
    if(HEAD==nullptr)
    return;
    else{
        HEAD=ptr->next;
        delete(ptr);
    }
}
void deleteinend()
{
    node * ptr=HEAD;
    node *qtr=ptr->next;
    if(HEAD==nullptr)
    return;
    else{
        while(qtr->next!=nullptr)
        {
            ptr=qtr;
            qtr=qtr->next;
        }
        ptr->next=nullptr;
        delete(qtr);
    }

}
void deleteinmiddle()
{
    cout<<"Enter the element that you want to delete";
    int key;
    cout<<endl;
    cin>>key;
    bool present=find(key);
    if(present)
    {   if(HEAD->next==nullptr)
        { node * xtr=HEAD;
            HEAD=nullptr;
            delete(xtr);
            
        }
        node * ptr=HEAD;
        node * qtr= ptr->next;
        while(qtr->data!=key)
        {
            ptr=qtr;
            qtr=qtr->next;
        }
        ptr->next=qtr->next;
        delete(qtr);

    }
    else{
        cout<<"Enter a valid node";
    }
}
int second_max_linked_list()
{
    int maxvalue=max_of_linked_list();
    int secondmax=INT_MIN;
    node * ptr=HEAD;
    while(ptr!=nullptr)
    {
        if(ptr->data > secondmax && ptr->data < maxvalue)
        secondmax=ptr->data;
        ptr=ptr->next;
    }
    return secondmax;
}
int second_min_linked_list(){
    int minvalue=min_of_linked_list();
    int secondmin=INT_MAX;
    node * ptr=HEAD;
    while(ptr!=nullptr)
    {
        if(ptr->data < secondmin && ptr->data > minvalue)
         secondmin=ptr->data;
        ptr=ptr->next;
    }
    return secondmin;
}
void reverse()
{
    node * ptr=HEAD;
    node * qtr=ptr->next;
    node * str=ptr;
    if(HEAD==nullptr)
    return ;
    str->next=nullptr;
    while(ptr->next!=nullptr)
    {
        ptr=qtr;
        qtr=qtr->next;
        ptr->next=str;
        str=ptr;
    }
    HEAD=str;
}

int main()
{
    node n1,n2,n3,n4;
    n1.data=10;
    n2.data=20;
    n3.data=30;
    n4.data=40;
    n1.next=&n2;
    n2.next=&n3;
    n3.next=&n4;
    n4.next=nullptr;
    HEAD=&n1;
    traversal();
    cout<<endl;
    int maxvalue=max_of_linked_list();
    if(maxvalue==-1)
    cout<<"Linked list is empty";
    else{
        cout<<"The max of the linked list is->"<<maxvalue;
    }
    cout<<endl;
    int minvalue=min_of_linked_list();
    cout<<"The min value in the linked list is->"<<minvalue;
    cout<<"Enter the value that you want to find out in the linked list->";
    cout<<endl;
    int key;
    cin>>key;
    bool present=find(key);
    if(present)
    {
        cout<<"Element present in the linked list";
    }
    else{
        cout<<"Element not present in the linked list";
    }
    cout<<endl;
    insertatbeg();
    traversal();
    cout<<endl;
    insertatend();
    traversal();
    cout<<endl;
    insertatmiddle();
    traversal();
    cout<<endl;
    //Delete a node in the linked list
    deleteinbeg();
    traversal();
    cout<<endl;
    deleteinend();
    traversal();
    cout<<endl;
    deleteinmiddle();
    traversal();
    cout<<endl;
    int secondmax=second_max_linked_list();
    if(secondmax==INT_MIN)
    cout<<"There is no second max in the linked list";
    else
    cout<<"The second max of the linked list is->"<<secondmax;
    int secondmin=second_min_linked_list();
    if(secondmin==INT_MAX)
    cout<<"There is no second max in the linked list";
    else
    cout<<"The second max of the linked list is->"<<secondmin;
    cout<<endl;
    reverse();
    traversal();
    cout<<endl;





}