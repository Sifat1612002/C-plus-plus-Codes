#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int n;
    cin>>n;
    double *num=new double[n];
    double sum=0;
    for(int i=0;i<n;i++)
    {
        cin>>*(num+i);
    }
    for( int i=0;i<n;i++)
    {
        sum+=*(num+i);
    }
    cout<<"Avg = "<<sum<<endl;
    delete [] num;
}
