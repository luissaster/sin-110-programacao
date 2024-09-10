/* 7) Codifique, compile e execute um programa em C que abra o arquivo “informações.txt”
e apresente os dados na tela para o usuário usando o comando fread(). */
#include<stdio.h>
int main(void){
    FILE *p_arq;
    char marca[32], cor[20];
    int n_portas;
    float preco;
    p_arq = fopen("informacoes.txt", "rb");
    if(p_arq == NULL){
        printf("Arquivo inexistente ou em uso.\n");
        exit(1);
    }else{
        printf("Arquivo aberto.\n");
    }
    fread(marca, sizeof(char), 32, p_arq);
    printf("%s\n", marca);
    fread(cor, sizeof(char), 20, p_arq);
    printf("%s\n", cor);
    fread(&n_portas, sizeof(int), 1, p_arq);
    printf("%d\n", n_portas);
    fread(&preco, sizeof(float), 1, p_arq);
    printf("%.2f\n", preco);
    fclose(p_arq);
    return 0;
}
