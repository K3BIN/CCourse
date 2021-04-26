#include <windows.h>
#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include <time.h>
#include <cstdlib>
#include <ctime>
#include <stdio.h>
#include <windows.h>
#include <string>  
#include <fstream>
#include <ctime>
using namespace std;

int i=1, j=0, temporal, a, op,c,A,B, contador;

char s, R;
int q=0;
int d, f;
int v;
int b;
int lista[1000000], alterna[1000000], Dash[1000000];
int n=0, inicio;
int cn=0;
int salvacn;
int si, dish=0, coul=0;
int izq,der,pivote;
int ban=0;
int valorsalva;
int LeeArchivo();
int LeeNuevoArchivo();
int Ordenamiento();
int GrabaArchivo();
clock_t t_ini, t_fin;
double secs;
void captura();
void Ordenamieto();


struct Entrada {
		int valor;
} entrada;

string nombrearchivo;



FILE *archivo1;
	struct Registro{
		int valor;
    } Registro;  


int LeeArchivo(){
	FILE *archivo1;
    string valorInt;

    printf("\n Teclea el nombre del archivo de entrada:   ");
	cin >> nombrearchivo;
	nombrearchivo+= ".txt";						 	
	
	
	archivo1 = fopen(nombrearchivo.c_str(), "r");		        
	cout<<"\n\t Leyendo archivo";
	//Sleep(5000);
	cout<<"\n\t Analizando en busca de errores\n";
	//Sleep(2000);
	if(archivo1== NULL ){
		printf(" No se puede abrir el archivo ");
		exit(1);
	}
	else{
		printf("\n\t Archivo leido exitosamente %s\n ", nombrearchivo.c_str() );
    }
    cn=0;
    for (i=0; !feof(archivo1); i++) {               
        fscanf (archivo1, "%i", &entrada.valor);    
        lista[i]=entrada.valor;                     
        alterna[i]=entrada.valor;
        Dash[i]=entrada.valor;
        cn++;                                       
	}
	printf("valor de n es:  %i\n",cn);
	return (0);
}


int Eliminar()
{
	int CLR=0;
    for(int i=0; i<cn-1; i++)
	{
        for(int j=i+1; j<cn; j++) {

            if(lista[i] == lista[j])
			{

                for(int k=j;k<cn-1;k++)
				{
                   swap(lista[k], lista[k+1]);
				}
                cn--;

                j--;

            }
		}
	}
    for(int i=0;i<cn;i++)
    cout<<"\n\t"<< lista[i] << " \n\t";
    
	
	
	cout<<"\n\n\t Duplicados eliminados \n\t";                                     
	printf("El tamaño del archivo es:  %i\n",cn);
	if(CLR>=0)
	cn++;
	CLR++;
	
}


Mostrar ()
{
    for (i=0; i<cn; i++){
        printf(" el valor es %i \n", lista [i]);
    }
    printf("valor de n es:  %i\n",i);
    return (0);
}


Par()
{
	for (i=1; i<=cn; i++)
    {
        c=lista[i]%2;
        if (c==0)
        {	
			cout<<""<<lista[i]<<"\n\t"<<endl;
        }
    }
	cout<<"\n\t Esta es la lista de numeros pares\n\t";      
    system("PAUSE");
    system("CLS");
    cout<<"\n\t ¿Quieres la lista de numeros impares? \n\t\t s = SI || n = NO\n\t";
    cin>>s;
    if(s =='s'){
    	for (i=1 ; i<=cn ; i++)
    	{
        	b=lista[i]%2;
        	if (b==1)
        	{
                  cout<<""<<lista[i]<<"\n\t"<<endl;
        	}
    	}
		cout<<"\n\t Esta es la lista de numeros impares\n\t";      
   	 	system("PAUSE");
    	system("CLS");   
	}
    
    
    return 0;
}

Ordenamiento(){

	system("CLS");
	cout<<"\t Estos son los datos ordenados \n\t";
	for(i=0; i<=cn;i++){	
		for(int j=0; j<=cn-1; j++)
		{
			if(lista[j]<lista[j+1])
			{
				temporal=lista[j];
				lista[j]=lista[j+1];
				lista[j+1]=temporal;
			}
		}				
	}
	for (i=0; i<cn; i++){
        printf("%i\n", lista [i]);
        cout<<"\n\t";
	}   
	
	cout<<"\n\t ¿Quieres ordenarlos a la inversa? \n\t\t s = SI || n = NO\n\t";
    cin>>R;
    for(i=0; i<=cn;i++){	
		for(int j=0; j<=cn-2; j++)
		{
			if(lista[j]>lista[j+1])
			{
				temporal=lista[j];
				lista[j]=lista[j+1];
				lista[j+1]=temporal;
			}
		}				
	}
	for (i=0; i<cn; i++){
        printf("%i\n", lista [i]);
        cout<<"\n\t";
    }
    
		cout<<"\n\t Esta es la lista invertida\n\t";      
   	 	system("PAUSE");
    	system("CLS");   
	

    printf("El tamaño del archivo es:  %i\n",cn);
	return (0);
}



int main()
{
	do{
	
	system("COLOR 8F");
	cout<<"\n\t    \t Menu";
	cout<<"\n\t 1.-\t Lectura de Archivo";
	cout<<"\n\t 2.-\t Mostrar contenido";
	cout<<"\n\t 3.-\t Eliminar duplicados";
	cout<<"\n\t 4.-\t Mostrar par e impar";
	cout<<"\n\t 5.-\t Ordenar";
	cout<<"\n\t 6.-\t Salir";
	cout<<"\n\n\t *************Advertencia *************\t";
	cout<<"\n\t Se debe haber leido un archivo previamente para poder realizar alguna operacion";
	cout<<"\n\n\n\n\t Selecciona una opcion \t";
	cin>>op;
	
	switch (op)
	{
		case 1:{
			LeeArchivo();
			break;
		}
		
		case 2:{
			Mostrar();
			break;
		}
		
		case 3:{
			Eliminar();
			break;
		}
		case 4:{
			Par();
			break;
		}
		
		case 5:{
			Ordenamiento();
			break;
		}
		
		case 6:{
			system("CLS");
			break;
		}
		default:{
			cout<<"\n\t No elegiste un numero del 1 al 5\n\n";
			break;
		}
	}
	system("PAUSE");
	cout<<"*************Guardando datos, porfavor espere*************\n";
	cout<<"El ordenador emitira un sonido cuando este haya terminado\n";
	Sleep(5000);
	Beep(500,1000);
	cout<<"\n\n\tDatos guardados correctamente\n";
	Sleep(2000);
	system("CLS");
	cout<<"\t¿Continuar con el programa? \n\t\t s = SI || n = NO\n\t";
	cin>>s;
	system("CLS");
	}
	while(s =='s');
}
