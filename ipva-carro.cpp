/*	Crie um algoritmo que receba um valor de um carro e calcule o IPVA, sabendo que
as condições são 5% se o valor for Abaixo de 25000 e 7% se for igual ou maior que 25000
*/

#include<stdio.h>
#include<stdlib.h>

main(){
	float valCar, ipva=0, valTotal=0;
	
	printf("Digite o valor de um carro: ");
	scanf("%f", &valCar);
	
	if(valCar >= 25000){
		ipva = valCar * 7/100;
		valTotal = valCar + ipva;
	}else{
		ipva = valCar  * 5/100;
		valTotal = valCar + ipva;
	}
	
	printf("Valor do Carro: %.2f\n", valCar);
	printf("Valor do IPVA: %.2f\n", ipva);
	printf("Valor Total com IPVA: %.2f", valTotal);
}
