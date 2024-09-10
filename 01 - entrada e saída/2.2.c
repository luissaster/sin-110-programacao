/* Codifique, compile e execute um programa em C que receba três notas e calcule a média aritmética
entre as notas. */

#include <stdio.h>

int main(){
	float n1, n2, n3, media;
	printf("Insira as tres notas para obter a media aritmetica:\n");
	scanf("%f%f%f", &n1, &n2, &n3);
	media = (n1 + n2 + n3) / 3;
	printf("A media aritmetica eh: %.2f.\n", media);
	
	return 0;
}
