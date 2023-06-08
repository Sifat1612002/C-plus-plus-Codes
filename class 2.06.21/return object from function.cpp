#include<iostream>
using namespace std;
class student
{
public:
    double marks1,marks2;
};
student createStudent()
{
    student s1;
    s1.marks1=96.5;
    s1.marks2=75.0;
    //cout<<"Marks 1 = "<<s1.marks1<<endl;
    //cout<<"Marks 2 = "<<s1.marks2<<endl;
    return s1;
}
int main()
{
    student ss1;
    ss1= createStudent();
    cout<<ss1.marks1<<endl;
    cout<<ss1.marks2;
    return 0;
}
