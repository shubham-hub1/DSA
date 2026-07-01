#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node * next;
    node(int data)
    {
        this->data=data;
        next=nullptr;
    }
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
void insertatbeg(node * ptr)
{
    cout<<"Enter the new node value->"<<endl;
    int value;
    cin>>value;
    node newnode(value);
    if(ptr==nullptr)
    HEAD=&newnode;
    else{
        newnode.next=HEAD;
        HEAD=&newnode;
    }
}
void insertatend(node * ptr)
{ cout<<"Enter the new value->"<<endl;
    int key;
    cin>>key;
    node newnode(key);
    if(ptr==nullptr)
    HEAD=&newnode;
    else{
        while(ptr->next!=nullptr)
        ptr=ptr->next;
        ptr->next=&newnode;
        newnode.next=nullptr;

    }
}

int main()
{  node n1(10),n2(20),n3(30),n4(40);
    HEAD=&n1;
    n1.next=&n2;
    n2.next=&n3;
    n3.next=&n4;
    traversal();
    cout<<endl;
    insertatbeg(HEAD);
    traversal();
    cout<<endl;
    insertatend(HEAD);
    traversal();
    cout<<endl;


}