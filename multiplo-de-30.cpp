/*	Criar um algoritmo que leia um numero, verifique se e´ multiplo de 30 e imprimir uma das mensagens: “e´ multiplo
	de 30” ou “não e´ multiplo de 30”
*/

#include<stdio.h>
#include<stdlib.h>

main(){
	int n;
	
	printf("Digite um numero: ");
	scanf("%i", &n);
	
	if(n % 30 ==0){
		printf("E multiplo de 30!");
	}else{
		printf("Nao e multiplo de 30.");
	}
}
