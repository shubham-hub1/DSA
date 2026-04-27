#include<bits/stdc++.h>
using namespace std;
struct node {
    int data;
    struct node * next;
};
struct node * HEAD;
void traversal(node * ptr)
{
    while(ptr!=nullptr)
    {
        cout<<ptr->data<<" ";
        ptr=ptr->next;
    }
}
int find(struct node * ptr,int key)
{
    while(ptr!=nullptr)
    {
        if(ptr->data==key)
        return 1;
        ptr=ptr->next;
    }
    return -1;
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
    cout<<endl;
    traversal(HEAD);
    cout<<endl;
    //finding a node 
    cout<<"Enter the element that you want to find out";
    cout<<endl;
    int key;
    cin>>key;
    int result=find(HEAD,key);
    if(result==-1)
    cout<<"Element not found";
    else
    cout<<"Element node";
    cout<<endl;
}