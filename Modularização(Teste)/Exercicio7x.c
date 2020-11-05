/* Escreva um procedimento chamado TROCA que receba 2 variáveis inteiras
(X e Y) e troque o conteúdo entre elas; */

#include <stdio.h>


int x,y;

void troca(){
	int aux;
	printf("Entre com positivo Inteiro X: ");
	scanf("%d", &x);
	printf("Entre com positivo Inteiro Y: ");
	scanf("%d", &y);
	
	aux=x;
	x=y;
	y=aux;
		
}


int main(){
	
	troca();
	
	printf("O valor de X agora vale: %d | o valor de Y agora vale: %d", x,y);
}
