/*	Escreva um algoritmo que leia os numeros
	maiores que 0 enquanto a sua soma não ultrapasse 10, escreva o sucessor do numero:
*/

#include<stdio.h>
#include<stdlib.h>

main(){
	int n=1, soma=0;
	
	while(n>0){
		printf("Digite um numero: ");
		scanf("%i", &n);	
	
	
	soma = soma + n;
	
	if(soma > 10){
		break;
	}
	
	printf("\nO Sucessor deste numero e: %i\n", n + 1);
}
}

