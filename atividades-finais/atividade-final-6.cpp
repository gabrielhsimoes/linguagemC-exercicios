//Crie um algoritmo de venda de produtos, que
//guarde os produtos, mostre para venda, a venda o usuário deve poder comprar 2
//ou 3 produtos diferentes se assim desejar, calcule a venda e mostrar os produtos
//e o valor final.

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

main(){
	
	char produtos[10][10] = {"Laranja", "Ovo", "Arroz", "Acucar", "Maca", "Pera", "Feijao", "Shampoo", "Sabonete", "Melancia"}, listaPod[10][10];
	float precos[10] = {3.50, 2, 7.89, 5, 1.50, 2.40, 4, 12, 3.99, 8}, valor, listaP[20], pag;
	int i, num, operador, cont=0;
	
//	for(i=0;i<20;i++){
//		teste[i] = 0;
//	}
	
	printf("----------------[ SISTEMA DE VENDA DE PRODUTOS ]----------------\n");
	
	do{
	
	for(i=0;i<10;i++){
		printf("\n* Posicao: %d  %s - R$ %.2f", i, produtos[i], precos[i]);
		
	}
	
	printf("\n");
	printf("\nEscolha um produto de acordo com sua posicao: ");
	scanf("%d", &num);
	
	if(num > 9 || num < 0){
		printf("Produto nao existe!!");
	}
	else{
		
	valor = valor + precos[num];
	printf("\nPRODUTOS ESCOLHIDOS:\n");
	
	listaP[cont] = precos[num];
	strcpy(listaPod[cont], produtos[num]);
	
	for(i=0;i<=cont;i++){
		
		printf("#%s R$ %.2f\n", listaPod[i], listaP[i]);
	}
	
	printf("\n______________________________________\n");
	printf("Valor Total: %.2f", valor);
	
	cont++;
	}
	
	
	printf("\n");
	printf("\nDeseja continuar a fazer compras?\n");
	printf("Digite 1 para SIM ou Digite 2 para NAO: ");
	scanf("%d", &operador);
	
	}while(operador==1);
	
	
	printf("\nPreco Final: %.2f", valor);
	printf("\nDigite o valor para pagamento: ");
	scanf("%f", &pag);
	
	if(pag > valor){
		printf("Troco: %.2f", pag - valor);
	}else{
		printf("\nValor nao autorizado!");
	}

}
