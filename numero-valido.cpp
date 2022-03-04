/*	Faça um algoritmo que lê um numero inteiro e escreva "Numero Válido" se este for um numero que estiver entre 10 e 30
*/

#include<stdio.h>
#include<stdlib.h>

main(){
	int n;
	
	printf("Digite um numero: ");
	scanf("%i", &n);
	
	if(n >= 10 && n <= 30){
		printf("Numero Valido!");
	}else{
		printf("Desculpe tente novamente!");
	}
	
}
