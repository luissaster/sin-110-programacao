/*Codifique, compile e execute um programa em C que receba do usuário uma string qualquer. Em
seguida, o programa deve imprimir a string sem suas vogais.*/
#include<stdio.h>
#include<string.h>
int main(){
    char string[20];
    int i;
    printf("Insira uma palavra:\n");
    gets(string);
    for(i=0; i<20; i++){
        if(string[i] == 'a' || string[i] == 'A' || string[i] == 'e' || string[i] == 'E' || string[i] == 'i' || string[i] == 'I' || string[i] == 'o' || string[i] == 'O' || string[i] == 'u' || string[i] == 'U'){
            string[i] = ' ';
        }
    }
    puts(string);
    return 0;
}
