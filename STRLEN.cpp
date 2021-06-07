#include <stdio.h>
#include <string.h>
//	STRLEN	Devuelve la longitud de una cadena C str .
int main ()
{
  char cadena[256];
  printf ("Enter a sentence: ");
  gets (cadena);
  printf ("La oracion tiene %u caracteres de longitud.\n",(unsigned)strlen(cadena));
  return 0;
}
