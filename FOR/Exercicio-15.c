//Ler um número inteiro n. Escrever a soma de todos os números de 1 até n.

#include <stdio.h>

int i, n, soma_n;
int main(){
	printf("Entre com o valor de N: ");
	scanf("%i", &n);
	
	for(i=1; i<=n;i++){
		
		soma_n = soma_n + i;
	}
	
	printf("O resultado da soma de 1 a N: %i", soma_n);
}
