#include<iostream>
using namespace std;
class Rectangle
{
private:
    int wid;
    int len;
public:
    void setValues(int,int);
    int area();
    int perimeter();
};
void Rectangle::setValues(int w,int l)
{
    wid=w;
    len=l;
}
int Rectangle::area()
{
            return wid*len;
}
 int Rectangle::perimeter()
{
            return (wid+len)*2;
}
int main()
{
    Rectangle r1;
    int a,b;
    cin>>a>>b;
    r1.setValues(a,b);
    cout<<"Area = "<<r1.area()<<endl;
    cout<<"Perimeter = "<<r1.perimeter()<<endl;
    return 0;
}
