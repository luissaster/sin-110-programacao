/* 3) Codifique, compile e execute um programa em C que armazene os diálogos entre dois
atores para uma peça de teatro. Considerando que cada diálogo não passa de 20
caracteres, salve os N diálogos um em cada linha de um arquivo texto denominado
“dialogo.txt”. */
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(void){
    char diag1[20], diag2[20];
    FILE *p_arq;
    int i;
    p_arq = fopen("dialogo.txt", "w");
    if(p_arq == NULL){
        printf("Erro ao criar o arquivo.\n");
        exit(1);
    }else{
        printf("Arquivo criado com sucesso.\n");
    }
    printf("Digite o primeiro dialogo:\n");
    gets(diag1);
    for(i=0; i<strlen(diag1); i++){
        fputc(diag1[i], p_arq);
    }
    fprintf(p_arq, "\n");
    printf("Digite o segundo dialogo:\n");
    gets(diag2);
    for(i=0; i<strlen(diag2); i++){
        fputc(diag2[i], p_arq);
    }
    fprintf(p_arq, "\n");
    fclose(p_arq);
    return 0;
}
