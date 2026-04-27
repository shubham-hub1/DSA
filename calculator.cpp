#include<iostream>
using namespace std;
void addition()
{
    cout<<"Enter the two numbers";
    cout<<endl;
    int x,y;
    cin>>x>>y;
    int sum=x+y;
    cout<<"The sum of two numbers is->"<<sum;

}
void multiplication()
{
    cout<<"Enter the two number->";
    cout<<endl;
    int x,y,result;
    cin>>x>>y;
    result=x*y;
    cout<<"The result is->"<<result;
}
void divison()
{
    cout<<"Enter the two numbers->";
    cout<<endl;
    int x,y;
    cin>>x>>y;
    int result=x/y;
    cout<<"The result is->"<<result;
}
void subtraction()
{
    int x,y,result;
    cout<<"Enter the two numbers";
    cout<<endl;
    cin>>x>>y;
    result=x/y;
    cout<<"The result is->"<<result;

}
int main()
{
    cout<<"----------------Calculator----------------------";
    cout<<endl;
    cout<<"1.Addition"<<endl;
    cout<<"2.Multiplication"<<endl;
    cout<<"3.Divison"<<endl;
    cout<<"4.Subtraction"<<endl;
    int choice;
    cin>>choice;
    switch(choice)
    {
        case 1:addition();
        break;
        case 2:multiplication();
        break;
        case 3:divison();
        break;
        case4:subtraction();
        break;
        default:cout<<"Enter a valid choice";
    }
}