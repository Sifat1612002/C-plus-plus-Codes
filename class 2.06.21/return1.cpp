#include<iostream>
using namespace std;
class distances
{
private:
    int feet;
    float inches;
public:
    void get_distances()
    {
        cout<<"enter feet:\t";
        cin>>feet;
        cout<<"enter inches:\t";
        cin>>inches;
    }
    distances add_distance(distances d1, distances d2)
    {
        distances sum;
        sum.feet=0;
        sum.inches=d1.inches+d2.inches;
        if(sum.inches>=12)
        {
            sum.inches=sum.inches-12;
            sum.feet=1;
        }
        sum.feet+=d1.feet+d2.feet;
        return (sum);

    }
    void display_distance()
    {
        cout<<feet<<"\'-"<<inches<<"\" ";
    }
};

int main()
{
    distances f,s,r;
    cout<<"enter 1st distance:\n";
    f.get_distances();
    cout<<"enter 2nd distances\n";
    s.get_distances();
    r=r.add_distance(f,s);
    r.display_distance();
    return 0;

}
