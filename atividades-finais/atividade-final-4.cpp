//Calcule a media de valores do triângulo inferior
//de uma matriz 4x4 

#include<stdio.h>
#include<stdlib.h>

main() {
	
	int l,c, mat[4][4], contador;
	float media;
	
	for(l=0;l<4;l++){
		for(c=0;c<4;c++){
			
			printf("Digite um numero para a linha %d coluna %d: ", l+1,c+1);
			scanf("%d", &mat[l][c]);
			
			
		}
		
		printf("\n");
	}
	
	
	for(l=0;l<4;l++){
		for(c=0;c<4;c++){
			
			printf("%d  ", mat[l][c]);
		}
		printf("\n");
	}
	
	
	//Triângulo inferior da diagonal principal
	
	printf("\nTriangulo inferior da diagonal principal\n");
	
	for(l=0;l<4;l++){
		for(c=0;c<4;c++){
			
			if(l>c){
				printf("%d ", mat[l][c]);
				
				media = media + mat[l][c];
				contador++;
			}
		}
		printf("\n");
	}
	
	
	printf("\nMedia dos valores do triangulo inferior da diagonal principal\n");
	
	printf("%.1f", media/contador);
}
