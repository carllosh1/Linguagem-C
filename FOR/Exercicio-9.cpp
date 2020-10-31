//Faça um algoritmo para somar os números pares positivos < 1000 e ao final
//imprimir o resultado.

#include <stdio.h>


int i, soma_i;

int main(){
	for(i=1;i<=1000; i++){
		
		if(i%2==0){
		
		soma_i= soma_i + i;
	}
	}
	printf("\nO resultado eh: %i", soma_i );
}
