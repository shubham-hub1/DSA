#include<iostream>
using namespace std;
struct node {
    int data;
    node * next;
};
void traversal(node * ptr)
{
   while(ptr!=NULL)
   {
    cout<<ptr->data<<" ";
    ptr=ptr->next;
   }
}
node * HEAD ;//global header
void insert_at_end(node * ptr)
{
    node * newnode = new node;
    cout<<"Enter the element";
    cout<<endl;
    cin>>newnode->data;
    while(*(ptr->next)!=nullptr)
    {
        
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
  HEAD=&s1;
  traversal(HEAD);
  cout<<endl; 
  insert_at_end(head);
  traversal(HEAD);
  cout<<endl;
}