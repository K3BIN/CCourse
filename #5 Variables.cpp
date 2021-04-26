#include <iostream>
using namespace std;

// Create a variable called myNum of type int and assign it the value 15
int main() {
int Num = 15;
cout<<Num<<"\n";
system("PAUSE");
system("CLS");


//You can also declare a variable without assigning the value, and assign the value later
int MyNum;
MyNum = 30;
cout<<MyNum<<"\n";
system("PAUSE");
system("CLS");


//Note that if you assign a new value to an existing variable, it will overwrite the previous value:
int AnotherNum = 60;  // AnotherNum is 60
AnotherNum = 120;  // Now AnotherNum is 120
cout<<AnotherNum<<"\n";  // Outputs 120
system("PAUSE");
system("CLS");


//Other Types
int myIntNum = 5;            // Integer (whole number without decimals)
double myFloatNum = 5.99;    // Floating point number (with decimals)
char myLetter = 'D';         // Character
string myText = "Hello";     // String (text)
bool myBoolean = true;       // Boolean (true or false)
//These variables are not outputs as the previous ones,  that's why these are not showed at the screen


/*Display variables
The cout object is used together with the << operator to display variables.
To combine both text and a variable, separate them with the << operator:
*/
int myAge = 16;
cout << "I am " << myAge << " years old.\n";
system("PAUSE");
system("CLS");


/*Add Variables Together
To add a variable to another variable, you can use the + operator:
*/
int x = 5;
int y = 6;
int sum = x + y;
cout << sum;
return 0;
}

//khernandezd1400@alumno.ipn.mx
