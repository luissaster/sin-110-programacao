/* Codifique, compile e execute um programa em C que receba do usuário uma string qualquer. Em
seguida, o programa deve imprimir a quantidade de vogais e a quantidade de consoantes
presentes na string lida. */
#include<stdio.h>
#include<string.h>
int main(){
    char string[50];
    int i, qntdVog = 0, qntdCon = 0;
    for(i=0; i<50; i++){
        string[i] = ' ';
    }
    printf("Insira uma palavra:\n");
    gets(string);
    for(i=0; i<50; i++){
        if(string[i] == 'a' || string[i] == 'A' || string[i] == 'e' || string[i] == 'E' || string[i] == 'i' || string[i] == 'I' || string[i] == 'o' || string[i] == 'O' || string[i] == 'u' || string[i] == 'U'){
            qntdVog++;
        }else if(string[i] != ' ' && string[i] != '\0'){
            qntdCon++;
        }
    }
    printf("Essa palavra tem:\nVogais: %d\nConsoantes: %d\n", qntdVog, qntdCon);
    return 0;
}
