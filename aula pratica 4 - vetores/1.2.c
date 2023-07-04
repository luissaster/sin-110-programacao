#include<stdio.h>

int main(){
	int i, vet[10], cont2=0, cont3=0, cont5=0;
	for(i=0; i<10; i++){
		do{
			printf("Digite o %d valor entre [0,9]:\n", i);
			scanf("%d", &vet[i]);
		}while(vet[i] < 0 || vet[i] > 9);
	}
	printf("Os numeros digitados foram: ");
	for(i=0; i<10; i++){
		printf("%d ", vet[i]);
		switch(vet[i]){
			case 2:
				cont2++;
				break;
			case 3:
				cont3++;
				break;
			case 5:
				cont5++;
				break;
			default:
				break;
		}
	}
	
	printf("\nQuantidade de numeros 2: %d.\n", cont2);
	printf("Quantidade de numeros 3: %d.\n", cont3);
	printf("Quantidade de numeros 5: %d.\n", cont5);

	return 0;
}
