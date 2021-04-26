#include <iostream>
using namespace std;

int main() {
	
//In the following example, the user can input a number, which is stored in the variable x. Then we print the value of x:
  int z; 
		cout << "Type a number: "; // Type a number and press enter
		cin >> z; // Get user input from the keyboard
		cout << "Your number is: " << z <<"\n"; // Display the input value
	system("PAUSE");
	system("CLS");
	
	
/*
Creating a Simple Calculator
In this example, the user must input two numbers. Then we print the sum by calculating (adding) the two numbers:
*/
int x, y;
int sum;
cout << "Type a number: ";
cin >> x;
cout << "Type another number: ";
cin >> y;
sum = x + y;
cout << "Sum is: " << sum;
  return 0;
}

//khernandezd1400@alumno.ipn.mx

