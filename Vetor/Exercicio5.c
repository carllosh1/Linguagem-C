/* Elabore um algoritmo que leia uma matriz 4x4 de inteiros e conte quantos
números pares existem na terceira coluna da matriz. */

#include<stdio.h>

int  i,j, matriz[4][4], par=0;

int main(){
	for(i=0; i<4; i++){
		for(j=0; j<4; j++){
			printf("Entre com o valor[%i][%i]: ", i+1, j+1);
			scanf("%i", &matriz[i][j]);
			
			if(i==2){
				if(matriz[i][j]%2==0){
					par++;
				}else{}
			}else{}
		}
		system("pause");
		system("cls");
	}
	for(i=2; i<3; i++){
		for(j=0; j<4; j++){
			printf("O valor[%i][%i]: %i\n", i+1, j+1, matriz[i][j]);
		}
	}
printf("O numero de pares na COLUNA 3 EH: %i", par);
}
