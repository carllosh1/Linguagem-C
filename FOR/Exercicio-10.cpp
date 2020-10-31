//Faça um algoritmo para ler um valor X e calcular Y =
//X+2X+3X+4X+5X+...+20X.

#include <stdio.h>

int valor, valor1=0, soma_valor=0, x=0;
int main(){
	printf("Entre com um valor: ");
	scanf("%i", &valor);
	for(x=1; x<=20; x++){
	
	valor1 = valor * x;
	printf("\nValor %i: %i", x, valor1);
	soma_valor = soma_valor + valor1;
	}
		
	soma_valor = soma_valor + valor1;
	
	printf("\n\nO valor da soma: %i", soma_valor);
}
