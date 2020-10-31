
/*Construir um algoritmo que receba uma matriz 2x4 de números reais e
imprima na tela os números digitados.*/
#include <stdio.h>

int i, j;
float matriz[2][4]={123,413,542,324,594,234,923,329};

int main(){
	for(i=0; i<2; i++){
			for(j=0; j<4; j++){
				printf("O valor de[%i][%i] eh: %0.1f\t", i+1,j+1, matriz[i][j]);
				
			}	
			printf("\n");
		}
}
