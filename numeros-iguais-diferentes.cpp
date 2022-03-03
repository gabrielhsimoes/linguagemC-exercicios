/*Crie um algoritmo que leia dois numeros inteiros e imprimir uma mensagem dizendo se são iguais ou diferentes*/

#include<stdio.h>
#include<stdlib.h>

main(){
	int a, b;
	
	printf("Digite um numero: ");
	scanf("%i", &a);
	
	printf("Digite outro numero: ");
	scanf("%i", &b);
	
	if(a != b){
		printf("Esses numeros sao diferentes!");
	}else{
		printf("Esses numeros sao iguais!");
	}
}
