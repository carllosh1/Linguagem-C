/*Construir um algoritmo que leia a base e a altura de um tri�ngulo
(utilizando procedimento), e calcule a �rea deste tri�ngulo (utilizando
fun��o). Mostrar o resultado na tela. */

#include<stdio.h>

float area(float altura, float base){
	float resultado;
	resultado = (altura * base)/2;
	
	return(resultado);
}

void procedimento(){
	float altura,   base, resultado;
	printf("Digite Altura do TRIANGULO:");
  	scanf("%f", &altura);
  	printf("Digite a BASE do TRIANGULO:");
	scanf("%f", &base);
	
	resultado = area(altura, base);
	printf("\nO valor da AREA: %.2f", resultado);
}

int main(){ 

	procedimento();
}

