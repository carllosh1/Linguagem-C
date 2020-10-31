//Faça um algoritmo para ler N números inteiros e ao final escrever sua
//média. O valor de N será informado pelo usuário.

#include <stdio.h>

int n1, media, x, soma=0;



float media_x;

int main(){
	printf("Informe o numero de algoritmos: ");
	scanf("%i", &n1);
	for(x=1; x<=n1; x++){
		soma = soma + x;
	}
		media_x = soma/n1;
	
	printf("\nA media das soma dos algoritmos eh: %0.2f", media_x);
}
