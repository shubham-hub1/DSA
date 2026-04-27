#include<iostream>
using namespace std;
struct node {
    int data;
    struct node * left;
    struct node * right;
};
struct node * ROOT=nullptr;
void preorder(struct node * ptr)
{
    if(ptr==nullptr)
    return ;
    cout<<ptr->data<<" ";
    preorder(ptr->left);
    preorder(ptr->right);
}
void inorder(struct node * ptr)
{
    if(ptr==nullptr)
    return;
    inorder(ptr->left);
    cout<<ptr->data<<" ";
    inorder(ptr->right);
}
void postorder(struct node * ptr)
{
    if(ptr==nullptr)
    return ;
    postorder(ptr->left);
    postorder(ptr->right);
    cout<<ptr->data<<" ";
}
int max(int x,int y)
{
    if(x>y)
    return x;
    else
    return y;
}
int max_of_tree(struct node * ptr)
{
    int max1=INT_MIN;
    if(ptr==nullptr)
    return 0;
    max1=ptr->data;
    int left_max=max_of_tree(ptr->left);
    int right_max=max_of_tree(ptr->right);
    return max(max1,max(left_max,right_max));
}
int min(int x,int y)
{
    if(x<y)
    return x;
    else
    return y;
}
int min_of_tree(struct node * ptr)
{
    int min2=INT_MAX;
    if(ptr==nullptr)
    return INT_MAX;
    min2=ptr->data;
    int left=min_of_tree(ptr->left);
    int right=min_of_tree(ptr->right);
    return min(min2,min(left,right));
}
int main()
{
struct node  node1,node2,node3,node4,node5;
node1.data=10;
node1.left=&node2;
node1.right=&node3;
node2.data=20;
node2.left=&node4;
node2.right=nullptr;
node3.right=&node5;
node3.left=nullptr;
node3.data=30;
node4.data=40;
node4.left=nullptr;
node4.right=nullptr;
node5.data=50;
node5.left=nullptr;
node5.right=nullptr;
ROOT=&node1;
cout<<" Preorder traversal"<<endl;
preorder(ROOT);
cout<<endl;
cout<<"Inorder traversal"<<endl;
inorder(ROOT);
cout<<endl;
cout<<"Postorder Traversal"<<endl;
postorder(ROOT);
cout<<endl;
int max=max_of_tree(ROOT);
cout<<"The max of the three is->"<<max;
cout<<endl;
int min1=min_of_tree(ROOT);
cout<<"The min of the tree is->"<<min1;
cout<<endl;
}