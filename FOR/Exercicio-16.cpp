//Ler um número inteiro n. Escrever a soma de todos os números pares de 2
//até n

#include <stdio.h>

int i, n, soma_n;
int main(){
	printf("Entre com o valor de N: ");
	scanf("%i", &n);
	
	for(i=2; i<=n;i++){
		
		if(i%2==0){
		
		soma_n = soma_n + i;
	}
	}
	
	printf("O resultado da soma dos numeros pares de 2 a N: %i", soma_n);
}

