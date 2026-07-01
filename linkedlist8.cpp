#include<iostream>
using namespace std;
struct node {
    int data;
    struct node * next;
};
struct node *  HEAD;
void traversal(struct node * ptr)
{
    while(ptr!=nullptr)
    {
        cout<<ptr->data<<" ";
        ptr=ptr->next;
    }
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
int  min_of_linked_list(struct node * ptr)
{
    int min1=INT_MAX;
    while(ptr!=nullptr)
    {
        if(ptr->data<min1)
        min1=ptr->data;
        ptr=ptr->next;
    }
    return min1;
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
    cout<<"Enter the value that you want to find out->"<<endl;
    int key;
    cin>>key;
    bool result=find(HEAD,key);
    if(result)
    cout<<"Eleemnt found in linked list->";
    else
    cout<<"Element not found";
    int max1=max_of_linked_list(HEAD);
    cout<<"The max of the linked list->"<<max1;
    cout<<endl;
    int min1=min_of_linked_list(HEAD);
    cout<<"The min of the linked list->"<<min1;
    cout<<endl;
    



}