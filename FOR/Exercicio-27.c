//Imprima uma tabela de convers�o de polegadas para cent�metros, de 1 a 20.
//Considere que Polegada = Cent�metro * 2,54.
#include <stdio.h>
int valor, i;
float polegada=2.54;

int main(){
	printf("Conversao de polegadas para centimetro do 1 a ");
	scanf("%i", &valor);
	
	for(i=1; i<=valor; i++){
		printf("\nA conversao de %i centimetro: %0.2f", i, polegada*i);
	}
}
