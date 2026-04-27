#include<iostream>
using namespace std;
struct node {
    int data;
    node * next;
};
struct node * HEAD; //Gobal Header
int find(int key)
{
    struct node * ptr=HEAD;
    while(ptr!=nullptr)
    {
        if(ptr->data==key)
        return 1;
        ptr=ptr->next;
    }
    return -1;
}
void delete1()
{
    cout<<"Enter the node that you want to delete->";
    int key;
    cin>>key;
    int result=find(key);
    if(result==-1)
    cout<<"Enter a valid node";
    else{
        struct node * ptr=HEAD;
        struct node * qtr=ptr->next;
        while(qtr->data!=key)
        {
            ptr=ptr->next;
            qtr=qtr->next;
        }
       
       ptr->next=qtr->next;
        delete qtr;
    }

}
void traversal(struct node * ptr)
{
    while(ptr!=nullptr)
    {
        cout<<ptr->data<<" ";
        ptr=ptr->next;
    }
}

int max_list()
{
    struct node * ptr=HEAD;
    int max=-1;
    while(ptr!=nullptr)
    {
        if(ptr->data>max)
        max=ptr->data;
        ptr=ptr->next;
    }
    return max;

}
int min_list()
{
    struct node * ptr=HEAD;
    int min=INT_MAX;
    while(ptr!=nullptr)
    {
        if(ptr->data<min)
        min=ptr->data;
        ptr=ptr->next;
    }
    return min;
}
void insert_at_begin()
{
    struct node * newnode=new node;
    cout<<"Enter the new node data";
    cin>>newnode->data;
    newnode->next=HEAD;
    HEAD=newnode;
}
void insert_at_end()
{
    struct node * newnode=new node;
    cout<<"Enter the data in new node->";
    cin>>newnode->data;
    struct node * ptr=HEAD;
    struct node * qtr=ptr->next;
    while(qtr->next!=nullptr)
    {
        qtr=qtr->next;
    }
    qtr->next=newnode;
    newnode->next=nullptr;
}
void insert_at_middle()
{
    cout<<"Enter the element after which you want to insert the new node";
    int key;
    cin>>key;
    int result=find(key);
    if(result==-1)
    cout<<"Enter a valid node";
    else{
        struct node * newnode = new node;
        cout<<"Enter the data of the new element->";
        cin>>newnode->data;
        struct node * ptr=HEAD;
        while(ptr->data!=key)
        {
            ptr=ptr->next;
        }
        //ptr=ptr->next;
        newnode->next=ptr->next;
        ptr->next=newnode;
    }

}
int main()
{
    struct node node1,node2,node3,node4;
    node1.data=10;
    node1.next=&node2;
    node2.data=20;
    node2.next=&node3;
    node3.data=30;
    node3.next=&node4;
    node4.data=40;
    node4.next=nullptr;
    HEAD=&node1;
    traversal(HEAD);
    cout<<endl;
    cout<<"Enter the element that you want to find out->";
    int key;
    cin>>key;
    int result=find(key);
    if(result==-1)
    cout<<"Element not found";
    else
    cout<<"Element found";
    cout<<endl;
    //Maximum of the linked list
    int max=max_list();
    cout<<"The maximum of the linked list is->"<<max;
    cout<<endl;
    int min=min_list();
    cout<<"Min of the linked list->"<<min;
    cout<<endl;
    //insert eleemnt in the linked list
    //Insert in the begining
    insert_at_begin();
    cout<<endl;
    traversal(HEAD);
    cout<<endl;
    //Insert at the end
    insert_at_end();
    traversal(HEAD);
    cout<<endl;
    //Insert in the middle of the linked after an element
   insert_at_middle();
   traversal(HEAD);
   cout<<endl;
   //delete a node
   delete1();
   traversal(HEAD);
   cout<<endl;



}