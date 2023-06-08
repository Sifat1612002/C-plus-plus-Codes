#include <iostream>
using namespace std;
class CSquare;
class CRectangle
 {
        int width, height;
    public:
        int area ()
        {
            return (width * height);
        }
    void convert (CSquare a);
};
class CSquare
{
    private:
        int side;
    public:
        void set_side (int x)
        {
            side=x;
        }
    friend class CRectangle;
};
void CRectangle::convert (CSquare a)
{
    width = a.side;
    height = a.side;
}
int main ()
{
    CSquare sqr;
    CRectangle rect;
    int x;
    cout<<"Enter the value of side : ";
    cin>>x;
    sqr.set_side(x);
    rect.convert(sqr);
    cout << rect.area();
    return 0;
}
