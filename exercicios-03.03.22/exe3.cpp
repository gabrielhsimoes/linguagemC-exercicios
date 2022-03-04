/*	Faça um algoritmo para entrar com numeros
	enquanto forem positivos e imprimir quantos numeros foram informados:
*/

#include<stdio.h>
#include<stdlib.h>

main(){
	int n, i;
	
	while(n >= 0){
		
		printf("\nDigite um numero: ");
		scanf("%i", &n);
		
		if(n < 0){
			break;
		}
		
		i++;
		printf("Numero Digitado: %i\n", n);
		printf("Quantos numeros foi digitado ate agora: %i\n", i);
	}
}
