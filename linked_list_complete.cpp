#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node * next;
};
node * HEAD=nullptr;
void traversal()
{
    node * ptr = HEAD;
    while(ptr!=nullptr)
    {
        cout<<ptr->data<<" ";
        ptr=ptr->next;
    }
}
int max_of_linked_list(){
    int maxvalue=INT_MIN;
    node * ptr=HEAD;
    if(ptr==nullptr)
    return maxvalue;
    else{
        while(ptr!=nullptr)
        if(ptr->data > maxvalue)
        maxvalue=ptr->data;
        ptr=ptr->next;
    }
    return maxvalue;
}
int main()
{
    node n1,n2,n3,n4;
    n1.data=10;
    n2.data=20;
    n3.data=30;
    n4.data=40;
    n1.next=&n2;
    n2.next=&n3;
    n3.next=&n4;
    n4.next=nullptr;
    HEAD=&n1;
    traversal();
    cout<<endl;
    int maxvalue=max_of_linked_list();
    if(maxvalue==INT_MIN)
    cout<<"There is no max in the linked list->";
    else
    cout<<"The max of the linked list->"<<maxvalue;
    cout<<endl;

}