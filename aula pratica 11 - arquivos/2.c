/* Codifique, compile e execute um programa em C que leia e apresente ao usuário todo o
conteúdo de um arquivo armazenado no arquivo “resumo_TCC.txt”. A leitura deve ser
realizada caracter por caracter. */
#include<stdio.h>
#include<stdlib.h>
int main(void){
    FILE *p_arq;
    char c;
    p_arq = fopen("resumo_TCC.txt", "r");
    if(p_arq == NULL){
        printf("Erro ao abrir o arquivo. Ele existe?\n");
        exit(1);
    }else{
        printf("Arquivo aberto com sucesso, aqui esta seu conteudo:\n\n");
    }
    do{
        c = fgetc(p_arq);
        printf("%c", c);
    }while(c!=EOF);
    fclose(p_arq);
    return 0;
}
