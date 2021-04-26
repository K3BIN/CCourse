#include <iostream>
using namespace std;

int main() {
//The while loop loops through a block of code as long as a specified condition is true
int i = 0;
	while (i < 5) {
		cout << i << "\n";
		i++;
	}
system("PAUSE");
system("CLS");
	

/* Do/While Loop
The do/while loop is a variant of the while loop. This loop will execute the code block once, before checking if the condition is true, then it will repeat the loop as long as the condition is true*/
int j=0;
	do {
  		cout << j << "\n";
  		j++;
	}
while (j < 5);
system("PAUSE");
system("CLS");
//This example uses a do/while loop. The loop will always be executed at least once, even if the condition is false, because the code block is executed before the condition is tested:


/* For Loop
When you know exactly how many times you want to loop through a block of code, use the for loop instead of a while loop:*/
//	    Stat1 ; Stat2; Stat3
	for (int i = 0; i < 5; i++) {
  		cout << i << "\n";
	}
system("PAUSE");
system("CLS");
/*Statement 1 is executed (one time) before the execution of the code block.

  Statement 2 defines the condition for executing the code block.

  Statement 3 is executed (every time) after the code block has been executed.
*/


/* Break and Continue
You have already seen the break statement used in an earlier chapter of this tutorial. It was used to "jump out" of a switch statement.
The break statement can also be used to jump out of a loop.
*/
	for (int i = 0; i < 10; i++) {
  		if (i == 4) {
    		break;
  		}
  	cout << i << "\n";
	}
system("PAUSE");
system("CLS");
//This example jumps out of the loop when i is equal to 4:

/*Continue
The continue statement breaks one iteration (in the loop), if a specified condition occurs, and continues with the next iteration in the loop.
*/
	for (int i = 0; i < 10; i++) {
  		if (i == 4) {
    		continue;
  		}
  	cout << i << "\n";
	}
system("PAUSE");
system("CLS");
//This example skips the value of 4:

return 0;
}

/*
Note: Do not forget to increase the variable used in the condition, otherwise the loop will never end!
khernandezd1400@alumno.ipn.mx
*/
