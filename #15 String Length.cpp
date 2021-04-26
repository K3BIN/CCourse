#include <iostream>
using namespace std;

int main() {
//To get the length of a string, use the length() function:
string txt = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
cout << "The length of the txt string is: " << txt.length()<<"\n";
system("PAUSE");
system("CLS");

//You might see some C++ programs that use the size() function to get the length of a string. This is just an alias of length(). It is completely up to you if you want to use length() or size():
cout << "The length of the txt string is: " << txt.size();
  return 0;
}

//khernandezd1400@alumno.ipn.mx
