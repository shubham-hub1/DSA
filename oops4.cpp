#include<iostream>
#include<string>
using namespace std;
class student{
    private:
    int salary;  //This is encapsutaion
    public:
    int RollNo;
    string Name;
    int age;
    student()=default; //Constructor
    //Setter
    void setsalary(int salary)
    {
        this->salary=salary;
    }
    //Getter
    int getsalary()
    {
        return salary;
    }
    void getinfo()
    {
        cout<<"RollNo:-"<<RollNo<<endl;
        cout<<"Name:-"<<Name<<endl;
        cout<<"Age:-"<<age<<endl;
        cout<<"Salary:-"<<salary;
    }
};
int main()
{
    student s1,s2;
    s1.RollNo=1;
    s1.Name="Shubham Jha";
    s1.age=25;
    s1.setsalary(200);
    s2.RollNo=2;
    s2.age=25;
    s2.Name="Shubham Jha";
    s2.setsalary(300);
    s1.getinfo();
    cout<<endl;
    s2.getinfo();
    cout<<endl;

}