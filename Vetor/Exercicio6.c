/* Ler 2 matrizes A e B de 5 linhas e 3 colunas, construir uma matriz C, onde
cada elemento de C seja a soma dos elementos correspondente em A com B. */

#include <stdio.h>
#include <stdlib.h>

int i,j, matrizA[5][3], matrizB[5][3], matrizC[5][3];

int main(){
	 for(i=0; i<5; i++){
	 	for(j=0; j<3; j++){
	 		printf("Entre com os valores da MATRIZ A [%i][%i]: ", i+1, j+1);
	 		scanf("%i", &matrizA[i][j]);
		 }
		 system("cls");
	 }
	 for(i=0; i<5; i++){
	 	for(j=0; j<3; j++){
	 		printf("Entre com os valores da MATRIZ B [%i][%i]: ", i+1, j+1);
	 		scanf("%i", &matrizB[i][j]);
		 }
		 system("cls");
	 }
	 for(i=0; i<5; i++){
	 	for(j=0; j<3; j++){
	 		matrizC[i][j] = matrizA[i][j]+ matrizB[i][j];
		 }
	 }
	 
	 for(i=0; i<5; i++){
	 	for(j=0; j<3; j++){
	 		printf("Soma entre MATRIZ A E B =  MATRIZ C [%i][%i]: %i\n", i+1, j+1, matrizC[i][j]);
	 		
		 }
	 }
	 system("pause");
}
