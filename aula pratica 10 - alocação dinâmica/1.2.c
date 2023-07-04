/* 1.2) Fa�a um programa que receba do usu�rio o tamanho de uma string e chame uma
fun��o para alocar dinamicamente essa string. Em seguida, o usu�rio dever� informar o
conte�do dessa string. O programa imprime a string sem suas vogais. */
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(void){
    char* str;
    int n, i;
    printf("Digite o tamanho da string:\n");
    scanf("%d", &n);
    fflush(stdin);
    str = (char*)malloc(n*sizeof(char));
    printf("Digite a string:\n");
    gets(str);
    printf("A string digitada foi: %s.\n", str);
    printf("A string sem suas vogais fica: ");
    for(i=0; i<strlen(str); i++){
        switch(str[i]){
        case 'a':
        case 'A':
        case 'e':
        case 'E':
        case 'i':
        case 'I':
        case 'o':
        case 'O':
        case 'u':
        case 'U': break;
        default:
            printf("%c", str[i]);
            break;
        }
    }

    free(str);
    return 0;
}
