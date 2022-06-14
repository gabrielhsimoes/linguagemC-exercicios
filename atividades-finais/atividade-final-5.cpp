//Crie um algoritmo que simule um estacionamento
//com 20 espaços. Faça uma forma de simular uma ocupação de uma vaga e faça o
//liberar vaga.

#include<stdio.h>
#include<stdlib.h>

main(){
	
	int vaga[20], i, valor, ocuparVaga, liberarVaga, op, ticket[20], valorTic;
	
	for(i=1;i<=20;i++){
		
		vaga[i] = 0;
	}
	
	for(i=1;i<=20;i++){
		
		ticket[i] = 0;
	}
	
	
	printf("Bem vindo(a) ao Estacionamento!\n");
	
	do{
	
	printf("\nDigite 1 para ocupar a vaga ou Digite 2 para liberar uma vaga: ");
	scanf("%d", &valor);
	
	if(valor==1){
		
		printf("------- [ OCUPACAO DE VAGAS ] -------");
		
		printf("\n----------------------------------------------------------");
		for(i=1;i<=20;i++){
			
			printf("\n Posicao %d - Vaga %d", i, vaga[i]);	
		}
		
		printf("\n----------------------------------------------------------");
		printf("\nVALOR 0: VAGA DISPONIVEL");
		printf("\nVALOR 1: VAGA OCUPADA");
		
		printf("\n\n"); 
		printf("Em qual posicao deseja ocupar a vaga? ");
		scanf("%d", &ocuparVaga);
		
		if(ocuparVaga > 20 || ocuparVaga <=0){
			printf("\nNao Existe essa posicao\n");
			
		}else if(vaga[ocuparVaga]==1){
			
			printf("Esta vaga nao esta disponivel!");
		
		}

		else{
			
			vaga[ocuparVaga] = 1;
			
			ticket[ocuparVaga] = ocuparVaga + 1;
			
			printf("\n___________________________________________\n");
			printf("NUMERO DO TICKET: %d\n", ticket[ocuparVaga]);
			printf("\nPor favor nao perder esse numero!");
			printf("\n___________________________________________");
			
			for(i=1;i<=20;i++){
			
			printf("\n Posicao %d - Vaga %d", i, vaga[i]);	
			
			}
			printf("\n");
			
		}
		
		
		
	}else if(valor !=1 && valor!=2){
		printf("\nTente Novamente\n");
	}

	else{
		printf("------- [ LIBERACAO DE VAGAS ] -------");
		
		printf("\n----------------------------------------------------------");
		
		for(i=1;i<=20;i++){
			
			printf("\n Posicao %d - Vaga %d", i, vaga[i]);
		}
		
		printf("\n----------------------------------------------------------");
		printf("\nVALOR 0: VAGA DISPONIVEL");
		printf("\nVALOR 1: VAGA OCUPADA\n");
			
		
		printf("\nEm qual posicao deseja liberar a vaga? ");
		scanf("%d", &liberarVaga);	
		
		printf("Digite o numero do seu ticket: ");
		scanf("%d", &valorTic);
		
		
		if(valorTic==liberarVaga+1){
			
			vaga[liberarVaga] = 0;
			
			printf("\n----------------------------------------------------------");
			
			for(i=1;i<=20;i++){
			
			printf("\n Posicao %d - Vaga %d", i, vaga[i]);	
			
			}

		}else{
			
			printf("\nTalvez essa nao seja sua vaga ou voce digitou um numero errado!!\n");
			printf("Tente novamente mais tarde!\n");
		}
				
	
	}
	
	printf("\nDeseja Continuar?\n");
	printf("1- SIM OU 2-NAO\n");
	scanf("%d", &op);
	
	}while(op==1);
}
