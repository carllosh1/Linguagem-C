/* Escreva um procedimento chamado AUMENTO que receba dois valores
reais X e Y como parâmetros e aumente o valor de X em Y%. */

#include<stdio.h>


void aumento(float x, float y){
	float resultado;
		
	resultado = x + ((y/100)*x);
	
	printf("o valor de X aumentou em + %Y: %0.2f", resultado);
}



int main(){
	float x,y, resultado;
	
	printf("Entre com X: ");
	scanf("%f", &x);
	
	printf("Em quanto voce deseja aumentar X?: ");
	scanf("%f", &y);
		
	aumento(x,y);
}
