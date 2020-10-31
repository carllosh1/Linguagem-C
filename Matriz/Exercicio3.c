/*Elabore um algoritmo que leia uma matriz 3x3 de números reais e calcule a
média dos valores de cada linha da matriz.*/

#include <stdio.h>
#include <stdlib.h>
int i,x, matriz[3][3], soma[3];
float media[3];
int main(){
	
	for(i=0; i<3; i++){
		for(x=0; x<3; x++){
			printf("Entre com [%x][%i]: ", x+1,i+1);
			scanf("%i", &matriz[x][i]);
			system("cls");
		}	
	}
		for(i=0; i<3; i++){
			for(x=0; x<3; x++){
				printf("O valor de[%x][%i] eh: %i\t\t", x+1,i+1, matriz[x][i]);
				
				soma[i]+=matriz[x][i];
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

