#include<stdio.h>
void main(void){
	int mat[3][3], maior, menor, i, j;
	for(i=0; i<3; i++){
		for(j=0; j<3; j++){
			printf("Insira o valor da matriz[%d][%d].\n", i , j);
			scanf("%d", &mat[i][j]);
		}
	}
	printf("A matriz inserida foi:\n");
	for(i=0; i<3; i++){
		for(j=0; j<3; j++){
			printf("%d ", mat[i][j]);
		}
		printf("\n");
	}
	for(i=0; i<3; i++){
		for(j=0; j<3; j++){
			if(i==0 && j==0){
				maior = mat[i][j];
				menor = mat[i][j];
			}
			if(mat[i][j] > maior){
				maior = mat[i][j];
			}
			if(mat[i][j] < menor){
				menor = mat[i][j];
			}
			
		}
	}
	printf("O maior numero da matriz eh: %d.\n", maior);
	printf("O menor numero da matriz eh: %d.\n", menor);
}
