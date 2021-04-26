#include <iostream>
using namespace std;

int main() {
	
//----------------------------------------------Assignment Operators----------------------------------------------------------------------------	
//In the example below, we use the assignment operator (=) to assign the value 10 to a variable called x:
system("color e1");  //system("color") is used to change the text and background color. In addition, the following letter and number are the color of these.
cout<<"\t\t\t\t\t\t Assigment Operators \n";  //It is used for giving tab space horizontally.
int x = 10;
cout<<x<<"\n";
system("PAUSE");
system("CLS");

//The addition assignment operator (+=) adds a value to a variable:
int y = 10;
y += 5;
cout<<y<<"\n";
system("PAUSE");
system("CLS");
//----------------------------------------------------------------------------------------------------------------------------------------------
//----------------------------------------------Comparison Operators----------------------------------------------------------------------------
system("color f0");
cout<<"\t\t\t\t\t\t Comparison Operators \n";
int a=5, b = 3;
cout << (a > b)<<"\n"; // returns 1 (true) because 5 is greater than 3
system("PAUSE");
system("CLS");
//----------------------------------------------------------------------------------------------------------------------------------------------
//----------------------------------------------Logical Operators-------------------------------------------------------------------------------
if(a<x && b<y) 
cout<<x<<" y "<<y<<"\t If this message is showed it means both conditions are true\n";

if(a<x || b<y) 
cout<<x<<" y "<<y<<"\t If this message is showed it means at least one condition is true\n";

cout<<!(a<x && b<y); //it's true (1)
cout<<"\t It reverses the result \n"; //0
//You will learn much more about if and how to use it in a later chapter(#19 If ... Else).
  return 0;
}

//khernandezd1400@alumno.ipn.mx

