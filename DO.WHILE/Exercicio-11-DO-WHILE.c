//A conversão de graus Fahrenheit para centígrados e obtida pela fórmula C = 5/9 (F
//- 32). Escreva um algoritmo que calcule e escreva uma tabela de graus centígrados
//em função de graus Fahrenheit que variem de 50 a 150 de 1 em 1.
#include <stdio.h>

int fahrenheit_inicial=49, fahrenheit_final=150;
float c;


int main(){
	printf("Fahrenheit para Celsius");
  	do{
  		fahrenheit_inicial++;
		c = (float)5*(fahrenheit_inicial-32)/9;
		printf("\nA temperatura de %i%cF = %0.1f%c", fahrenheit_inicial,248, c,248);
		
	}while(fahrenheit_inicial != fahrenheit_final);
	
}
