#include<iostream>
#include<string>
using namespace std;
class student{
    private:
    double CGPA;
    public :
    int RollNo;
    string Name;
    int Age;
    //Setter
    void setcgpa(double CGPA)
    {
        this->CGPA=CGPA;
    }
    //Getter
    double getcgpa()
    {
        return this->CGPA;
    }
    student(int RollNo,string Name,int Age)
    {
        this->RollNo=RollNo;
        this->Name=Name;
        this->Age=Age;
    }

};
int main()
{
    student s1(1,"Shubham Jha",25),s2(2,"Shubham",26);
    s1.setcgpa(7.33);
    s2.setcgpa(8.4);
    cout<<s1.RollNo<<" "<<s1.Name<<" "<<s1.Age<<" "<<s1.getcgpa()<<endl;
    cout<<s2.RollNo<<" "<<s2.Name<<" "<<s2.Age<<" "<<s2.getcgpa()<<endl;

}