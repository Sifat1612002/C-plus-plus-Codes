#include<iostream>
using namespace std;
int even(int i, int j);
int main()
{
    int a,b;
    cin>>a>>b;
    even(a,b);
    return 0;
}
int even(int i, int j)
{
    if(i%j==0)
     cout<<"True";
    else
       cout<<"False";
       return 0;
}
