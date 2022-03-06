/*	Escreva um algoritmo que leia o valor da mensalidade do curso e a data atual (dd/mm/aaaa), se o dia for menor que
	o 7º dia corrente do mes, aplique o desconto de 15% e escreva o novo valor da mensalidade.
*/

#include<stdio.h>
#include<stdlib.h>

main(){
	float mensal, desc=0, mensalFinal=0;
	int dt;
	
	printf("Digite o valor da mensalidade do seu curso: ");
	scanf("%f", &mensal);
	
	printf("Digite a data atual: ");
	scanf("%i", &dt);
	
	if(dt > 0 && dt < 7){
		desc = mensal * 15/100;
		mensalFinal = mensal - desc;
		
		printf("## DESCONTO APLICADO! ##\n");
		printf("Valor do desconto: %.2f\n", desc);
		printf("Valor da mensalidade atual: %.2f", mensalFinal);
	}else{
		printf("-- SEM APLICACAO DE DESCONTO! --\n");
		printf("Valor da mensalidade: %.2f", mensal);
	}
}
