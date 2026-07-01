#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node  * next;
};
class node * HEAD;
void traversal( node * ptr)
{
    while(ptr!=nullptr)
    {
        cout<<ptr->data<<" ";
        ptr=ptr->next;
    }
}
int max_of_linked_list(node * ptr)
{
    int maxvalue=INT_MIN;
    while(ptr!=nullptr)
    {
        if(ptr->data > maxvalue)
        maxvalue=ptr->data;
        ptr=ptr->next;
    }
    return maxvalue;
}
int min_of_linked_list(node* ptr)
{
    int minvalue=INT_MAX;
    while(ptr!=nullptr)
    {
        if(ptr->data <minvalue)
        minvalue=ptr->data;
        ptr=ptr->next;
    }
    return minvalue;
}
int main()
{
    node t1,t2,t3,t4;
    t1.data=10;
    t2.data=20;
    t3.data=30;
    t4.data=40;
    HEAD=&t1;
    t1.next=&t2;
    t2.next=&t3;
    t3.next=&t4;
    t4.next=nullptr;
    traversal(HEAD);
    cout<<endl;
    int maxvalue = max_of_linked_list(HEAD);
    cout<<"The max of the linked list is->"<<maxvalue;
    cout<<endl;
    int minvalue=min_of_linked_list(HEAD);
    cout<<"The min of the linked list is->"<<minvalue;
    cout<<endl;


}