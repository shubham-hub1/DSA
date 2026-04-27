#include<bits/stdc++.h>
using namespace std;
struct node {
    int data;
    struct node * next;
};
void traversal(struct node * ptr)
{
    while(ptr!=NULL)
    {
        cout<<ptr->data<<" ";
        ptr=ptr->next;
    }
    
}
int count(struct node * ptr)
{
    int count=0;
    while(ptr!=NULL)
    {
        count++;
        ptr=ptr->next;
    }
    return count;
}
int find(struct node * ptr,int key)
{
    while(ptr!=NULL)
    {
        if(ptr->data==key)
         return 1;
         ptr=ptr->next;
    }
    return -1;

}
int main()
{
//Local header
struct node s1,s2,s3,s4;
s1.data=10;
s2.data=20;
s3.data=30;
s4.data=40;
s1.next=&s2;
s2.next=&s3;
s3.next=&s4;
s4.next=NULL;
struct node * head=&s1;
traversal(head);
cout<<endl;
int count_node=count(head);
cout<<"The number of nodes in the linked list->"<<count_node;
cout<<endl;
cout<<"Enter the element that you want to find out"<<endl;
int key;
cin>>key;
int result=find(head,key);
if(result==-1)
cout<<"Element found";
else
cout<<"Element not found";
}