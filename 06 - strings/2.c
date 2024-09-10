/* Codifique, compile e execute um programa em C que receba duas palavras digitadas pelo
usuário e verifique se elas são iguais ou não. (Não utilize funções prontas da biblioteca string.h) */

#include<stdio.h>
int main(){
    char pal1[20], pal2[20];
    int i, aux=0;
    for(i=0; i<20; i++){
        pal1[i] = ' ';
        pal2[i] = ' ';
    }
    printf("Insira a primeira palavra:\n");
    gets(pal1);
    printf("Insira a segunda palavra:\n");
    gets(pal2);
    printf("Voce esta comparando: %s / %s\n", pal1, pal2);
    for(i=0; i<20; i++){
        if(pal1[i] == pal2[i]){
            aux++;
        }else{
            aux = 0;
            break;
        }
    }
    if(aux>0){
        printf("As palavras sao iguais.\n");
    }else{
        printf("As palavras sao diferentes.\n");
    }
    return 0;
}
