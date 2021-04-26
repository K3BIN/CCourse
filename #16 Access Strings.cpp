#include <iostream>
using namespace std;

int main() {	
//You can access the characters in a string by referring to its index number inside square brackets [].
string myString = "Hello";
cout << myString[0]<<"\n";
system("PAUSE");
system("CLS");
// Outputs H

/*
Note: String indexes start with 0: [0] is the first character. [1] is the second character, etc.
This example prints the second character in myString:
*/
cout << myString[1]<<"\n";
system("PAUSE");
system("CLS");
// Outputs e

//-------------------------------------------------------Change String Characters------------------------------------------------
myString[0] = 'J';
cout << myString;
// Outputs Jello instead of Hello
return 0;
}

//khernandezd1400@alumno.ipn.mx
