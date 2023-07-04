/* Escreva um programa que aloque dinamicamente uma matriz (de inteiros) de dimensões definidas pelo
usuário. Em seguida, preencha as posições da matriz e imprima todos os elementos. No fim, crie uma
função que receba a matriz e mostre o maior e o menor elementos encontrados na matriz. */
#include<stdio.h>
#include<stdlib.h>
int maior_elemento(int** mat, int linhas, int col){
    int maior = mat[0][0], i, j;
    for(i=0; i<linhas; i++){
        for(j=0; j<col; j++){
            if(mat[i][j] > maior){
                maior = mat[i][j];
            }
        }
    }
    return maior;
}
int menor_elemento(int** mat, int linhas, int col){
    int menor = mat[0][0], i, j;
    for(i=0; i<linhas; i++){
        for(j=0; j<col; j++){
            if(mat[i][j] < menor){
                menor = mat[i][j];
            }
        }
    }
    return menor;
}
int main(void){
    int** mat;
    int linhas, col, i, j;
    printf("Insira, separado por um espaco, o tamanho da matriz(linhas, colunas):\n");
    scanf("%d%d", &linhas, &col);
    mat = (int**)malloc(linhas*sizeof(int*));
    //alocar matriz
    for(i=0; i<linhas; i++){
        mat[i] = (int**)malloc(col*sizeof(int*));
    }
    //preencher matriz
    for(i=0; i<linhas; i++){
        for(j=0; j<col; j++){
            printf("Insira o valor na posicao %dx%d:\n", i, j);
            scanf("%d", &mat[i][j]);
        }
    }
    //imprimir matriz
    printf("A matriz inserida foi:\n");
    for(i=0; i<linhas; i++){
        for(j=0; j<col; j++){
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
    //retornar maior elemento
    printf("O maior elemento da matriz eh: %d.\n", maior_elemento(mat, linhas, col));
    printf("O menor elemento da matriz eh: %d.\n", menor_elemento(mat, linhas, col));
    for(i=0; i<linhas; i++){
        free(mat[i]);
    }
    free(mat);
    return 0;
}
