/* Faça um algoritmo que receba uma matriz 5x3 e um valor inteiro X
fornecido pelo usuário. A seguir, multiplique cada elemento da primeira e
da ultima linha da matriz pelo valor de X. Mostre a matriz resultante. */

#include<stdio.h>
#include<stdlib.h>


int matriz[5][3], i, j, x;


int main(){
	
	printf("Entre com o Numero que voce deseja multiplicar a MATRIZ: ");
	scanf("%i", &x);
	fflush(stdin);
	for(i=0; i<5; i++){
		for(j=0; j<3;j++){
			
			printf("Entre com o valor da Matriz[%i][%i]: ", i+1, j+1);
			scanf("%d", &matriz[i][j]);
			
			
			system("cls");
		}
	}
	
	printf("ANTES: ");
	printf("\n");
	for(i=0; i<5; i++){
		for(j=0; j<3;j++){
			printf("%i \t", matriz[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	printf("Depois:");
	printf("\n");
	
	for(i=0; i<5; i++){
		
		for(j=0; j<3;j++){
			if(i>0 && i<4){
				
				printf("%i \t", matriz[i][j]);
			}else{
				matriz[i][j] *= x;
				printf("%i \t", matriz[i][j]);
			}
			
		}
	
	printf("\n");
	}
	system("pause");
}
