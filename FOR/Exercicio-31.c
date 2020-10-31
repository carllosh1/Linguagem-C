//Faça um algoritmo que seja capaz de obter o quociente inteiro da divisão de dois
//números fornecidos utilizando somente a operação de subtração.

#include <stdio.h>

int valor1, valor2, i, quociente;

int main(){
	printf("Entre com o dividendo: ");
	scanf("%i", &valor1);
	printf("Entre com o divisor: ");
	scanf("%i", &valor2);
	
	for(i=valor1; i>=valor2; i = i-valor2){
			quociente++;
	}
	
	printf("O valor do quociente eh: %i", quociente);
}
