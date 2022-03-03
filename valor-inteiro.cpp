/*	Faça um algoritmo que leia um numero inteiro e escreva se for maior que 10
*/

#include<stdio.h>
#include<stdlib.h>

main(){
	int n;
	
	printf("Digite um numero: ");
	scanf("%i", &n);
	
	if(n > 10){
		printf("Numero Digitado: %i", n);
	}
	
	return 0;
}
