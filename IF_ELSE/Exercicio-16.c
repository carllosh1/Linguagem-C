//Faça um algoritmo que leia os valores A, B, C e diga se a soma de A + B é
//menor que C.

#include <stdio.h>

float a, b, c;

int main(){
	printf("Entre com o primeiro valor: ");
	scanf("%f", &a);
	printf("Entre com o segundo valor: ");
	scanf("%f", &b);
	printf("Entre com o terceiro valor: ");
	scanf("%f", &c);
	
	
	if ( a+b < c){
		printf("A soma de a+b eh MENOR do que C");
	}else{
		printf("A soma de a+b eh MAIOR/IGUAL do que C");
	}
}
