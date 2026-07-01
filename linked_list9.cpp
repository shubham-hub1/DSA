#include<iostream>
#include<climits>
using namespace std;
struct node {
    int data;
    struct node * next;
};
void traversal(struct node *&ptr)
{
    while(ptr!=nullptr)
    {
        cout<<ptr->data<<" ";
        ptr=ptr->next;
    }
}
int max_of_linked_list( struct node *&ptr)
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
int main()
{
    struct node n1,n2,n3,n4;
    n1.data=10;
    n2.data=20;
    n3.data=30;
    n4.data=40;
    n1.next=&n2;
    n2.next=&n3;
    n3.next=&n4;
    n4.next=nullptr;
    struct node * head=&n1;
    traversal(head);
    cout<<endl;
    int maxvalue=max_of_linked_list(head);
    cout<<"The max of the linked list is->"<<maxvalue<<endl;
    cout<<endl;

}