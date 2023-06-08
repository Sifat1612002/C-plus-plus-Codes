#include <iostream>
#include <iomanip> //for setw
#include<cmath>
using namespace std;
int main()
{
int numb; //define loop variable
for(numb=1; numb<=10; numb++) //loop from 1 to 10
{
cout << setw(8)<< numb; //display 1st column
int cube = pow(numb,3); //calculate cube
cout << setw(10) << cube << endl; //display 2nd column
}
return 0;
}
