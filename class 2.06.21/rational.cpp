#include<iostream>
using namespace std;
class Rational
{
private:
    int num;
    int denum;
public:
    void set_num(int n)
    {
        num=n;
    }
    void set_denum(int d)
    {
        if(d!=0)
        {
            denum=d;
        }
        else
        {
            cout<<"denum  is zero";
            exit(1);
        }

    }
    int get_num()
    {
        return num;
    }
    int get_denum()
    {
        return denum;
    }

};

int main()
{
    Rational f1,f2;
    int a,b,c,d,f;
    cin>>a>>b>>c>>d;
    f1.set_num(a);
    f=f1.get_num();
    f1.set_denum(b);
    f2.set_num(c);
    f2.set_denum(d);
    cout<<f<<"/"
            <<f1.get_denum()<<endl;
     cout<<f2.get_num()<<"/"
             <<f2.get_denum()<<endl;
    return 0;
}
