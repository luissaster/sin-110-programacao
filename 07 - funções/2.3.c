/*2.3) Fa�a uma fun��o que receba como par�metro apenas um n�mero inteiro positivo n e retorne
o somat�rio de 1 a n.*/

int soma(int n){
    if(n==0){
        return 0;
    }else{
        return n+soma(n-1);
    }
}

int main(){
    int n;
    printf("Insira um valor para n:\n");
    scanf("%d", &n);
    printf("O somatorio de 1 a n eh: %d\n", soma(n));
    return 0;
}
