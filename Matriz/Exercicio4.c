/*Elabore um algoritmo que leia uma matriz 3x4 de inteiros, calcule quantos
elementos da matriz são positivos e, em seguida, construa uma segunda
matriz apenas com os elementos positivos. No lugar dos números negativos
da segunda matriz coloque o número zero. No final, imprima a quantidade
de números positivos e a segunda matriz.*/

#include <stdio.h>
#include <stdlib.h>

int matriz[3][4], positivo=0, matrizP[3][4], i,j;

int main(){
	
	for(i=0; i<3; i++){
		for(j=0; j<4; j++){
			printf("Entre com o primeiro valor[%i][%i]: ", i+1, j+1);
			scanf("%i", &matriz[i][j]);
			
			if(matriz[i][j]>=0){
				positivo++;
			}else{
				matriz[i][j]=0;
			}
			matrizP[i][j]= matriz[i][j];
			
			
			system("cls");
		}
		
	}
	printf("Quantidade de numeros positivos: %i\n", positivo);
	
	for(i=0;i<3; i++){
		for(j=0; j<4; j++){
			printf("\t[%i][%i]:%i        \t", i+1, j+1, matrizP[i][j]);
		}
		printf("\n");
	}
	system("pause");
	

}

