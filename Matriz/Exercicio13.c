/* Faça um algoritmo que leia uma matriz 4x4 e calcula o total dos valores
somados da segunda com a quarta coluna da matriz. */

#include<stdio.h>
#include <stdlib.h>

int matriz[4][4], i,j;

int main(){
	for(i=0; i<4; i++){
		for(j=0; j<4;j++){
			
			printf("Entre com o valor da Matriz[%i][%i]: ", i+1, j+1);
			scanf("%d", &matriz[i][j]);
			
		}
	}
	system("cls");
	printf("\nAntes\n");
	
	for(i=0; i<4; i++){
		for(j=0; j<4;j++){
			printf("%i\t", matriz[i][j]);
		}
		printf("\n");
	}
	printf("\nDepois\n");
			
	for(i=0; i<4; i++){
		 matriz[i][1] += matriz [i][3];
	}
	for(i=0; i<3; i++){
		for(j=0; j<3;j++){	
			
			printf("%i\t", matriz[i][j]);
		}
		printf("\n");
	}
	system("pause");
}
