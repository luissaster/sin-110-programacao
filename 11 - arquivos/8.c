/* 8) Codifique, compile e execute um programa em C que altere o programa do exercício 6
para que sejam armazenadas as informações de 10 carros para uma concessionária de
automóveis. Os dados devem ser armazenados no arquivo “concessionaria.txt” em
formato binário. */
#include<stdio.h>
#include<stdlib.h>
typedef struct sCarro{
    char marca[32], cor[20];
    int n_portas;
    float preco;
}carro;
int main(void){
    carro carros[10];
    FILE *p_arq;
    int i;
    p_arq = fopen("concessionaria.txt", "wb");
    if(p_arq == NULL){
        printf("Erro ao criar o arquivo.\n");
        exit(1);
    }else{
        printf("Arquivo criado.\n");
    }
    for(i=0; i<10; i++){
        printf("Qual a marca do carro %d?\n", i);
        gets(carros[i].marca);
        printf("Qual a cor do carro %d?\n", i);
        gets(carros[i].cor);
        printf("Qual o numero de portas do carro %d?\n", i);
        scanf("%d", &carros[i].n_portas);
        printf("Qual o preco do carro %d?\n", i);
        scanf("%f", &carros[i].preco);
        fflush(stdin);
        fwrite(carros[i].marca, sizeof(char), 32, p_arq);
        fwrite(carros[i].cor, sizeof(char), 20, p_arq);
        fwrite(&carros[i].n_portas, sizeof(int), 1, p_arq);
        fwrite(&carros[i].preco, sizeof(float), 1, p_arq);
    }
    fclose(p_arq);
    return 0;
}
