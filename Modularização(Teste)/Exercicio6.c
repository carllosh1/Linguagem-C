/*Escreva um procedimento chamado POTENCIA que receba duas variáveis
inteiras X e Y e retorne X elevado a Y. */

#include<stdio.h>
#include <math.h>
void potencia(int x, int y){
	int resultado;
	
	resultado = pow(x,y);

	printf("\nO resultado eh: %d", resultado);
}

int  x,y;

int main(){
	printf("Calculo de potencia:");
	printf("\nEntre com positivo Inteiro X: ");
	scanf("%d", &x);
	
	printf("Entre com positivo Inteiro para elevar a X: ");
	scanf("%d", &y);
	
	potencia(x,y);
	
}
