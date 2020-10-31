/* Escreva um algoritmo que leia um vetor A de 30 elementos reais e, usando o
procedimento METADE, divida todos seus elementos pela metade. */

#include<stdio.h>
#include<stdlib.h>

void metade(){
	int i;
	
	float vetor[30];
	for(i=0; i<30;i++){
		printf("%i-Entre com um valor: ", i+1);
		scanf("%f", &vetor[i]);
	}
	system("cls");
	for(i=0;i<30;i++){
		vetor[i]/=2;
		printf("%i-A Metade do valor eh:%.2f\n", i+1,vetor[i] );
	}
	system("pause");
}

int main(){
	metade();
}
