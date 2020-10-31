//Imprima uma tabela de conversão de polegadas para centímetros, de 1 a 20.
//Considere que Polegada = Centímetro * 2,54.
#include <stdio.h>
int valor, i=0;
float polegada=2.54;

int main(){
	printf("Conversao de polegadas para centimetro do 1 a ");
	scanf("%i", &valor);
	
	do{
		i++;
		printf("\nA conversao de %i centimetro: %0.2f", i, polegada*i);
	}while(i != valor);
}
