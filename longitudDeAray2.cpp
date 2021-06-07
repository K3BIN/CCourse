#include <iostream>
using namespace std;

#define GetSize(array_enteros) (sizeof(array_enteros)/sizeof(*(array_enteros)))

int main()
{
  int array_caracteres_enteros[]={'9','8','7','6','5','4','3','2'};
  int longitud=GetSize(array_caracteres_enteros);
  cout<<longitud<<endl;
  return 0;
}
