#include<iostream>
using namespace std;
int main()
{
    int var;
    int *pt;
    int **ppt;
    var=3000;
    pt=&var;
    ppt=&pt;
    cout<<"var = "<<var<<endl;
    cout<<"*pt =  "<<*pt<<endl;
    cout<<" *pptr = "<<*ppt<<endl;
    cout<<&pt<<endl<<&ppt<<endl<<&var;
    return 0;

}

