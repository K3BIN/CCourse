#include <iostream>
using namespace std;

int main() {
string food = "Pizza";  // A food variable of type string
string* ptr = &food;    // A pointer variable, with the name ptr, that stores the address of food

// Output the value of food (Pizza)
cout << food << "\n";

// Output the memory address of food 
cout << &food << "\n";

// Output the memory address of food with the pointer 
cout << ptr << "\n";
system("PAUSE");
system("CLS");
/*Example explained
Create a pointer variable with the name ptr, that points to a string variable, by using the asterisk sign * (string* ptr). Note that the type of the pointer has to match the type of the variable you're working with.
Use the & operator to store the memory address of the variable called food, and assign it to the pointer.
Now, ptr holds the value of food's memory address.
Tip: There are three ways to declare pointer variables, but the first way is preferred:
string* mystring; // Preferred
string *mystring;
string * mystring;
*/


// Reference: Output the memory address of food with the pointer (0x6dfed4)
cout << ptr << "\n";

// Dereference: Output the value of food with the pointer (Pizza)
cout << *ptr << "\n";
/******************************************************************************************
 *Note that the * sign can be confusing here, as it does two different things in our code:*
 *When used in declaration (string* ptr), it creates a pointer variable.                  *
 *When not used in declaration, it act as a dereference operator.                         *
 ******************************************************************************************/
return 0;
}

 //khernandezd1400@alumno.ipn.mx
