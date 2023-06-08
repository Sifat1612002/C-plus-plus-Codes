#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    double pi=0;
    double i,n;
    cin>>n;

    for(i=1;i<=n;i++)
    {
        pi=pi+pow(-1,(i-1))*4/(2*i-1);
    }
    cout<<"pi="<<pi;
    return 0;
}
