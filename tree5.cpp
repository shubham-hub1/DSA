#include<iostream>
using namespace std;
struct node {
    int data;
    struct node * next;
};
struct node * HEAD=nullptr;
void traversal()
{
    struct node * ptr= HEAD;
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
int min_of_linked_list()
{   int minvalue=INT_MAX;
    struct node * ptr=HEAD;
    while(ptr!=nullptr)
    {
        if(ptr->data < minvalue)
        minvalue=ptr->data;
        ptr=ptr->next;
    }
    return minvalue;
}
void insertatbegin()
{  struct node * ptr=HEAD;
    node * newnode = new node;
    cout<<"Entert the newnode value->"<<endl;
    cin>>newnode->data;
    if(ptr==nullptr){
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
    
}
int main()
{
    node n1,n2,n3,n4;
    n1.data=10;
    n1.next=&n2;
    n2.data=20;
    n2.next=&n3;
    n3.data=30;
    n3.next=&n4;
    n4.data=40;
    n4.next=nullptr;
    HEAD=&n1;
    traversal();
    cout<<endl;
    int maxvalue=max_of_linked_list();
    cout<<"The max of the linked list->"<<maxvalue;
    cout<<endl;
    int minvalue=min_of_linked_list();
    cout<<"The min of the linked list->"<<minvalue;
    cout<<endl;
    traversal();
    cout<<endl;
    insertatbegin();
    traversal();
    insertatend();
    traversal();



}