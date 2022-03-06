/*	Criar um algoritmo que leia o salario de uma pessoa e imprimir o desconto do INSS segundo os dados abaixo:
	- menor ou igual a R$ 600 = isento;
	- maior que R$ 600 e menor ou igual que R$ 1.200 = 20%
	- maior que R$ 1.200 e menor ou igual a 2.000 = 25%
	- maior que R$ 2.000 = 30%
*/

#include<stdio.h>
#include<stdlib.h>

main(){
	float sal, desc=0, salFinal=0;
	
	printf("Digite o valor do seu salario: ");
	scanf("%f", &sal);
	
	if(sal > 2000){
		desc = sal * 30/100;
		salFinal = sal - desc;
		
		printf("Desconto do INSS APLICADO!\n");
		printf("Valor INSS: %.2f\n", desc);
		printf("Salario Final: %.2f", salFinal);
		
	}else if(sal > 1200 && sal <=2000){
		desc = sal * 25/100;
		salFinal = sal - desc;
		
		printf("Desconto do INSS APLICADO!\n");
		printf("Valor INSS: %.2f\n", desc);
		printf("Salario Final: %.2f", salFinal);
		
	}else if(sal > 600 && sal <= 1200){
		desc = sal * 20/100;
		salFinal = sal - desc;
		
		printf("Desconto do INSS APLICADO!\n");
		printf("Valor INSS: %.2f\n", desc);
		printf("Salario Final: %.2f", salFinal);
	}else{
		printf("## Desconto do INSS NAO APLICADO! ##\n");
		printf("Salario Final: %.2f", sal);
	}
}
