#include <iostream>
#include<cmath>

using namespace std;

int main()
{
    float pie = 0;
    int i;
    for(i=1;i<=1000;i++)
    {
        pie=pie+pow(-1,(i-1))*4/(2*i-1);
    }
    cout<< "pi = " << pie;
    return 0;
}
