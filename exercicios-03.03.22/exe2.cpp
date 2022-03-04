/* 	Escreva um algoritmo que leia os numeros informados e imprimir o dobro de cada numero.
	O algoritmo acaba quando entrar com o numero -99:
*/

#include<stdio.h>
#include<stdlib.h>

main(){
	int a=0, dobro=0;
	
	while(a != -99){
		
		printf("Digite um numero: ");
		scanf("%i", &a);
		
		if(a == -99){
			break;
		}
		
		dobro = a * 2;
		
		printf("\nO dobro desse numero e: %i\n", dobro);
	}
}
