#include <iostream>
#include <string>
using namespace std;
class teacher
{
public:
    int id;
    string name;
    int age;
    double salary;
};
class student
{
    public:
        int rollno;
        string name;
        int age;
        string dept;
    
};
int main()
{
    teacher t1,t2,t3;
    t1.id=1;
    t1.age=22;
    t1.name="Shubham jha";
    t1.salary=20000;
    t2.id=2;
    t2.name="Satyarthi";
    t2.age=25;
    t2.salary=20000;
    t3.id=3;
    t3.age=25;
    t3.name="Akriti";
    t3.salary=5000;
    cout<<t1.id<<" "<<t2.name<<" "<<t2.age<<" "<<t1.salary;
    cout<<endl;
    cout<<t2.id<<" "<<t2.name<<" "<<t2.age<<" "<<t2.salary;
    cout<<endl;
    cout<<t3.id<<" "<<t3.name<<" "<<t3.name<<" "<<t3.salary;
    cout<<endl;
    student su1,su2;
    su1.rollno=1;
    su1.name="Shubham Jha";
    su1.age=25;
    su1.dept="CS";
    su2.rollno=2;
    su2.name="Satyarthi";
    su2.age=25;
    su2.dept="EC";
    cout<<endl;
    cout<<su1.rollno<<" "<<su1.name<<" "<<su1.age<<" "<<su1.dept;
    cout<<endl;
    cout<<su2.rollno<<" "<<su2.name<<" "<<su2.age<<" "<<su2.dept;
    cout<<endl;
}