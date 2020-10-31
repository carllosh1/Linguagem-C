// Fazer um algoritmo que calcule e exiba na tela o fatorial de um número
//fornecido pelo usuário, usando o comando While. Repetir a execução do
//algoritmo tantas vezes quantas o usuário quiser. Lembre-se que o resultado
//do cálculo de um fatorial pode ser um número “grande” (Exemplo: Fatorial
//de 8 = 40320).

#include <stdio.h>

int i, fat, numero;

int main(){
	printf("\t\tCALCULO DE FATORIAL");
	printf("\n\t|Para parar o PROGRAMA DIGITE: 010101|");
	while(i<10000){
		printf("\n\nEntre com um numero:");
		scanf("%i", &numero);
		
		if(numero == 010101){
			break;
		}
		if(numero == 0){
			fat=1;
			printf("FATORIAL: %d", fat);
		}else 
		if(numero < 0){
			printf("\nNÃO EXISTE FATORIAL DE NUMERO NEGATIVO");
		}else 
		if(numero>16){
			printf("\nNUMERO MUITO GRANDE PARA SER CALCULADO");
		}else{
		
			for(fat=1;numero>1; numero--){
				fat = fat* numero;
			}
			printf("FATORIAL: %d", fat);
		}
	
}
}
