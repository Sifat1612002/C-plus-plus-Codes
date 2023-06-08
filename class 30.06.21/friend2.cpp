#include<iostream>
using namespace std;

class Number
{
private:
    int a;
public:
    void getNum(int x)
    {
        a=x;
    }
    friend void printNum(Number X);
};

void printNum(Number X)
{
    cout<<"Value of a : "<<X.a;
}

int main()
{
    Number xobj;
    int i;
    cout<<"Enter an integer number : ";
    cin>>i;
    xobj.getNum( i );
    printNum(xobj);
    return 0;
}
