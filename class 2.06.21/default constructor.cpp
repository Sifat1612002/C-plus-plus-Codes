#include<iostream>
using namespace std;
class Wall
{
private:
    double length;
public:
   // or double length;
    Wall()
    {
        length=5.5;
        cout<<"Length = "<<length<<endl;
    }
};
int main()
{
    Wall wallength;
    return 0;
}
