#include<iostream>
using namespace std;
struct node 
{
    int data;
    struct node * next;
};
struct node * HEAD=nullptr;
void traversal()
{
    struct node * ptr=HEAD;
    while(ptr!=nullptr)
    {
        cout<<ptr->data<<" ";
        ptr=ptr->next;
    }
}
int find(int key)
{
    struct node * ptr=HEAD;
    while(ptr!=nullptr)
    {
        if(ptr->data==key)
        return 1;
        ptr=ptr->next;
    }
    return -1;
}
int max()
{
    int max=INT_MIN;
    struct node * ptr=HEAD;
    while(ptr!=nullptr)
    {
        if(ptr->data>max)
        {
            max=ptr->data;
        }
        ptr=ptr->next;
    }
    return max;
}
int min()
{  struct node * ptr=HEAD;
    int min_value=INT_MAX;
    while(ptr!=nullptr)
    {
        if(ptr->data<min_value)
        { 
            min_value=ptr->data;
        }
        ptr=ptr->next;
    }
    return min_value;
}
int second_max()
{
    int second_value=-100;
    int max_element=max();
    struct node * ptr=HEAD;
    while(ptr!=nullptr)
    {
        if(ptr->data>second_value&&ptr->data!=max_element&&ptr->data<max_element)
        second_value=ptr->data;
        ptr=ptr->next;
    }
    return second_value;

}
int thirdmax()
{
    int third_value=-1;
    struct node * ptr=HEAD;
    int max2=second_max();
    if(max2==-100)
    return -1;
    else{
    while(ptr!=nullptr)
    {
        if(ptr->data>third_value&&ptr->data<max2)
        third_value=ptr->data;
        ptr=ptr->next;
    }
    return third_value;
}
}
int main()
{
    struct node node1,node2,node3,node4,node5;
    node1.data=10;
    node2.data=20;
    node3.data=30;
    node4.data=40;
    node5.data=50;
    node1.next=&node2;
    node2.next=&node3;
    node3.next=&node4;
    node4.next=&node5;
    node5.next=nullptr;
    HEAD=&node1;
    traversal();
    cout<<endl;
    cout<<"Enter the element that you want to find out->";
    int key;
    cin>>key;
    int resultfind=find(key);
    if(resultfind==-100)
    cout<<"Node not found";
    else
    cout<<"Element found";
    cout<<endl;
    //Maximum node value in the linked list;
    int max_node=max();
    cout<<"The maximum node value in the linked list->"<<max_node;
    cout<<endl;
    int min_node=min();
    cout<<"The minimum node value in the linked list->"<<min_node;
    cout<<endl;
    //Second max of the linked list;
    int second_largest=second_max();
    if(second_largest==-1)
    cout<<"Second largest does not exit";
    else
    cout<<"Second largest is->"<<second_largest;
    cout<<endl;
    //Third largest element in the linked list;
    int third_value=thirdmax();
    if(third_value==-1)
    cout<<"There is no third maximum";
    else
    cout<<"Third maximum is->"<<third_value;
    cout<<endl;
    
    

}