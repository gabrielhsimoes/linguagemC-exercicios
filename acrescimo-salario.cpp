/* Faça um algoritmo que receba o salario de um funcionário, 
calcule um acréscimo de 40 reais e mostre o novo salario*/
#include<stdio.h>
#include<stdlib.h>

main(){
	float sal, nvSal=0;
	
	printf("Digite o valor do seu salario: ");
	scanf("%f", &sal);
	
	nvSal = sal + 40;
	
	printf("Salario Anterior: %.2f\n", sal);
	printf("Novo Salario: %.2f", nvSal);
}
