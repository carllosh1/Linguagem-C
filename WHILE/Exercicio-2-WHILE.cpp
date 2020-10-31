//Ler um número inteiro n. Escrever a soma de todos os números de 1 até n.

#include <stdio.h>

int i=0, numero, soma_n=0;;
int main(){
	printf("\nEntre com o valor de N: ");
	scanf("%i", &numero);
	
	while(i<numero){
		i++;
		soma_n = soma_n + i;
	}

	printf("\n\nO resultado da soma de 1 a N: %i", soma_n);
}
