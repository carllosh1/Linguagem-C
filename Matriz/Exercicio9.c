/*Faça um algoritmo que leia uma matriz de 4 linhas e 5 colunas e encontra o
maior elemento da matriz. */

#include <stdio.h>

int  matriz[4][5], i, j, maior=0;

int main(){
	for(i=0; i<4; i++){
		for(j=0; j<5;j++){
			printf("Entre com o valor da Matriz[%i][%i]: ", i+1, j+1);
			scanf("%d", &matriz[i][j]);
			
			if(maior < matriz[i][j]){
				maior = matriz[i][j];
			}
		}
		system("cls");
	}
	printf("Maior elemento da matriz: %d", maior);
	
}
