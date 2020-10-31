/*Faça um algoritmo que receba as vendas semanais (de um mês) de 5
vendedores de uma loja e armazene em uma matriz. Calcule e mostre:
a. O total de vendas do mês de cada vendedor;
b. O total de vendas de cada semana (todos os vendedores juntos);
c. O total de vendas do mês;*/
#include <stdio.h>

int vendedor[5][4], i, j, somaTOTAL=0, somaVendedor[5], somaSemana[4];

int main(){
	for(i=0;i<5;i++){
		printf("%i - VENDEDOR\n", i+1);
		for(j=0;j<4;j++){
			printf("SEMANA - %i: ", j+1);
			scanf("%d", &vendedor[i][j]);
			
			somaSemana[j]+=vendedor[i][j];
			
			somaVendedor[i] += vendedor[i][j];
			
			somaTOTAL+=vendedor[i][j];
		}
		system("cls");
		
	}
	for(i=0; i<5; i++){
		printf("Total de vendas do %i Vendedor: %d\n", i+1, somaVendedor[i]);	
	}
	printf("\n\n");
	for(j=0;j<4; j++){
			printf("Total de vendas da %i semana: %d\n", j+1,  somaSemana[j]);
		}
	printf("\n");
	printf("SOMA TOTAL: %i ", somaTOTAL);
}
