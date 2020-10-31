//Escreva um algoritmo que calcule e exiba a área de um retângulo, a partir
//dos valores da base e altura que serão digitados. Se a área for maior que
//100, exibir a mensagem “Terreno grande”, caso contrário, exibir a
//mensagem “Terreno pequeno”.

#include <stdio.h>

float b, a, s;

int main(){
	printf("Informe o Valor da Altura: ");
	scanf("%f", &a);
	
	printf("Informe o valor da Base: ");
	scanf("%f", &b);
	
	s= a*b;
	
	if(s>100){
		printf("Terreno: GRANDE");
	}else{
		printf("Terreno: PEQUENO");
	}
	
	
	
}
