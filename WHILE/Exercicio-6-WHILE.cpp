//Fa�a um algoritmo que receba dois n�meros X e Y, sendo X < Y. Calcule e
//mostre:
//� a soma dos n�meros pares desse intervalo de n�meros, incluindo os
//n�meros digitados;
//� a multiplica��o dos n�meros �mpares desse intervalo, incluindo os
//digitados;

#include <stdio.h>

int x, y,i, soma, multi=1, sair=-1;


int main(){
	printf("Algoritmo:");
	while(sair != 0){
	
		printf("\nEntre com o Valor de X: ");
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
	
		printf("\n\nVoce deseja continuar?\nSIM(1)|NAO(0):");
		scanf("%i", &sair);
	}	
	printf("VOCE SAIU!");
}
