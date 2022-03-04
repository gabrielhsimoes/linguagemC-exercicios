/*	Escreva um algoritmo que leia dois valores inteiros diferentes e imprima a soma deles, somente se primeiro valor for
	maior que o segundo valor
*/

#include<stdio.h>
#include<stdlib.h>

main(){
	int a, b;
	
	printf("Digite um numero: ");
	scanf("%i", &a);
	
	printf("Digite outro numero: ");
	scanf("%i", &b);
	
	if(a > b && a != b){
		printf("A soma desses valores e: %i", a+b);
	}
}


