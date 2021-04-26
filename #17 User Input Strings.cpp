#include <iostream>
#include <string>
using namespace std;

int main() {
//It is possible to use the extraction operator >> on cin to display a string entered by a user:
string firstName;
cout << "Type your first name: ";
cin >> firstName; // get user input from the keyboard
cout << "Your name is: " << firstName<<"\n";
system("PAUSE");
system("CLS");
// Type your first name: Kevin
// Your name is: Kevin	

	//However, cin considers a space (whitespace, tabs, etc) as a terminating character, which means that it can only display a single word (even if you type many words):
string fullName;
cout << "Type your full name: ";
cin >> fullName;
cout << "Your name is: " << fullName<<"\n";
system("PAUSE");
system("CLS");
// Type your full name: Kevin Hernández
// Your name is: Kevin

	/*From the example above, you would expect the program to print "Kevin Hernández", but it only prints "Kevin".
That's why, when working with strings, we often use the getline() function to read a line of text. It takes cin as the first parameter, and the string variable as second:
*/
fflush(stdin);
cout << "Type your full name: ";
getline (cin, fullName);
cout << "Your name is: " << fullName<<"\n";
system("PAUSE");
system("CLS");
// Type your full name: Kevin Hernández 
// Your name is: Kevin Hernández

//Omitting Namespace
std::string greeting = "Bye";
std::cout << greeting; 
return 0;
}

/***************************************************************************************NOTE********************************************************************************************************************
 *cin>> leaves the newline character (\n) in the iostream.  If getline is used after cin>>, the getline sees this newline character as leading whitespace, thinks it is finished and stops reading any further.*
 *fflush() is typically used for output stream only. Its purpose is to clear (or flush) the output buffer and move the buffered data to console (in case of stdout) or disk (in case of file output stream).   *
 *                                                                                                                                                                                                             *
 *Another way to fix this problem is to reverse the order of the input.  Avoid putting getline after cin >>.                                                                                                   *
 *This method has limited applications.  If you are looping, this will not solve the problem.                                                                                                                  *
 ***************************************************************************************************************************************************************************************************************/
//khernandezd1400@alumno.ipn.mx
