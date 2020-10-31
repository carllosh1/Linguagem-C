//A conversão de graus Fahrenheit para centígrados e obtida pela fórmula C = 5/9 (F
//- 32). Escreva um algoritmo que calcule e escreva uma tabela de graus centígrados
//em função de graus Fahrenheit que variem de 50 a 150 de 1 em 1.
#include <stdio.h>

int i;
float c;


int main(){
	for(i=50; i<=150; i++){
		c = (float)5*(i-32)/9;
		printf("\nA temperatura de %i%cF = %0.1f%c", i,248, c,248);
	}
	
}
