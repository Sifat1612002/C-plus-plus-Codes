#include <iostream>
#include<>

using namespace std;

double hyp(double a,double b);

int main()
{
    double a,b,c;
    XX:
    cout<<"Enter 2 sides = ";
    cin>>a>>b;
    c=hyp(a,b);
    cout<<"Length of the hypotenuse = "<<c<<endl<<endl;
    goto XX;
    return 0;
}

double hyp(double a,double b)
{
    return sqrt(pow(a,2)+pow(b,2));
}
