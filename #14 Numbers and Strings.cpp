#include <iostream>
using namespace std;

int main() {
//C++ uses the + operator for both addition and concatenation. Numbers are added. Strings are concatenated.
//If you add two numbers, the result will be a number:
int x = 10;
int y = 20;
int z = x + y;      // z will be 30 (an integer)
cout<<z<<"\n";
system("PAUSE");
system("CLS");

//If you add two strings, the result will be a string concatenation: 
string a = "10";
string b = "20";
string c = a + b;   // c will be 1020 (a string)
cout<<c;

/*
If you try to add a number to a string, an error occurs:

string x = "10";
int y = 20;
string z = x + y; 
*/
return 0;
}

//khernandezd1400@alumno.ipn.mx
