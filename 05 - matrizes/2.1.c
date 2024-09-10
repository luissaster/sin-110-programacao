#include<stdio.h>
void main(void){
	int mat[4][4], i, j;
	for(i=0; i<4; i++){
		for(j=0; j<4; j++){
			printf("Valor da matriz[%d][%d]:\n", i, j);
			scanf("%d", &mat[i][j]);
		}
	}
	printf("A matriz inserida foi:\n");
	for(i=0; i<4; i++){
		for(j=0; j<4; j++){
			printf("%d ", mat[i][j]);
		}
		printf("\n");
	}
	printf("Os numeros pares estao nas cordenadas:\n");
	for(i=0; i<4; i++){
		for(j=0; j<4; j++){
			if(mat[i][j]%2==0){
				printf("%d %d\n", i, j);
			}
		}
	}
}
