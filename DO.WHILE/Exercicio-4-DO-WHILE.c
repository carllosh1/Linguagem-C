//Faça um algoritmo que imprima todos os números inteiros de 1 a N (fornecido
//pelo usuário). Mostre quantos são divisíveis por 8 e tem resto 3

#include <stdio.h>

int valor, divisivel=0,i=0;


int main(){
	printf("Entre com um valor 1 a ");
	scanf("%i", &valor);
	
	do{
		i++;
		printf("\n%i", i);
		
		if(i==3){
		}else
		if(i%8==3){
			divisivel++;
		}else{}
	}while(i != valor);
	
	printf("\nO total de numeros divisiveis por 8 e tem resto 3: %i", divisivel);
}
