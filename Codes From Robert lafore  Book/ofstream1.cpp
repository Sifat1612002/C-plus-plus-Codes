#include <fstream> //for file I/O
#include <iostream>
#include <string>
using namespace std;
int main()
{
char ch = 'x';
int j = 77;
double d = 6.02;
string str1 = "Kafka"; //strings without
string str2 = "Proust"; // embedded spaces
ofstream out("fdata.txt"); //create ofstream object
out << ch <<endl<< j<<endl<< d<<endl<< str1<<endl<< str2;
cout << "File written\n";
return 0;
}
