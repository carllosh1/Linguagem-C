//Calculadora:
//Escreva um algoritmo para ler 02 valores inteiros e uma das seguintes
//operações a serem executadas:
//1. Adição
//2. Subtração
//3. Divisão
//4. Multiplicação
//Calcular e escrever o resultado dessa operação sobre os dois valores lidos.
//Observação: Considere que só serão lidos os valores 1, 2, 3 ou 4.

#include <stdio.h>

int n1,n2, R;
char valor;

int main(){
	printf("\n	---------------------------------");
	printf("\n	|Valor	-	Operacao	|");
	printf("\n	---------------------------------");
	printf("\n	|1	-	Adicao		|");
	printf("\n	|2	-	Subtracao	|");
	printf("\n	|3	-	Divisao		|");
	printf("\n	|4	-	Multiplicacao	|");
	printf("\n	---------------------------------");
	
	printf("\n\nEntre com o Primeiro numero: ");
	scanf("%i", &n1);
	printf("Entre com o Segundo numero: ");
	scanf("%i", &n2);
	
	do{
		printf("Escolha o VALOR para a operacao desejada: ");
		scanf("%s", &valor);
	}while((valor != '1')&&(valor != '2')&&(valor != '3')&&(valor != '4'));
	
	if(valor == '1'){
		R = n1+n2;
		printf("O Resultado eh: %i", R);
	}else if(valor =='2'){
		R = n1-n2;
		printf("O Resultado eh: %i", R);
	}else  if (valor == '3'){
		R = n1/n2;
		printf("O Resultado eh: %i", R);
	}else if(valor =='4'){
		R = n1*n2;
		printf("O Resultado eh: %i", R);
	}
}
