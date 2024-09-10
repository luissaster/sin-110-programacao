#include<stdio.h>
void main(void){
	int mat[5][5], i, j, num, igual=0;
	for(i=0; i<5; i++){
		for(j=0; j<5; j++){
			printf("Insira o valor na matriz[%d][%d]:\n", i, j);
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
	printf("Insira um numero:\n");
	scanf("%d", &num);
	for(i=0; i<5; i++){
		for(j=0; j<5; j++){
			if(mat[i][j] == num){
				printf("O numero %d esta na posicao: %d, %d.\n", num, i, j);
				igual++;
			}
		}
	}
	if(igual<1){
		printf("Esse numero nao foi encontrado.");
	}
}
