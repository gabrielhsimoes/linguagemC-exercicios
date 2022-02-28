/*Leia um numero e verifique Se for positivo armazene-o em A, se for negativo armazene-o em B. No final mostrar  resultado*/

#include<stdio.h>
#include<stdlib.h>

main(){
	int A=0, B=0, n;
	
	printf("Digite um numero:");
	scanf("%i", &n);
	
	if(n>0){
		A = n;
	}
	else{
		B = n;
	}
	printf("Valor do A: %i\n", A);
	printf("Valor do B: %i", B);
}
