#include<stdio.h>
void main(void){
	int mat[5][5], i, j, diag=0;
	for(i=0; i<5; i++){
		for(j=0; j<5; j++){
			printf("Insira o valor da matriz[%d][%d]:\n", i, j);
			scanf("%d", &mat[i][j]);
		}
	}
	printf("A matriz inserida foi:\n");
	for(i=0; i<5; i++){
		for(j=0; j<5; j++){
			printf("%d ", mat[i][j]);
		}
		printf("\n");
	}
	printf("Os numeros na diagonal sao:\n");
	for(i=0; i<5; i++){
		printf("%d ", mat[diag][diag]);
		diag++;
	}
}
