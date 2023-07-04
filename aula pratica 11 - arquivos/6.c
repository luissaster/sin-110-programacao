/* 6) Codifique, compile e execute um programa em C que leia as informa��es de apenas um
carro (marca, cor, n�mero de portas, preco) e armezene-as no arquivo �informacoes.txt�
em formato bin�rio. Fun��o fwrite(). */
#include<stdio.h>
typedef struct sCarro{
    char marca[32], cor[20];
    int n_portas;
    float preco;
}carro;
int main(void){
    carro carro1;
    FILE *p_arq;
    p_arq = fopen("informacoes.txt", "wb");
    if(p_arq==NULL){
        printf("Impossivel criar o arquivo.\n");
        exit(1);
    }else{
        printf("Arquivo criado.\n");
    }
    printf("Qual a marca do carro?\n");
    gets(carro1.marca);
    printf("Qual a cor?\n");
    gets(carro1.cor);
    printf("Quantas portas ele tem?\n");
    scanf("%d", &carro1.n_portas);
    printf("Qual o seu preco?\n");
    scanf("%f", &carro1.preco);
    fwrite(carro1.marca, sizeof(char), 32, p_arq);
    fwrite(carro1.cor, sizeof(char), 20, p_arq);
    fwrite(&carro1.n_portas, sizeof(int), 1, p_arq);
    fwrite(&carro1.preco, sizeof(float), 1, p_arq);

    fclose(p_arq);
    return 0;
}
