/* Reescreva o programa da questão anterior com a função strcmp(). */

#include<stdio.h>
#include<string.h>

int main(){
    char pal1[20], pal2[20];
    printf("Insira a primeira palavra:\n");
    gets(pal1);
    printf("Insira a segunda palavra:\n");
    gets(pal2);
    printf("Voce esta comparando: %s / %s\n", pal1, pal2);
    //printf("**DEBUG CODIGO RETORNADO STRCMP: %d\n**", strcmp(pal1, pal2));
    if(strcmp(pal1, pal2) == 0){
        printf("As palavras sao iguais.\n");
    }else{
        printf("As palavras sao diferentes.\n");
    }
    return 0;
}
