/*C++ Constants
When you do not want others (or yourself) to override existing variable values, use the const keyword (this will declare the variable as "constant", which means unchangeable and read-only):
*/
#include <iostream>
using namespace std;

int main() {
  const int myNum = 15;  // myNum will always be 15
  myNum = 10;  // error: assignment of read-only variable 'myNum' 
  return 0;
}

/*
You should always declare the variable as constant when you have values that are unlikely to change:

Example
const int minutesPerHour = 60;
const float PI = 3.14;

khernandezd1400@alumno.ipn.mx
*/

