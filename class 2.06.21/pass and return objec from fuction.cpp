#include<iostream>
using namespace std;
class student
{
public:
    double marks;
    student(double m)
    {
        marks=m;
    }
};

void cavg(student s1,student s2)
{
    double avg=(s1.marks+s2.marks)/2;
    cout<<"avg = "<<avg<<endl;
}
int main()
{
    student ss1(88.0), ss2(56.5);
    //cout<<ss1.marks<<endl;
    cavg(ss1,ss2);
    return 0;
}
