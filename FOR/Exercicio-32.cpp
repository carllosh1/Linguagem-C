//Fa�a um algoritmo que leia um n�mero N, some todos os n�meros inteiros de 1 a
//N, e mostre o resultado obtido.

#include <stdio.h>

int valor, soma, i;

int main(){
	printf("Entre com um valor para o intervalo de  1 a ");
	scanf("%i", &valor);
	
	for(i=1; i<=valor; i++){
		soma = soma + i;
	}
	
	printf("O valor da soma: %i", soma);
}
