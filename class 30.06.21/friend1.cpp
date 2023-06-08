#include<iostream>
using namespace std;

class two;

class one
{
    private:
        int a;
    public:
        void enter()
        {
            cout<<"\n Enter any value of a : ";
            cin>>a;
        }
        friend int operation(one,two);
};

class two
{
      private:
        int b;
    public:
        void enter()
        {
            cout<<"\n Enter any value of b : ";
            cin>>b;
        }
        friend int operation(one,two);
};

int operation(one o, two t)
{
    int sum = (o.a)+(t.b);
    int sub = (o.a)-(t.b);
    int mul = (o.a)*(t.b);
    int mod = (o.a)%(t.b);
    cout<<"\n Addition is         "<<sum;
    cout<<"\n Subtraction is       "<<sub;
    cout<<"\n Multiplication is   "<<mul;
    cout<<"\n Remainder is         "<<mod;

}

int main()
{
    one ol;
    two tl;
    ol.enter();
    tl.enter();
    operation(ol,tl);
    return 0;
 }
