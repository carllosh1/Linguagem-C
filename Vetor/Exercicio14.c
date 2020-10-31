/* Faça um algoritmo que preenche uma matriz 4x4 e em seguida troca os
valores da primeira linha com os valores da quarta linha da mesma matriz. */

#include<stdio.h>
#include<stdlib.h>
int matriz[4][4], i,j, aux;

int main(){
	for(i=0; i<4; i++){
		for(j=0; j<4;j++){
			printf("Entre com o valor da Matriz[%i][%i]: ", i+1, j+1);
			scanf("%d", &matriz[i][j]);
			
		}
	}
	printf("\nANTES\n");
	
	for(i=0; i<4; i++){
		for(j=0; j<4;j++){
			printf("%i\t",matriz[i][j]);
		}
		printf("\n");
	}
	
 	for(j=0; j<4; j++){
 	 	aux=matriz[1][j];
 		matriz[1][j]= matriz[4][j-4];
 		matriz[4][j-4]=aux;
	}
	
	printf("\nDepois\n");
	
	for(i=0; i<4; i++){
		for(j=0; j<4;j++){
			printf("%i\t", matriz[i][j]);
		}
		printf("\n");
	}
}
 	
			
