// derived classes
#include <iostream>
using namespace std;
class CPolygon {
protected:
float width, height;
public:
    float w,h;
    void set_values (float a, float b)
    {
        width=a;
        height=b;
    }

};
class CRectangle: public CPolygon
{
public:
float area ()
{
    return (width * height);
}

};
class CTriangle: public CPolygon
{
public:
    float area ()
    {
         return (width * height / 2);
    }
};
int main ()
{
    float x,y;
   // CPolygon x,y;
    CRectangle rect;
    CTriangle trgl;
    cin>>x>>y;
    rect.set_values (x,y);
    trgl.set_values (x,y);
    cout << rect.area() << endl;
    cout << trgl.area() << endl;
    return 0;
}
