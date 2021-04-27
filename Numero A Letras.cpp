#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;
string centena(int i, int j, int k);
void unidad();
void decena();

string unidades[9] = {"uno","dos","tres","cuatro","cinco","seis","siete","ocho","nueve"};
string especiales[9] = {"once","doce","trece","catorce","quince","dieciseis","diecisiete","dieciocho","diecinueve"};
string decenas[9] = {"diez","veinti","treinta","cuarenta","cincuenta","sesenta","setenta","ochenta","noventa"};
string cientos[9] = {"ciento","doscientos","trescientos","cuatrocientos","quinientos","seiscientos","setecientos","ochocientos","novecientos"};
char num[9] = {'0','0','0','0','0','0','0','0','0'};
int u, d, c;
string letra = "";

int main()
{
    string numero;
    int l;

    cout<<"introduce un numero"<<endl;
    cin>>numero;

    l = numero.size();

    int j=l;
    int i=9;

    while(j!=0)
    {
        i--;
        j--;
        num[i] = numero[j];
    }

    for(int i=0; i<9; i++)
    {
        cout<<num[i]<<" ";
    }
    cout<<endl;


    if(l<=3)
    {
        cout<<centena(8, 7, 6)<<endl;
    }
    else if(l>3 && l<=6)
    {
        cout<<centena(5, 4, 3)<<" "<<centena(8, 7, 6);
    }
    else if(l>6 && l<=9)
    {
        cout<<centena(2, 1, 0)<<" "<<centena(5, 4, 3)<<" "<<centena(8, 7, 6);
    }


    return 0;
}

string centena(int i, int j, int k)
{
    letra = "";
    u = num[i] - '0';
    d = num[j] - '0';
    c = num[k] - '0';

    if(c==0)
    {
        if(d!=0)
        {
            decena();
        }
        if(d==0)
        {
            unidad();
        }
    }
    else if(c!=0)
    {
        if(d==0)
        {
            if(c==1 && u==0)
            {
                letra+= "cien";
            }
            else
            {
                letra += cientos[c-1] + " ";
                unidad();
            }
        }
        else if(d != 0)
        {
            letra += cientos[c-1] + " ";
            decena();
        }
    }

    if(i==2 && j==1 && k==0)
    {
        letra += " millones";

        if(c==0 && d==0 && u==1)
        {
            letra = "un millon";
        }
    }

    if(i==5 && j==4 && k==3)
    {
        letra += "mil";
        if(c==0 && d==0 && u==1)
        {
            letra = "mil";
        }
    }

    return letra;
}

void unidad()
{
    letra += unidades[u-1];
}

void decena()
{
    if(d==1 && u!=0)
    {
        letra += especiales[u-1];
    }
    else if(d==2 && u!=0)
    {
        letra += decenas[d-1] + unidades[u-1];
    }
    else if(d==2 && u==0)
    {
        letra += "veinte";
    }
    else if(u!=0)
    {
        letra += decenas[d-1] + " y " + unidades[u-1];
    }
    else if(u == 0)
    {
        letra += decenas[d-1];
    }
}
