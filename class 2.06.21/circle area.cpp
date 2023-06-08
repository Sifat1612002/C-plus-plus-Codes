#include<iostream>
using namespace std;
#include<string>
#define PI  3.14159
//const double PI=3.14159;
class circle
{
public:
    void setRadius(double r)
    {
        radius=r;
    }
    double getRadius()
    {
        return radius;
    }
    void setArea(double r)
    {
        area=PI*r*r;
    }
    double getArea()
    {
        return area;
    }
    void setCircum(double r)
    {
        circum=2*PI*r;
    }
    double getCircum()
    {
        return circum;
    }

    void displayMessage()
    {
        cout<<"welcome"<<endl;
        cout<<"Radius                :"<<getRadius()<<endl;
        cout<<"Area                    :"<<getArea()<<endl;
        cout<<"Circumference   :"<<getCircum()<<endl;
    }
private:
    double area,radius,circum;

};
int main()
{
    double rad;
    circle c1;
    cin>>rad;
    c1.setRadius(rad);
    c1.setArea(rad);
    c1.setCircum(rad);
    c1.displayMessage();
    return 0;

}

