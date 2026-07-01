#include <iostream>
using namespace std;
struct node
{
    int data;
    struct node *next;
};
struct node *HEAD;
void traversal(struct node *ptr)
{
    while (ptr != nullptr)
    {
        cout << ptr->data << " ";
        ptr = ptr->next;
    }
}
int max_of_linked_list(struct node *ptr)
{
    int maxvalue = INT_MIN;
    while (ptr != nullptr)
    {
        if (ptr->data > maxvalue)
            maxvalue = ptr->data;
        ptr = ptr->next;
    }
    return maxvalue;
}
int second_max_linked_list(struct node *ptr)
{
    int secondmax = INT_MIN;
    int maxvalue = max_of_linked_list(ptr);
    while (ptr != nullptr)
    {
        if (ptr->data > secondmax && ptr->data < maxvalue)
            secondmax = ptr->data;
        ptr = ptr->next;
    }
    return secondmax;
}
int thirdmax_of_linked_list(struct node *ptr)
{
    int thirdmax = INT_MIN;
    int secondmax = second_max_linked_list(ptr);
    while (ptr != nullptr)
    {
        if (ptr->data > thirdmax && ptr->data < secondmax)
            thirdmax = ptr->data;
        ptr = ptr->next;
    }
    return thirdmax;
}
int min_of_linked_list(struct node *ptr)
{
    int minvalue = INT_MAX;
    while (ptr != nullptr)
    {
        if (ptr->data < minvalue)
            minvalue = ptr->data;
        ptr = ptr->next;
    }
    return minvalue;
}
int second_min_linked_list(struct node *ptr)
{
    int minvalue = min_of_linked_list(ptr);
    int secondvalue = INT_MAX;
    while (ptr != nullptr)
    {
        if (ptr->data < secondvalue && ptr->data > minvalue)
            secondvalue = ptr->data;
        ptr = ptr->next;
    }
    return secondvalue;
}
int count_node(struct node *ptr)
{
    int count = 0;
    while (ptr != nullptr)
    {
        count++;
        ptr = ptr->next;
    }
    return count;
}
void insertbeg(struct node * ptr)
{
    struct node * newnode= new node;
    cout<<"Enter the new node element value";
    cout<<endl;
    cin>>newnode->data;
    if(ptr==nullptr){
    HEAD=newnode;
    newnode->next=nullptr;
     }
     else
     {
        newnode->next=HEAD;
        HEAD=newnode;
     }
    
}
void insertend(struct node * ptr)
{
    struct node * newnode= new node;
    cout<<"Enter the new node value->"<<endl;
    cin>>newnode->data;
    if(ptr==nullptr)
    {
        HEAD=newnode;
        newnode->next=nullptr;
    }
    else{
        while(ptr->next!=nullptr)
        {
            ptr=ptr->next;
        }
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
void inseratmiddle(struct node * ptr)
{
    struct node * newnode= new node;
    cout<<"Enter the node value after you want to add node->"<<endl;
    int key;
    cin>>key;
    bool present=find(ptr,key);
    if(present)
    {
        cout<<"Enter the node value->"<<endl;
        cin>>newnode->data;
        while(ptr->data!=key)
        {
            ptr=ptr->next;
        }
        newnode->next=ptr->next;
        ptr->next=newnode;

    }
    else
    {
        cout<<"Enter a valid node";

    }
}
void deleteatbeg(struct node * ptr)
{
    if(ptr==nullptr)
    return;
    else
    {
        HEAD=ptr->next;
        free(ptr);
    }
}
void deleteatend(struct node * ptr)
{   struct node * qtr=ptr->next;
    while(qtr->next!=nullptr)
    {   ptr=qtr;
        qtr=qtr->next;
    }
    ptr->next=nullptr;
    free(qtr);
}
void deleteatmiddle(struct node * ptr)
{
    cout<<"Enter the node that you want to delete"<<endl;
    
    int key;
    cin>>key;
    bool present=find(ptr,key);
    if(present)
    {
        struct node * qtr=ptr->next;
        while(qtr->data!=key)
        {
            ptr=qtr;
            qtr=qtr->next;
        }
        ptr->next=qtr->next;
        free(qtr);

    }
    else{
        cout<<"Enter a valid node";
    }
}
int main()
{
    struct node n1, n2, n3, n4;
    HEAD = &n1;
    n1.data = 10;
    n2.data = 20;
    n3.data = 30;
    n4.data = 40;
    n1.next = &n2;
    n2.next = &n3;
    n3.next = &n4;
    n4.next = nullptr;
    // Traversal of the linked list
    traversal(HEAD);
    cout << endl;
    // Maximum of the linked list
    int maxvalue = max_of_linked_list(HEAD);
    cout << "The max of the linked list->" << maxvalue;
    cout << endl;
    // second max of the linked list
    int secondmax = second_max_linked_list(HEAD);
    if (secondmax == INT_MIN)
        cout << "There is no second max";
    else
        cout << "The second max of the linked list->" << secondmax;
    cout << endl;
    // Third max of the linked list
    int thirdmax = thirdmax_of_linked_list(HEAD);
    if (thirdmax == INT_MIN)
        cout << "There is no third max";
    else
        cout << "The third max of the linked list->" << thirdmax;
    cout << endl;
    int minvalue = min_of_linked_list(HEAD);
    cout << "The max of the linked list->" << minvalue;
    cout << endl;
    int secondmin = second_min_linked_list(HEAD);
    if (secondmin == INT_MAX)
        cout << "There is no second min";
    else
        cout << "The second max of the linked list->" << secondmin;
    cout << endl;
    // Counting the number of nodes in the linked list
    int count = count_node(HEAD);
    cout << "The number of nodes in the linked list->" << count;
    cout << endl;
    //Adding nodes in the linked list
    insertbeg(HEAD);
    traversal(HEAD);
    cout<<endl;
    insertend(HEAD);
    traversal(HEAD);
    cout<<endl;
    inseratmiddle(HEAD);
    traversal(HEAD);
    cout<<endl;
    //Delting a node
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