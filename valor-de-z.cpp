/* Faça um algoritmo para encontrar e apresentar o valor para Z
	aplicando a seguinte
	
	fórmula: Z=(L+A * 2) / C. Os valores L,A,C são dados de entrada 
*/

#include<stdio.h>
#include<stdlib.h>

main(){
	int L,A,C,Z=0;
	
	printf("Digite um valor de entrada para L: ");
	scanf("%i", &L);
	
	printf("Digite um valor de entrada para A: ");
	scanf("%i", &A);
	
	printf("Digite um valor de entrada para C: ");
	scanf("%i", &C);
	
	Z = (L+A * 2)/ C;
	
	printf("Valor de Z: %i", Z);
}
