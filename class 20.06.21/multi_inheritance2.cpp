// multiple inheritance
#include <iostream>
using namespace std;
class CPolygon
{
    protected:
        int width, height;
    public:
        void set_values (int a, int b)
        {
                width=a;
                height=b;
        }
};
class COutput
{
    public:
    void output (int i);
};
void COutput::output (int i)
{
    cout << i << endl;
}
class CRectangle: public CPolygon, public COutput
{
    public:
    int area ()
    {
        return (width * height);
    }
};
class CTriangle: public CPolygon, public COutput
{
    public:
        int area ()
        {
            return (width * height / 2);
        }
};

int main ()
{
    int x,y,i,j;
    CRectangle rect;
    CTriangle trgl;
    cin>>x>>y;
    rect.set_values (x,y);
    trgl.set_values (x,y);
    i=rect.area();
    j=trgl.area();
    rect.output ( i );
    trgl.output ( j );
return 0;
}
