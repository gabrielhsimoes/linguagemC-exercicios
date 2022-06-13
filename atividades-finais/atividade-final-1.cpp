//Implemente uma matriz identidade de tamanho 4x4.

#include<stdio.h>
#include<stdlib.h>

main() {
	
	int l,c, mat[4][4];
	
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
	
	
	//MATRIZ IDENTIDADE
	
	printf("Matriz da diagonal principal\n");
	
	for(l=0;l<4;l++){
		for(c=0;c<4;c++){
			
			if(l==c){
				printf("%d ", mat[l][c]);
				
			}
		}
		printf("\n");
	}
}
