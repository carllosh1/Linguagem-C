//Fa�a um algoritmo que leia dois n�meros, o primeiro � o valor inicial de um
//contador, e o segundo � o valor final do contador (verifique se o valor inicial
//fornecido � inferior ao valor final). Usando a estrutura de repeti��o �repita�
//, escreva na tela uma contagem que comece no primeiro n�mero lido,
//escreva os n�meros seguintes colocando apenas um n�mero em cada nova
//linha da tela, at� chegar ao valor final indicado.
#include <stdio.h>

int valor_inicial, valor_final, i;

int main(){
	printf("Entre com o Valor inicial: ");
	scanf("%i", &valor_inicial);
	printf("Entre com o valor Final: ");
	scanf("%i", &valor_final);
	if(valor_inicial >= valor_final){
	
		do{
			printf("VALOR FINAL TEM QUE SAIR MAIOR QUE O INICIAL: ");
			scanf("%i", &valor_final);

		}while(valor_inicial >= valor_final);
	}
	
	do{
		valor_inicial++;
		printf("\nContagem: %i", valor_inicial);
	}while(valor_inicial !=valor_final);
}
	

