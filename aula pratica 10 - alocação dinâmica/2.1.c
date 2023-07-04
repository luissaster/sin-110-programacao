/* 2.1) Codifique, compile e execute um programa em C que na fun��o principal:
a) Aloque dinamicamente um vetor de 5 n�meros inteiros;
b) Pe�a ao usu�rio para digitar os 5 n�meros no espa�o alocado;
c) Imprima na tela os 5 n�meros digitados;
d) Libere a mem�ria alocada.
*/
#include<stdio.h>
#include<stdlib.h>
int main(void){
    int n, i;
    int* vet;
    printf("Insira o tamanho do vetor de numeros inteiros:\n");
    scanf("%d", &n);
    vet = (int*)malloc(n*sizeof(int));
    for(i=0; i<n; i++){
        printf("Valor da posicao %d:\n", i);
        scanf("%d", &vet[i]);
    }
    printf("O vetor digitado foi: ");
    for(i=0; i<n; i++){
        printf("%d ", vet[i]);
    }
    free(vet);
    return 0;
}
