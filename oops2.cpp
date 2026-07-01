#include<iostream>
#include<string>
using namespace std;
class book{
    public:
    string name;
    int Id;
    int count;
    void getInfo()
    {
        cout<<name<<" "<<count<<" "<<Id;
    }
};
int main()
{
    book b1,b2,b3;
    b1.name="Alok";
    b1.Id=1;
    b1.count=1;
    b2.name="slhsvAlok";
    b2.Id=2;
    b2.count=2;
    b3.name="2snafklAlok";
    b3.Id=3;
    b3.count=4;
    b1.getInfo();
    cout<<endl;
    b2.getInfo();
    cout<<endl;
    b3.getInfo();
    cout<<endl;



}