/* Usando a passagem por refer�ncia, crie uma fun��o que incremente duas unidades em uma
vari�vel qualquer do tipo int.
Em seguida, crie uma fun��o main onde o usu�rio digita um valor N e o programa dever� mostrar
todos os valores a partir do n�mero 1 e incrementados segundo a fun��o que voc� criou, menores
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
