#include <stdio.h>

float lado1, lado2, qt, a;

int main(){
	printf("Entre com o LADO 1: \n");
	scanf("%f", &lado1);
	
	printf("Entre com o LADO 2: \n");
	scanf("%f", &lado2);
	
	printf("\nArea a ser preenchida: ");
	a=(lado1*lado2);
	printf("%f", a);
	
	printf("\nQuantidade de tinta: ");
	qt = (a * 0.2);
	printf("%f", qt);
	
}

