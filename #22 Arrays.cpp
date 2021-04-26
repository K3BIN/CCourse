#include <iostream>
using namespace std;

int main() {
 /*Arrays are used to store multiple values in a single variable, instead of declaring separate variables for each value.
To declare an array, define the variable type, specify the name of the array followed by square brackets and specify the number of elements it should store:*/
string cars[4] = {"Bocho", "BMW", "Ford", "Mazda"};
cout << cars[0]<<"\n";
system("PAUSE");
system("CLS");
/*Outputs Bocho
Note: Array indexes start with 0: [0] is the first element. [1] is the second element, etc.*/


//Change an Array Element
cars[0] = "Volvo";
cout << cars[0]<<"\n";
system("PAUSE");
system("CLS");
// Now outputs Volvo instead of Bocho


//Arrays and Loops
for(int i = 0; i < 4; i++) {
  cout << i << ": " << cars[i] << "\n";
}
//The example outputs the index of each element together with its value


/*Omit Array Size
You don't have to specify the size of the array. But if you don't, it will only be as big as the elements that are inserted into it
This is completely fine. However, the problem arise if you want extra space for future elements. Then you have to overwrite the existing values
If you specify the size however, the array will reserve the extra space:*/

/*Omit Elements on Declaration
It is also possible to declare an array without specifying the elements on declaration, and add them later:

string cars[5];
cars[0] = {"Volvo"};
cars[1] = {"BMW"};
...
*/
  return 0;
}
//khernandezd1400@alumno.ipn.mx
