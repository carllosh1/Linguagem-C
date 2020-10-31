//Faça um algoritmo que leia dois números, o primeiro é o valor inicial de um
//contador, e o segundo é o valor final do contador (verifique se o valor inicial
//fornecido é inferior ao valor final). Usando a estrutura de repetição “repita”
//, escreva na tela uma contagem que comece no primeiro número lido,
//escreva os números seguintes colocando apenas um número em cada nova
//linha da tela, até chegar ao valor final indicado.
#include <stdio.h>

int valor_inicial, valor_final, i;

int main(){
	printf("Entre com o Valor inicial: ");
	scanf("%i", &valor_inicial);
	
	printf("Entre com o valor Final: ");
	scanf("%i", &valor_final);
	
	for(i=valor_inicial; i<=valor_final; i++){
		printf("\nContagem: %i", i);
	}
}
	

