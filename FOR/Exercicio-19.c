//Faça um algoritmo que receba dois números X e Y, sendo X < Y. Calcule e
//mostre:
//• a soma dos números pares desse intervalo de números, incluindo os
//números digitados;
//• a multiplicação dos números ímpares desse intervalo, incluindo os
//digitados;

#include <stdio.h>

int x, y,i, soma, multi=1;

int main(){
	
	printf("Entre com o Valor de X: ");
		scanf("%i", &x);
		printf("Entre com o Valor de Y: ");
		scanf("%i", &y);
	if(x >= y){
	
	do{
		printf("O VALOR DE Y TEM QUE SER MAIOR QUE X: ");
		scanf("%i", &y);
	}while( x >= y);
	
	}else{} 
	
	if(x<y){
		for(i=x; i<=y; i++){
			if(i%2==0){
				soma= soma + i;
			}else{
				multi= multi*i;
			}
		}
		
	}else{
		printf("ERROR404");
	}
	
	printf("\nA SOMA DOS NUMEROS PARES EH: %i", soma);
	printf("\nA Multiplicacao dos NUMEROS IMPARES EH: %i", multi);
	}	

