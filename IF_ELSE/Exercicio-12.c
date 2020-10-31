//Escreva um algoritmo que receba três valores distintos. Exibir o maior
//deles.

#include <stdio.h>

float n1,n2,n3;


int main(){
	printf("Inserir o primeiro numero: ");
	scanf("%f", &n1);
	
	printf("Inserir o segundo numero: ");
	scanf("%f", &n2);
	
	printf("Inserir o terceiro numero: ");
	scanf("%f", &n3);
	
	if(n1>n2 and n1>n3){
		printf("\nO Maior entre eles is: \n%0.2f", n1);
	}else if(n2>n1 and n2>n3){
		printf("\nO Maior entre eles is: \n%0.2f", n2);
	}else{
		printf("\nO Maior entre eles is: \n%0.2f", n3);
		

		}
}
