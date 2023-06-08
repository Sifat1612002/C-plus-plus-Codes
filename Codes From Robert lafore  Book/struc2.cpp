#include<iostream>
#include<string>
using namespace std;

struct bro
{
    int a;
    unsigned int b;
    double c;
    float d;
    string e;

};

int main()
{
    bro fist;
    fist.a=-2;
    fist.b=3;
    fist.c=2.3;
    fist.d=5.5;
    fist.e="hello";
    cout<<fist.a<<endl
    <<fist.b<<endl
    <<fist.c<<endl
    <<fist.d<<endl
    <<fist.e<<endl;
    bro x;
    x.a=-214748648;
    x.b=4294967295;
    x.c=2.3;
    x.d=5.5;
    x.e="hi";
    cout<<x.a<<endl
    <<x.b<<endl
    <<x.c<<endl
    <<x.d<<endl
    <<x.e<<endl;
    return 0;

}

