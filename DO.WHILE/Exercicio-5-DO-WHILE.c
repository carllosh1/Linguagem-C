//Fa�a um algoritmo que leia um n�mero N, some todos os n�meros inteiros de 1 a
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
