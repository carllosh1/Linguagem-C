/* Faça um algoritmo que recebe uma matriz M (3x3) e calcula a soma dos
elementos da diagonal principal e a soma dos elementos da diagonal
secundária da matriz. */

#include <stdio.h>

int matriz[3][3], i, j, soma=0;

int main(){
	for(j=0; j<3; j++){
		for(i=0; i<3;i++){
			printf("Entre com o valor da Matriz[%i][%i]: ", i+1, j+1);
			scanf("%d", &matriz[i][j]);
			
			if(i==j){
				soma+= matriz[i][j];
				if(i==1 && j==1){
					soma+= matriz[i][j];
				}
			}
			else
			 if(i!=1 && j!=1) {
				soma+= matriz[i][j];
			}		
		}	
	}
	printf("%i", soma);
}
