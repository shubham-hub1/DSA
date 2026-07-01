#include<iostream>
using namespace std;
struct node {
    int data;
    struct node * next;
};
struct node * HEAD;
void traversal(struct node * ptr)
{
    while(ptr!=nullptr)
    {
        cout<<ptr->data<<" ";
        ptr=ptr->next;
    }
}
int max_of_linked_list(struct node * ptr)
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
int min_of_linked_list(struct node * ptr)
{
    int minvalue=INT_MAX;
    while(ptr!=nullptr)
    {
        if(ptr->data < minvalue)
        minvalue=ptr->data;
        ptr=ptr->next;
    }
    return minvalue;
}
int second_max_of_the_linked_list(struct node * ptr){
    int secondmax=INT_MIN;
    int maxvalue=max_of_linked_list(ptr);
    while(ptr!=nullptr)
    {
        if(ptr->data > secondmax && ptr->data < maxvalue)
        secondmax=ptr->data;
        ptr=ptr->next;
    }
    return secondmax;

}
int second_min_of_linked_list(struct node * ptr)
{
    int secondmin=INT_MAX;
    int minvalue=min_of_linked_list(ptr);
    while(ptr!=nullptr)
    {
        if(ptr->data < secondmin && ptr->data > minvalue)
        secondmin=ptr->data;
        ptr=ptr->next;
    }
    return secondmin;
}
void insertatbeg(struct node * ptr)
{
    struct node * newnode= new node;
    cout<<"Enter the new node value->"<<endl;
    cin>>newnode->data;
    if(ptr==nullptr){
    HEAD=newnode;
    newnode->next=nullptr;
    }
    else{
        newnode->next=ptr;
        HEAD=newnode;
    }
}
void insertatend(struct node * ptr)
{
    struct node * newnode= new node;
    cout<<"Enter the new node value->"<<endl;
    cin>>newnode->data;
    if(ptr==nullptr)
    {
        newnode->next=nullptr;
        HEAD=newnode;
    }
    else{
        while(ptr->next!=nullptr)
        ptr=ptr->next;
        ptr->next=newnode;
        newnode->next=nullptr;
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
void insertatmiddle(struct node * ptr)
{
    cout<<"Enter the node where after you want to add new node"<<endl;
    int key;
    cin>>key;
    bool present=find(ptr,key);
    if(present)
    {
        struct node * newnode= new node;
        cout<<"Enter the new node value->"<<endl;
        cin>>newnode->data;
        while(ptr->data!=key)
        ptr=ptr->next;
        newnode->next=ptr->next;
        ptr->next=newnode;

    }
    else{
        cout<<"Enter a valid node";
        cout<<endl;
    }
}
void deleteatbeg(struct node * ptr)
{
    if(ptr==nullptr)
    return ;
    else{
        HEAD=ptr->next;
        free(ptr);
    }
}
void deleteatend(struct node * ptr)
{
    if(ptr==nullptr)
    return ;
    else{
        while(ptr->next->next!=nullptr)
        ptr=ptr->next;
        struct node * qtr=ptr->next;
        ptr->next=nullptr;
        free(qtr);

    }
}
void deleteatmiddle(struct node * ptr)
{
    cout<<"Enter the node that you want to delete->";
    cout<<endl;
    int key;
    cin>>key;
    bool present=find(ptr,key);
    if(present){
        if(ptr->next==nullptr)
        {
            HEAD=nullptr;
            free(ptr);
        }
        else{
            struct node * qtr=ptr->next;
            while(qtr->data!=key)
            {
                ptr=qtr;
                qtr=qtr->next;
            }
            ptr->next=qtr->next;
            free(qtr);

        }

    }
    else{
        cout<<"Enter a valid node";
    }


}

int main()
{ 
    node n1,n2,n3,n4;
    n1.data=10;
    n2.data=20;
    n3.data=30;
    n4.data=40;
    HEAD=&n1;
    n1.next=&n2;
    n2.next=&n3;
    n3.next=&n4;
    n4.next=nullptr;
    //traversing the linked list
    traversal(HEAD);
    cout<<endl;
    //Finding the max of the linked list
    int maxvalue=max_of_linked_list(HEAD);
    cout<<"The max of the linked list->"<<maxvalue;
    cout<<endl;
    //Finding the min of the linked list
    int minvalue=min_of_linked_list(HEAD);
    cout<<"The min value of the linked list->"<<minvalue;
    cout<<endl;
    //Finding the second max of the linkedd list
    int secondmax=second_max_of_the_linked_list(HEAD);
    if(secondmax==INT_MIN)
    cout<<"There is no second max in the linked list";
    else
    cout<<"The second max of the linked list is->"<<secondmax;
    cout<<endl;
    //Finding the second min of the linked list
    int secondmin=second_min_of_linked_list(HEAD);
    if(secondmin==INT_MAX)
    cout<<"There is no second min in the linked list";
    else
    cout<<"The second min in the linked list->"<<secondmin;
    cout<<endl;
    //Adding node in the linked list
    insertatbeg(HEAD);
    traversal(HEAD);
    cout<<endl;
    insertatend(HEAD);
    traversal(HEAD);
    cout<<endl;
    insertatmiddle(HEAD);
    traversal(HEAD);
    cout<<endl;
    //Deleting an node in the linkedd list
    deleteatbeg(HEAD);
    traversal(HEAD);
    cout<<endl;
    deleteatend(HEAD);
    traversal(HEAD);
    cout<<endl;
    deleteatmiddle(HEAD);
    traversal(HEAD);
    cout<<endl;
}