#include<stdio.h>

int square(int x, int z){
    int i, res;
    res = 1;
    for(i=0; i<z; i++){
       res =  res*x;
    }
    return res;
}
int main(){
    int n1,n2;
    printf("Insira o primeiro numero:\n");
    scanf("%d", &n1);
    printf("Insira o segundo numero:\n");
    scanf("%d", &n2);
    printf("O numero %d elevado por %d resulta em: %d", n1,n2, square(n1,n2));

    return 0;
}


