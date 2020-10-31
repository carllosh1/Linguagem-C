//Ler um número inteiro n. Escrever a soma de todos os números pares de 2
//até n

#include <stdio.h>

int i, n, soma_n=0;
int main(){
	printf("Entre com o valor de N: ");
	scanf("%i", &n);
	
	while(n>=2){
		if(n%2==0){
		soma_n = soma_n + n;
		printf("Valores pares entre 2 e N: %i\n", n);
		}else{}
		
		n--;
		
	}
	
	
	printf("O resultado da soma dos numeros pares de 2 a N: %i", soma_n);
}

