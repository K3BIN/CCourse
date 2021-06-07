#include <stdio.h>
#include <stdlib.h>

main(){
	
	int arreglo [10],i,n,contador;
	contador=0;
 
	for (i=1;i<=10;i++){
		printf("\nDigite el %d numero de la lista: ",i);
		scanf("%d",&arreglo[i]);
	}
	printf("Digite el numero que quiere saber cuantas veces se repite: ");
	scanf("%d",&n);
	for (i=1;i<=10;i++){
		if (n==arreglo[i]){
			contador++;
		}
	}
	printf("El numero %d, se repite %d veces\n",n,contador);
	system("Pause");

}
