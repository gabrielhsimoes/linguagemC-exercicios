/* Apresente o seguinte algoritmo:
	Ler 2 valores, no caso vari�veis A e B.
	Efetuar a soma das vari�veis A e B implicando seu resultado na vari�vel X.
	Apresentar o valor da vari�vel X ap�s a soma dos dois valores indicados e multiplic�-lo por 2.
*/

#include<stdio.h>
#include<stdlib.h>

main(){
	int A, B, X=0;
	
	printf("Digite um numero: ");
	scanf("%i", &A);
	
	printf("Digite outro numero:");
	scanf("%i", &B);
	
	X = (A+B) * 2;
	
	printf("Valor da variavel X: %i", X);
}
