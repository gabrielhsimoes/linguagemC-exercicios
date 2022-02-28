/*Ler um numero e verificar se ele é par ou impar. Quando for par armazenar esse valor em P e 
quando for impar armazenar em I. No final mostrar o resultado*/

#include<stdio.h>
#include<stdlib.h>

main(){
	int P, I, n;
	
	printf("Digite um numero:");
	scanf("%i", &n);
	
	if(n % 2 == 0){
		P = n;
	}
	else{
		I = n;
	}
	printf("Valor do P: %i\n", P);
	printf("Valor do I: %i", I);
}
