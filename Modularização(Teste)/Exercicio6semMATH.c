/*Escreva um procedimento chamado POTENCIA que receba duas variáveis
inteiras X e Y e retorne X elevado a Y. */

#include<stdio.h>


float x,y, resultado=1;

float potencia(float x, float y){
	int i;
	
	for(i=0;i<y; i++){
		resultado*=x;
	}
	return(resultado);
}

void lerdados(){

	printf("Calculo de potencia:");
	printf("\nEntre com positivo Inteiro X: ");
	scanf("%f", &x);
	
	printf("Entre com positivo Inteiro para elevar a X: ");
	scanf("%f", &y);
	
}


int main(){
	
	lerdados();
	
	potencia(x,y);
	printf("\nO resultado eh: %0.2f", resultado);
}
