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
void insert_at_beg(struct node * ptr)
{
    struct node * newnode = new node;
    cout<<"Enter the new node element ->";
    cin>>newnode->data;
    newnode->next=HEAD;
    HEAD=newnode;
}
void insert_at_end(struct node * ptr)
{
    struct node * newnode= new node;
    cout<<"Enter the new node element";
    cin>>newnode->data;
    while(ptr->next!=nullptr)
    {
        ptr=ptr->next;
    }
    ptr->next=newnode;
    newnode->next=nullptr;
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
    cout<<"Enter the element after which you want to insert after->"<<endl;
    int key;
    cin>>key;
    bool found=find(HEAD,key);
    if(found)
    {  struct node * newnode= new node;
        cout<<"Enter the new node element";
        cin>>newnode->data;
        while(ptr->data!=key)
        {
            ptr=ptr->next;
        }
        newnode->next=ptr->next;
        ptr->next=newnode;

    }
    else{
        cout<<"Enter a valid node->"<<endl;
        return;
    }
}
int max_of_linked_list(struct node * ptr)
{
    static int maxvalue=INT_MIN;
    while(ptr!=nullptr)
    {
        if(ptr->data>maxvalue)
        maxvalue=ptr->data;
        ptr=ptr->next;
    }
    return maxvalue;
}
int count_of_node(struct node * ptr)
{
    int count1=0;
    while(ptr!=nullptr)
    {
        count1++;
        ptr=ptr->next;
    }
    return count1;
}
int min_linked_list(struct node * ptr)
{
     static int minvalue=INT_MAX;
    while(ptr!=nullptr)
    {
        if(ptr->data<minvalue)
        minvalue=ptr->data;
        ptr=ptr->next;
    }
 return minvalue;
}
void delete_at_beg(struct node * ptr)
{
    HEAD=HEAD->next;
    free(ptr);
}
void delete_at_end(struct node * ptr)
{ struct node * qtr=ptr->next;
    while(qtr!=nullptr)
    {
        ptr=qtr;
        qtr=qtr->next;
    }
    ptr->next=nullptr;
    free(qtr);
}
int main()
{
    struct node node1,node2,node3,node4;
    node1.data=10;
    node2.data=20;
    node3.data=30;
    node4.data=40;
    HEAD=&node1;
    node1.next=&node2;
    node2.next=&node3;
    node3.next=&node4;
    node4.next=nullptr;
    traversal(HEAD);
    cout<<endl;
    insert_at_beg(HEAD);
    cout<<endl;
    traversal(HEAD);
    insert_at_end(HEAD);
    cout<<endl;
    traversal(HEAD);
    //Insert in after an element 
    insert_at_middle(HEAD);
    traversal(HEAD);
    cout<<endl;
    int max1=max_of_linked_list(HEAD);
    cout<<"The max of the linked list";
    cout<<max1;
    cout<<endl;
    int count_node=count_of_node(HEAD);
    cout<<"The number of node is->"<<count_node;
    cout<<endl;
    int minlinked=min_linked_list(HEAD);
    cout<<"The min of the linked list->"<<minlinked;
    cout<<endl;
    //delte from begining
    delete_at_beg(HEAD);
    cout<<endl;
    traversal(HEAD);
    //delete_at_end()
    delete_at_end(HEAD);
    cout<<endl;
    traversal(HEAD);


    


}