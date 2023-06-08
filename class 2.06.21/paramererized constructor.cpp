#include<iostream>
using namespace std;
class Wall
{
private:
    double length,height;
public:
    Wall(double len, double hgt)
    {
        length=len;
        height=hgt;
    }
    double calculationArea()
    {
        return length*height;
    }
};
int main()
{
    Wall a(5.2,6.5);
    Wall b(8.2,6.3);
    cout<<"Area = "<<a.calculationArea()<<endl;
    cout<<"Area = "<<b.calculationArea()<<endl;
    return 0;
}
