/* Faça um algoritmo que leia uma matriz 2x5 e contar quantos valores da
matriz estão entre 10 e 20. */

#include <stdio.h>

int soma=0, i,j, matriz[2][5];

int main(){
	for(i=0; i<2; i++){
		for(j=0; j<5;j++){
			printf("Entre com o valor da Matriz[%i][%i]: ", i+1, j+1);
			scanf("%i", &matriz[i][j]);
			
			if(matriz[i][j]>10 && matriz[i][j]<20){
				soma++;
			}
		}
		printf("\n");
	}
	printf("A quantidade de numeros entre (10 e 20): %i", soma);
	
}

