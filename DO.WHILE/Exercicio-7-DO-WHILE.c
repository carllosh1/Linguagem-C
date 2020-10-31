//Dado um limite inferior e superior, calcule a soma de todos os números pares
//contidos nesse intervalo.
#include <stdio.h>

int valor_inicial, valor_final,  soma;

int main(){
	printf("Entre com o VALOR INICIAL DO INTERVALO: ");
	scanf("%i", &valor_inicial);
	printf("Entre com o VALOR FINAL DO INTERVALO: ");
	scanf("%i", &valor_final);
	
	if(valor_inicial >= valor_final){
		do{
			printf("\nENTRE COM UM VALOR MAIOR QUE O INICIAL!");
			scanf("%i", &valor_final);
		}while(valor_inicial >= valor_final);
	}
	
	do{
		valor_inicial++;
		if(valor_inicial%2==0){
			soma= soma + valor_inicial;
		}else{}
	}while(valor_inicial != valor_final);
	
	printf("\nSoma dos valores pares: %i", soma);
}
