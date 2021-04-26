#include <iostream>
#include <string>
using namespace std;

int main() {
string ahorcado[2]={"Kevin Daniel", "Hernandez Diaz"}, prueba;
fflush(stdin);
cout << "Type your full name: ";
getline (cin, prueba);
if(prueba==ahorcado[0]){cout<<"\t\t Correcto";}		//Kevin Daniel 
else{cout<<"\t\t Incorrecto";}
cout<<"\t\n Fin";
system("PAUSE");
system("CLS");

return 0;
}
