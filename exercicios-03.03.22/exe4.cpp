/*	Faça um algoritmo para entrar com numeros
	positivos e imprimir a media dos numeros informados:
*/

#include<stdio.h>
#include<stdlib.h>

main(){
	int n, i=0, acumulador=0, media=0;
	
	while(n >= 0){
		
		printf("\nDigite um numero: ");
		scanf("%i", &n);
		
		if(n < 0){
			break;
		}
		acumulador = acumulador + n;
		i++;
		media = acumulador / i;
		printf("Numero Digitado: %i\n", n);
		printf("A media dos numeros digitados: %i\n", media);
	}
}
