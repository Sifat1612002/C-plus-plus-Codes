#include<iostream>
using namespace std;
class crect
{
    int *width,*height;
public:
    crect(int,int);
    ~crect();
    int area()
    {
        return (*width * *height);
    }
};
crect::crect(int a,int b)
{
    width=new int;
    height=new int;
    *width=a;
    *height=b;
}
crect::~crect()
{
    delete width;
    delete height;
}
int main()
{
    crect rect(3,4), rectb(5,6);
    cout<<"rect area : "<<rect.area()<<endl;
    cout<<"rectb area : "<< rectb.area()<<endl;
    return 0;
}
