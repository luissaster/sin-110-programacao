/* Codifique, compile e execute um programa em C que abra o arquivo �dialogo.txt�,
criado na quest�o 3, usando o tipo de abertura �a� (Append - Concatena��o). Na sequ�ncia
armazene �FIM!� como �ltima frase do arquivo �dialogo.txt�. */
#include<stdio.h>
int main(void){
    FILE *p_arq;
    p_arq = fopen("dialogo.txt", "a");
    if(p_arq == NULL){
        printf("Arquivo inexistente.\n");
        exit(1);
    }
    fprintf(p_arq, "FIM!");
    fclose(p_arq);
    return 0;
}
