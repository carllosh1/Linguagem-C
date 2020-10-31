//Escreva um algoritmo para calcular N!.

#include <stdio.h>

int fatorial, n1;
int main(){
	
	printf("Entre com um valor: ");
	scanf("%i", &n1);
	if(n1 == 0){
		fatorial =1;
	}else if (n1<0){	
		printf("\nNAO EXISTE FATORIAL DE NUMERO NEGATIVO!");
	}else if(n1>16){
		printf("\nNUMERO MUITO GRANDE PARA SER CALCULADO");
	}else{
		for(fatorial = 1; n1 > 1; n1--)
		fatorial = fatorial * n1;
		printf("\nFatorial calculado: %d\n", fatorial);
	}
}
