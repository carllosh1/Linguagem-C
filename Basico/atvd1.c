#include <stdio.h>


float lado1, lado2, area, perimetro;

int main(){
	printf("Entre com o LADO 1: \n");
	scanf("%f", &lado1);
	
	printf("Entre com o LADO 2: \n");
	scanf("%f", &lado2);
	
	printf("Resultado Area: ");
	area = (lado1*lado2);
	
	printf("%f", area);
	
	printf("\nResultado do perimetro: ");
	perimetro = (2*lado1 + 2*lado2);
	
	printf("%f", perimetro);
	
	
	
}
