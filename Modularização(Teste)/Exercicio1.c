/* Escreva um procedimento que, após a leitura dos dados, realizada por um
procedimento com o objetivo de ler os valores para uma string S e valor
para um número inteiro positivo N, exiba a string S por N vezes seguidas na
tela. Crie também o algoritmo principal. */

#include <stdio.h>

void procedimento(){
	char stringS[100];
	int i,valorN;
	
	printf("Entre com uma frase: ");
	scanf("%[^\n]", &stringS);
	
	printf("Quantos vezes voce deseja repetir a palavra: ");
	scanf("%d", &valorN);
	
	for(i=0;i<valorN; i++){
		printf("frase: %s\n", stringS);
	}
}

int main(){

	procedimento();
}
