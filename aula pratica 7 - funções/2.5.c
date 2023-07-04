/* 2.5) Tudo em um mesmo c�digo:
(i) Crie uma struct para representar um novo tipo Pessoa, que conter� Nome, Altura e Peso.
(ii) Crie 2 vari�veis do tipo Pessoa na fun��o MAIN e entre com os dados de cada uma das duas
pessoas.
(iii) Crie uma fun��o sem retorno (void) que calcula e imprime o IMC de uma Pessoa, que recebe
como par�metro apenas uma vari�vel do tipo Pessoa.
IMC = Peso/(Altura*Altura)
Use essa f�rmula dentro da fun��o e imprima: �A pessoa <nome> possui IMC igual a <X>.�
(iv) A fun��o dever� ser chamada dentro da fun��o main para cada uma das duas pessoas
digitadas.
(v) Altere as duas vari�veis para um vetor de Pessoas com tamanho 100, e chame a fun��o IMC
para cada pessoa do vetor. */

#include<stdio.h>

typedef struct sPessoa{
    char nome[21];
    float altura, peso;
}pessoa;

void imc(pessoa x){
    float valor;
    valor = x.peso/(x.altura*x.altura);
    printf("A pessoa %s possui IMC igual a %.2f.\n", x.nome, valor);
}

int main(){
    /*pessoa n1, n2;
    gets(n1.nome);
    scanf("%f", &n1.altura);
    scanf("%f", &n1.peso);
    printf("%s\n%.2f\n%.2f\n", n1.nome, n1.altura, n1.peso);
    fflush(stdin);
    gets(n2.nome);
    scanf("%f", &n2.altura);
    scanf("%f", &n2.peso);
    printf("%s\n%.2f\n%.2f\n", n2.nome, n2.altura, n2.peso);
    imc(n1);
    imc(n2);

    return 0; */

    pessoa entidade[100];
    int i;
    for(i=0; i<100; i++){
        printf("Insira o nome da %da pessoa:\n", i+1);
        gets(entidade[i].nome);
        printf("Qual a altura, em metros, de %s?\n", entidade[i].nome);
        scanf("%f", &entidade[i].altura);
        printf("Qual o peso, em quilos, de %s?\n", entidade[i].nome);
        scanf("%f", &entidade[i].peso);
        fflush(stdin);
        imc(entidade[i]);
        printf("------------------------------------------\n\n");
    }
    return 0;
}
