/* Faça um algoritmo que leia uma matriz 4x4 e calcula o total dos valores
somados da segunda com a quarta coluna da matriz. */

#include<stdio.h>
#include<stdlib.h>
int matriz[4][4], i,j, soma=0;

int main(){
	for(j=0; j<4; j++){
		for(i=0; i<4;i++){
			
			printf("Entre com o valor da Matriz[%i][%i]: ", i+1, j+1);
			scanf("%d", &matriz[i][j]);
			
			if(i==1 || i==3){
				soma+=matriz[i][j];
			}
			
		}
	}
	
	
	
	for(j=0; j<4; j++){
		for(i=0; i<4;i++){
			printf("%i\t", matriz[i][j]);
		}
		printf("\n");
	}
	printf("Soma da 2 coluna e a 4 coluna: %i", soma);

}
