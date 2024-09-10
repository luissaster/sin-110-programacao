#include<stdio.h>

int triangle(int l1, int l2, int l3){
    if(l1 >= (l2+l3)){
        return 0;
    }
    if(l2 >= (l1+l3)){
        return 0;
    }
    if(l3 >= (l1+l2)){
        return 0;
    }

    return 1;
}

void triangle_type(int a, int b, int c){
    if(a==b && a==c && b==c){
        printf("Esse triangulo sera: equilatero");
    }else if((a==b && a!=c) || (a==c && a!=b) || (b==c && b!=a)){
        printf("Esse triangulo sera: isosceles");
    }else{
        printf("Esse triangulo sera: escaleno");
    }
}

int main(){
    int a, b, c;
    printf("Insira o valor do primeiro lado do triangulo:\n");
    scanf("%d", &a);
    printf("Insira o valor do segundo lado do triangulo:\n");
    scanf("%d", &b);
    printf("Insira o valor do terceiro lado do triangulo:\n");
    scanf("%d", &c);
    if(triangle(a,b,c) == 1){
        triangle_type(a,b,c);
    }else{
        printf("Nao forma um triangulo.\n");
    }
    return 0;
}
