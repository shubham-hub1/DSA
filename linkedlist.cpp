#include<iostream>
using namespace std;
struct node{
    int data;
    struct node * next;    
};
struct node * HEAD;
void traversal(struct node * ptr)
{
    while(ptr!=NULL)
    {
        cout<<ptr->data<<" ";
        ptr=ptr->next;
    }
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
int max(struct node * ptr)
{
    int max=0;
    while(ptr!=NULL)
    {
        if((ptr->data)>max)
        max=ptr->data;
        ptr=ptr->next;

    }
    return max;
}
int main()
{
    struct node s1,s2,s3,s4;
    s1.data=10;
    s2.data=20;
    s3.data=30;
    s4.data=40;
    s1.next=&s2;
    s2.next=&s3;
    s3.next=&s4;
    s4.next=NULL;
    HEAD=&s1;
    cout<<endl;
    traversal(HEAD);
    cout<<endl;
    cout<<"Enter the element that you want to find out->";
    int key;
    cin>>key;
    int result=find(HEAD,key);
    if(result==-1)
    cout<<"Element not found";
    else
    cout<<"Element found";
    cout<<endl;
    int result2=max(HEAD);
    cout<<"The max of the list is->"<<result2;
    cout<<endl;

}