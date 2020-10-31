/* Escrever um algoritmo que lê uma matriz M(4,4) e cria 2 vetores SL(4) e
SC(4) que contenham, respectivamente, as somas das linhas e das colunas
de M. Escrever os vetores criados. */

#include <stdio.h>

int matriz[4][4], SL[4], SC[4], i ,j;

int main(){
	
	for(i=0;i<4;i++){
		for(j=0;j<4;j++){
			printf("Entre com o valor da matriz[%i][%i] ", i+1, j+1);
			scanf("%i", &matriz[i][j]);
			
			SC[j]+= matriz[i][j];
			SL[i]+= matriz[i][j];
			
		}
		system("cls");
	}
	
	for(i=0;i<4;i++){
		for(j=0;j<4;j++){
			printf("%i\t", matriz[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	for(i=0;i<4;i++){
		printf("SOMA DA %i COLUNA: %i\t", i+1, SC[i]);
		printf("SOMA DA  %i LINHA: %i\n", i+1, SL[i]);
		 
	 	
	}
}
