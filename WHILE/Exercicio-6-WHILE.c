//Fa�a um algoritmo que receba dois n�meros X e Y, sendo X < Y. Calcule e
//mostre:
//� a soma dos n�meros pares desse intervalo de n�meros, incluindo os
//n�meros digitados;
//� a multiplica��o dos n�meros �mpares desse intervalo, incluindo os
//digitados;

#include <stdio.h>

int x,y;
float i,  soma=0, multi=1;

int main(){
	printf("Algoritmo:");
	printf("\nEntre com o Valor de X: ");
		scanf("%i", &x);
	printf("Entre com o Valor de Y: ");
		scanf("%i", &y);
	if(x >= y){
		do{
			printf("O VALOR DE Y TEM QUE SER MAIOR QUE X: ");
			scanf("%i", &y);
		}while( x >= y);
	}
	while(x <= y){

		if(x%2==0){
			soma= soma + x;
		}else{
			multi= multi*x;
		}
			x++;
		}
			
	
		printf("\nA SOMA DOS NUMEROS PARES EH: %0.0f", soma);
		printf("\nA Multiplicacao dos NUMEROS IMPARES EH: %0.0f", multi);
	
		
}
