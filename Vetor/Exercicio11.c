/* Faça um algoritmo que leia uma matriz 3x4 de números inteiros e conta
quantos números pares e quantos números impares existem na matriz. */

#include<stdio.h>
#include<stdlib.h>


int matriz[3][4], i, j, par=0, impar=0;


int main(){
	for(i=0; i<3; i++){
		for(j=0; j<4;j++){
			
			printf("Entre com o valor da Matriz[%i][%i]: ", i+1, j+1);
			scanf("%d", &matriz[i][j]);
			
			if(matriz[i][j]%2==0){
				par++;
			}else{
				impar++;
			}
			
			system("cls");
		}
	}
	
	printf("Numeros pares: %i | Numeros impares: %i\n", par, impar);
	system("pause");
}
