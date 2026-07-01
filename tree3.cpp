#include<iostream>
using namespace std;
struct node{
    int data;
    struct  node * left;
    struct node * right;
};
struct node * ROOT;
void preoder(struct node * ptr)
{
    if(ptr==nullptr)
    return ;
    cout<<ptr->data<<" ";
    preoder(ptr->left);
    preoder(ptr->right);
}
int max_of_tree(struct node * ptr)
{
    static int max=INT_MIN;
    if(ptr==nullptr)
     return ;
    if(max>ptr->data)
    max=ptr->data;
    max_of_tree(ptr->left);
    max_of_tree(ptr->right);
    return max;
}
int main()
{
    struct node node1,node2,node3,node4,node5;
    ROOT=&node1;
    node1.data=10;
    node1.left=&node2;
    node1.right=&node3;
    node2.data=20;
    node2.left=&node3;
    node2.right=&node4;
    node4.data=40;
    node4.left=nullptr;
    node4.right=nullptr;
    node3.data=40;
    node3.left=nullptr;
    node3.right=nullptr;
    node4.data=50;
    node4.left=nullptr;
    node4.right=nullptr;
    node3.data=60;
    node3.left=&node5;
    node3.right=nullptr;
    node5.data=70;
    node5.right=nullptr;
    node5.left=nullptr;
    struct node * ptr=ROOT;
    preoder(ptr);
    cout<<endl;
    int max1=max_of_tree(ROOT);
    cout<<"The max of the tree is->"<<max1;




}