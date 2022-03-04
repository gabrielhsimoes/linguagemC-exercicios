/*	Escreva um algoritmo que leia os numeros
	menores que 20 e imprimir a soma somente dos numeros pares:
*/

#include<stdio.h>
#include<stdlib.h>

main(){
	int n, somaPar=0;
	
	while(n < 20){
		printf("Digite um numero: ");
		scanf("%i", &n);
		
		if(n %2 == 0){
			somaPar = somaPar + n;
			
			printf("A soma dos numeros pares: %i\n", somaPar);
		}
		
	}
}
