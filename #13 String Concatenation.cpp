#include <iostream>
using namespace std;

int main() {
//The + operator can be used between strings to add them together to make a new string. This is called concatenation:
string firstName = "Kevin ";
string lastName = "Hernandez";
string fullName = firstName + lastName;
cout << fullName<<"\n";
system("PAUSE");
system("CLS");
//In the example above, we added a space after firstName to create a space between John and Doe on output. However, you could also add a space with quotes (" " or ' '):


//--------------------------------------------------------------------------------Append--------------------------------------------------------------------------------
//A string in C++ is actually an object, which contain functions that can perform certain operations on strings. For example, you can also concatenate strings with the append() function:
string FullName = firstName.append(lastName);
cout << FullName;
return 0;
}
/************************************************************************************************************************************************************************************************************
*It is up to you whether you want to use + or append(). The major difference between the two, is that the append() function is much faster. However, for testing and such, it might be easier to just use +.*
*************************************************************************************************************************************************************************************************************/

//khernandezd1400@alumno.ipn.mx
