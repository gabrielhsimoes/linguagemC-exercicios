//Implemente uma matriz transposta.

#include<stdio.h>
#include<stdlib.h>

main() {
	
	int l,c, mat[3][2];
	
	for(l=0;l<3;l++){
		for(c=0;c<2;c++){
			
			printf("Digite um numero para a linha %d coluna %d: ", l+1,c+1);
			scanf("%d", &mat[l][c]);
			
			
		}
		
		printf("\n");
	}
	
	
	for(l=0;l<3;l++){
		for(c=0;c<2;c++){
			
			printf("%d  ", mat[l][c]);
		}
		printf("\n");
	}
	
	
	//MATRIZ TRANSPOSTA
	
	printf("Matriz Transposta\n");
	
	for(c=0;c<2;c++){
		for(l=0;l<3;l++){
			
			printf("%d ", mat[l][c]);
				
		}
		printf("\n");
	}
}
