//Faça um algoritmo que leia um número N, some todos os números inteiros de 1 a
//N, e mostre o resultado obtido.

#include <stdio.h>

int valor, soma, i=0;

int main(){
	printf("Entre com um valor para o intervalo de  1 a ");
	scanf("%i", &valor);
	
	do{
		i++;
		soma = soma + i;
		
		
	}while(i != valor);
	
	printf("O valor da soma: %i", soma);
}
