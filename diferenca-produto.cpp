/* Leia 4 variáveis A,B,C e D. A seguir, calcule e mostre
	a diferença do produto A e B pelo produto de C e D.
	Formula da diferença do produto (A*B) - (C*D).
*/

#include<stdio.h>
#include<stdlib.h>

main(){
	int A,B,C,D;
	
	printf("Digite o primeiro numero: ");
	scanf("%i", &A);
	
	printf("Digite o segundo numero: ");
	scanf("%i", &B);
	
	printf("Digite o terceiro numero: ");
	scanf("%i", &C);
	
	printf("Digite o quarto numero: ");
	scanf("%i", &D);
	
	printf("Diferenca do produto A e B pelo produto de C e D: %i", (A*B)-(C*D));
}
