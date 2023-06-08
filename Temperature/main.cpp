#include <iostream>

using namespace std;

int main()
{
   int ftemp;
 cout << " Enter fahrenheit temp = " ;

   cin >> ftemp ;

   int ctemp= (ftemp-32)*5/9;
   cout << " celsious temperature = " << ctemp << endl;
   return 0 ;
}
