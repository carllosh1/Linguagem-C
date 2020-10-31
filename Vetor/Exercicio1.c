/* Elaborar um algoritmo que permita ao usuário preencher uma matriz 3x3
de números inteiros e calcule a soma dos elementos da matriz. */

#include <stdio.h>
#include <stdlib.h>
int i,x, matriz[3][3], soma;

int main(){
	
	for(i=0; i<3; i++){
		for(x=0; x<3; x++){
			printf("Entre com [%x][%i]: ", x+1,i+1);
			scanf("%i", &matriz[x][i]);
			system("cls");
		}	
	}
		for(i=0; i<3; i++){
			for(x=0; x<3; x++){
				printf("O valor de[%x][%i] eh: %i\t\t", x+1,i+1, matriz[x][i]);
				
				soma+=matriz[x][i];
			}	
			printf("\n");
		}
		printf("a soma dos valores da matriz eh: %i\n", soma);
		system("pause");
		
	
}

