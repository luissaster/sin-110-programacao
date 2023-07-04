/* Codifique, compile e execute um programa em que abra o arquivo “concessionaria.txt”,
criado na questão 8, usando o tipo de abertura ‘r’. Apresente ao usuário as informações
dos 10 carros cadastrados. */
#include<stdio.h>
#include<stdlib.h>
int main(void){
    FILE *p_arq;
    char marca[32], cor[20];
    int n_portas, i;
    float preco;
    p_arq = fopen("concessionaria.txt", "rb");
    if(p_arq == NULL){
        printf("Arquivo inexistente.\n");
        exit(1);
    }else{
        printf("Arquivo aberto.\n");
    }
    for(i=0; i<10; i++){
        fread(marca, sizeof(char), 32, p_arq);
        printf("%s\n", marca);
        fread(cor, sizeof(char), 20, p_arq);
        printf("%s\n", cor);
        fread(&n_portas, sizeof(int), 1, p_arq);
        printf("%d\n", n_portas);
        fread(&preco, sizeof(float), 1, p_arq);
        printf("%.2f\n", preco);
    }
    fclose(p_arq);
    return 0;
}
