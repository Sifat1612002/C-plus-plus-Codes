#include<iostream>
using namespace std;
void swap(int*,int*);
int main()
{
    int a,b;
    cout<<"a =";
    cin>>a;
    cout<<"b =";
    cin>>b;
    swap(&a,&b);
    cout<<"a ="<<a<<endl;
    cout<<"b ="<<b<<endl;
}
void swap(int *n1, int *n2)
{
    int temp;
    temp=*n1;
    *n1=*n2;
    *n2=temp;
}
