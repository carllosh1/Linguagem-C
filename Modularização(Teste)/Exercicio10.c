/* Escreva um procedimento chamado AUMENTO que receba dois valores
reais X e Y como parâmetros e aumente o valor de X em Y%. */

#include<stdio.h>

void aumento(){
	float x,y;
	
	printf("Entre com X: ");
	scanf("%f", &x);
	
	printf("Em quanto voce deseja aumentar X?: 0.1x");
	scanf("%f", &y);
	
 	 x+= y* 0.1;
	
	printf("o valor de X aumentou em + %Y: %0.2f", x);
	
}

int main(){
	
	aumento();
}
