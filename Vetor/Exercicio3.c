/*Elabore um algoritmo que leia uma matriz 3x3 de números reais e calcule a
média dos valores de cada linha da matriz.*/

#include <stdio.h>
#include <stdlib.h>

int i,j, matriz[3][3], soma[3]={0,0,0};
float media[3]={0.0,0.0,0.0};
int main(){
	
	for(i=0; i<3; i++){
		for(j=0; j<3; j++){
			printf("Entre com [%i][%i]: ", i+1,j+1);
			scanf("%i", &matriz[i][j]);
			system("cls");
		}	
	}
		for(i=0; i<3; i++){
			for(j=0; j<3; j++){
				printf("[%i][%i]: %i\t", i+1,j+1, matriz[i][j]);
				
				soma[i]+=matriz[i][j];
			}	
			printf("\n");
		}
		printf("\n\n");
		for(i=0; i<3; i++){
			media[i]= (float) soma[i]/3; 
			printf("a media da %i linha da matriz eh: %0.2f\n", i+1, media[i]);
			
		}
		
		system("pause");
		
	
}

