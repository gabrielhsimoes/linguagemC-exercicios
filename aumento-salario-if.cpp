/*	Crie um algoritmo que receba um salario e calcule 8% de aumento se o salario for menor que 2000
*/

#include<stdio.h>
#include<stdlib.h>

main(){
	float sal, aumt=0, salFinal=0;
	
	printf("Digite o valor do seu salario: ");
	scanf("%f", &sal);
	
	if(sal < 2000){
		aumt = sal * 8/100;
		salFinal = sal + aumt;
	}
	
	printf("Salario Atual: %.2f\n", sal);
	printf("Aumento Salarial: %.2f\n", aumt);
	printf("Salario Final: %.2f", salFinal);
}
