/* Ler dois valores A e B, efetuar a troca doss valores 
	de forma que a variável A receba o valor de B e a 
	variável B receba o valor de A. Apresentar os valores trocados
*/

#include<stdio.h>
#include<stdlib.h>

main(){
	int A, B, C=0;
	
	printf("Digite o primeiro numero: ");
	scanf("%i", &A);
	
	printf("Digite o segundo numero: ");
	scanf("%i", &B);
	
	C = A;
	A = B;
	B = C;
	
	printf("Valor de A: %i\n", A);
	printf("Valor de B: %i", B);
}
