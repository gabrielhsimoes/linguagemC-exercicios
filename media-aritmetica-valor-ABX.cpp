/* Apresente o seguinte algoritmo:
	Ler 2 valores, no caso variáveis A e B.
	Efetuar a soma das variáveis A e B implicando seu resultado na variável X.
	Apresentar o valor da variável X após a soma dos dois valores indicados e multiplicá-lo por 2.
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
