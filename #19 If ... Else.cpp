#include <iostream>
using namespace std;

int main() {
//------------------------------------------------------------------------------------------------if---------------------------------------------------------------------------------------------------
//In the example below, we test two values to find out if 20 is greater than 18. If the condition is true, print some text:
system("color e1");
cout<<"\t\t\t\t\t\t if \n";
if (20 > 18) {
  cout << "20 is greater than 18\n";
  system("PAUSE");
  system("CLS");
}

//We can also test variables:
int x = 20;
int y = 18;
if (x > y) {
  cout << "x is greater than y\n";
  system("PAUSE");
  system("CLS");
}

//------------------------------------------------------------------------------------------------else-------------------------------------------------------------------------------------------------
system("color f0");
cout<<"\t\t\t\t\t\t else \n";
int time = 20;
if (time < 18) {
  cout << "Good day.";
} else {
  cout << "Good evening.\n";
  system("PAUSE");
  system("CLS");
}
// Outputs "Good evening."
//In the example above, time (20) is greater than 18, so the condition is false. Because of this, we move on to the else condition and print to the screen "Good evening". If the time was less than 18, the program would print "Good day".

//------------------------------------------------------------------------------------------------else if----------------------------------------------------------------------------------------------
system("color e1");
cout<<"\t\t\t\t\t\t else if \n";
int Atime = 22;
if (Atime < 10) {
  cout << "Good morning.";
} else if (Atime < 20) {
  cout << "Good day.";
} else {
  cout << "Good evening.\n";
  system("PAUSE");
  system("CLS");
}
// Outputs "Good evening."
/*
In the example above, time (22) is greater than 10, so the first condition is false. The next condition, in the else if statement, is also false, so we move on to the else condition since condition1 and condition2 is both false - and print to the screen "Good evening".
However, if the time was 14, our program would print "Good day."
*/

//-------------------------------------------------------------------------------------------Ternary Operator------------------------------------------------------------------------------------------
//Instead of writing:
system("color f0");
cout<<"\t\t\t\t\t\t Ternary Operator \n";
int Btime = 20;
if (Btime < 18) {
  cout << "Good day.";
} else {
  cout << "Good evening.\n";
  system("PAUSE");
  system("CLS");
}
//You can simply write:

string result = (Btime < 18) ? "Good day." : "Good evening.";
cout << result;
  return 0;
}

//khernandezd1400@alumno.ipn.mx

