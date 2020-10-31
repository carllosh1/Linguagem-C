//Escreva um algoritmo que leia um conjunto de 20 números inteiros e mostre qual
//foi o maior e o menor valor fornecido.

#include <stdio.h>

int valor, i, valor_maior=0, valor_menor=999;

int main(){
	for(i=1; i<=20; i++){
		printf("Entre com um valor: ");
		scanf("%i", &valor);
		
		if(valor_maior < valor){
			valor_maior = valor;
		}else
		if(valor_menor > valor ){
			valor_menor = valor;
		}
	}
	
	printf("\nO MAIOR VALOR: %i", valor_maior);
	printf("\nO MENOR VALOR: %i", valor_menor);
}
