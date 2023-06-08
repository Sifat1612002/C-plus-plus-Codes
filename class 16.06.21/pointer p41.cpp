#include<iostream>
using namespace std;
int main()
{
    int x,y;
    int *px,*py;
    x=10;
    px=&x;
    py=&y;
    y=*px;
    cout<<" x = "<<x<<" y = "<<y<<endl;
    cout<<"\n *px ="<<*px<<" *py = "<<*py<<endl;
    cout<<px<<endl<<py;
    return 0;
}

