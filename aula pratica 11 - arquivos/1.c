/* 1) Codifique, compile e execute um programa em C que aloque dinamicamente um vetor
de N posições definidas pelo usuário para armazenar o resumo de seu Trabalho de
Conclusão de Curso. O texto digitado deve ser armazenado no arquivo “resumo_TCC.txt”
pelo programa. */
#include<stdio.h>
#include<stdlib.h>
int main (void){
    char *tcc;
    FILE *p_arq;
    int n;
    printf("Quantos caracteres deseja salvar?\n");
    scanf("%d", &n);
    tcc=(char*)malloc(n*sizeof(char));
    p_arq = fopen("resumo_TCC.txt", "w");
    if(p_arq == NULL){
        printf("Erro ao criar o arquivo, tente novamente.\n");
        exit(1);
    }else{
        printf("Arquivo criado com sucesso.\n");
    }
    printf("Insira o que deseja salvar no arquivo:\n");
    fflush(stdin);
    gets(tcc);
    fprintf(p_arq, "%s", tcc);
    fclose(p_arq);
    printf("Arquivo salvo com sucesso.\n");
    return 0;
}
