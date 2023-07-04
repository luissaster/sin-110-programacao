#include<stdio.h>
void mostra(int n){
    if(n==10){
        printf("%d\n", n);
    }else{
        printf("%d ", n);
        mostra(n+1);
    }
}
int main(void){
    mostra(1);
    return 0;
}
