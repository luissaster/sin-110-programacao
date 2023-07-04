/* Usando a passagem por referência, crie uma função que incremente duas unidades em uma
variável qualquer do tipo int.
Em seguida, crie uma função main onde o usuário digita um valor N e o programa deverá mostrar
todos os valores a partir do número 1 e incrementados segundo a função que você criou, menores
ou iguais a N. */

void incre(int *x){
    *x += 2;
}

int main(void){
    int num, i=1;
    printf("Digite um valor:\n");
    scanf("%d", &num);
    while(i<=num){
        printf("%d ", i);
        incre(&i);
    }
}
