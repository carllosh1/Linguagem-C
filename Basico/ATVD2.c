#include <stdio.h>

float raio, area, volume, pi;

int main(){
	printf("Valor do RAIO: \n");
	scanf("%f", &raio);
	
	printf("Valor do PI: \n");
	scanf("%f", &pi);
	
	printf("\nValor da AREA: ");
	area = (4*pi*raio*raio);
	printf("%f", area);
	
	printf("\nValor do VOLUME: ");
	volume = (4 * pi * raio*raio*raio / 3);
	printf("%f", volume);
	
	
}
