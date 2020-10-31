/* Escreva um procedimento chamado TROCA que receba 2 variáveis inteiras
(X e Y) e troque o conteúdo entre elas; */

#include <stdio.h>
// Essa eu tinha feito sem ponteiro e deu errado, aí eu pesquisei e aparentemente esse modo so funciona com ponteiro..
void troca(int *x, int *y){
	int aux;
	
	aux=*x;
	*x=*y;
	*y=aux;
		
}
int x,y;

int main(){
	printf("Entre com positivo Inteiro X: ");
	scanf("%d", &x);
	printf("Entre com positivo Inteiro Y: ");
	scanf("%d", &y);
	
	troca(&x,&y);
	
	printf("O valor de X agora vale: %d | o valor de Y agora vale: %d", x,y);
}
