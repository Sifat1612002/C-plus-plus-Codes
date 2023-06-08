#include<iostream>
using namespace std;
int main()
{
    int value[5]={1,2,3,4,5};
    int *pt;
   // pt=&value[2];
    pt=value;

cout<<*(pt+1)<<endl;
cout<<pt[4]<<endl;
return 0;
}
