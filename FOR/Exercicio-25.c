//Dado um limite inferior e superior, calcule a soma de todos os números pares
//contidos nesse intervalo.
#include <stdio.h>

int valor_inicial, valor_final, i, soma;

int main(){
	printf("Entre com o VALOR INICIAL DO INTERVALO: ");
	scanf("%i", &valor_inicial);
	printf("Entre com o VALOR FINAL DO INTERVALO: ");
	scanf("%i", &valor_final);
	
	for(i=valor_inicial; i<=valor_final; i++){
		if(i%2==0){
			soma= soma + i;
		}else{}
	}
	
	printf("Soma dos valores pares: %i", soma);
}
