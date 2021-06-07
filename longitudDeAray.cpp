#include <iostream>
using namespace std;

int main()
{
    int array_enteros[]={'9','8','7','6','5','4','3','2'};
    int longitud=sizeof(array_enteros)/sizeof(*array_enteros);
    cout<<longitud<<endl;
    return 0;
}
