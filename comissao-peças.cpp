/*Construa um algoritmo para pagamento de comiss�o de vendedores de pe�as, levando-se em considera��o
que sua comiss�o ser� de 5% do total da venda e que voc� tem os seguintes dados:
-- Identifica��o do vendedor - c�digo da pe�a
-- Pre�o Unit�rio da Pe�a 
-- Quantidade vendida */

#include<stdio.h>
#include<stdlib.h>

main(){
	int idVendedor, idPeca, qtd;
	float preco, vt, vc, vf;
	
	printf("Bem-vindo(a) a nossa loja!\n");
	printf("Escolha qual dos nossos vendedores ira atender voce: 1- Carlos, 2- Eduarda, 3- Francisco: ");
	scanf("%i", &idVendedor);
	
	printf("Digite o codigo da peca que foi escolhida: ");
	scanf("%i", &idPeca);
	
	printf("Digite o preco unitario dessa peca:");
	scanf("%f", &preco);
	
	printf("Digite a quantidade de pecas vendidas: ");
	scanf("%i", &qtd);
	
	vt = qtd * preco;
	vc = vt * 5/100;
	vf = vt + vc;
	printf("_________________________________________________________\n");
	printf("Identificador do Vendedor(a): %i\n", idVendedor);
	printf("Codigo da peca: %i\n", idPeca);
	printf("Preco Unitario: %.2f\n", preco);
	printf("Quantidade: %i\n", qtd);
	printf("\n--Valor Total: %.2f\n", vt);
	printf("--Valor da Comissao: %.2f\n", vc);
	printf("--Valor final com a comissao: %.2f\n", vf);
}
