/*	Construir um algoritmo que entre com o ano de nascimento de uma pessoa e o ano atual. Imprimir a idade da
	pessoa. Não se esqueça de verificar se o ano de nascimento e´ um ano valido.
*/

#include<stdio.h>
#include<stdlib.h>

main(){
	int nasc, anoAtual, id=0;
	
	printf("Digite o seu ano de nascimento: ");
	scanf("%i", &nasc);
	
	printf("Digite o ano atual: ");
	scanf("%i", &anoAtual);
	
	if(nasc < anoAtual){
		id = anoAtual - nasc;
		printf("Sua idade e: %i", id);
	}
}
