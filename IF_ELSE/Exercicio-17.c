//Faça um algoritmo que leia dois valores inteiros A e B se os valores forem
//iguais deverá se somar os dois, caso contrário multiplique A por B ao final
//do cálculo atribuir o valor para uma variável C.

#include <stdio.h>

int a,b,c;


int main(){
	printf("Insira o Primeiro numero: ");
	scanf("%i", &a);
	printf("Insira o Segundo numero: ");
	scanf("%i", &b);

	
	if(a==b){
		c=a+b;
		printf("O resultado eh: %i", c);
	}else{
		c = a*b;
		printf("O resultado eh: %i", c);
	}
	

}
