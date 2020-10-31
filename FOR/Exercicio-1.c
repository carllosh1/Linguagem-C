//Construir um algoritmo que calcule a média de 100000 valores inteiros
//positivos, lidos externamente. O final da leitura acontecerá quando for lido
//um valor negativo.

#include <stdio.h>

int x;
float valor, valor_total, x_total;

int main(){
	
	
	printf("Caculo de media\n");
	for (x=1; x<=1000000000; x++){
		printf("\n%i-Entre com um valor: ", x);
		scanf("%f", &valor);
		
		
	if(valor < 0){
		x = x-1;
	break;
	
}else{
	valor_total = valor_total + valor;
}
	
	}
	
	printf("\nValor da Media: %0.2f", valor_total/x);
	
	}

