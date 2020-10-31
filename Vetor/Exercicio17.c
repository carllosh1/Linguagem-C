/* Faça um algoritmo que receba uma matriz 6 x 3 e calcule a soma dos
elementos das linhas pares da matriz. */

#include <stdio.h>
#include <stdlib.h>

int matriz[6][3], i,j, soma;

int main(){
	for(i=0; i<6; i++){
		for(j=0;j<3; j++){
			printf("Entre com o valor da matriz[%i][%i] ", i, j);
			scanf("%i", &matriz[i][j]);
			
			if(j%2==0){
				soma+=matriz[i][j];
			}else{}
		}
	}
	system("cls");
	printf("\t0\t1\t2\n");
	printf("-----------------------\n");
	for(i=0; i<6; i++){
		printf("%i|\t",i);
		for(j=0;j<3; j++){
			printf("%i\t", matriz[i][j]);
		}
		printf("\n");
	}
	printf("A SOMA DA LINHAS PARES EH: %i", soma);
}
