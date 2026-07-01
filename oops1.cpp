#include<iostream>
#include<string>
using namespace std;
class student{
    public:
    int rollno;
    string name;
    int age;
};
class teacher{
    public:
    int tid;
    string name;
    int age;
};
int main()
{    teacher t1,t2;
    t1.tid=1;
    t1.name="Alok";
    t2.tid=2;
    t2.name="ankur";
    student s1,s2,s3;
    s1.rollno=1;
    s1.name="Shubham Jha";
    s1.age=22;
    s2.rollno=2;
    s2.name="Shubham jha";
    s2.age=20;
    s3.rollno=3;
    s3.name="akriti";
    s3.age=19;
    cout<<s1.rollno<<" "<<s1.name<<" "<<s1.age;
    cout<<endl;
    cout<<s2.rollno<<" "<<s2.name<<" "<<s2.age;
    cout<<endl;
    cout<<s3.rollno<<" "<<s3.name<<" "<<s3.age;
    cout<<endl;
    cout<<t1.tid<<" "<<t1.name<<endl;
    cout<<t2.tid<<" "<<t1.name<<endl;
    

}

