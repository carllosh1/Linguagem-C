//Ler um número inteiro n. Decidir se n é um número primo e apresente o
//resultado.

#include <stdio.h>

int numero, i=0, numero_primo=0,x;

int main(){
		printf("Entre com um numero: ");
		scanf("%i", &numero);
		
		if(numero==0){
				numero_primo = - 3;
		}
		while(i<=numero){
			i++;
			if(numero%i==0){
				numero_primo++;
			}
		}
		if(numero_primo>2 || numero_primo==1){
			printf("NAO PRIMO!\n\n");
		}else 
		if(numero_primo = 2){
			printf("PRIMO!\n\n");
		}else
		if(numero_primo<=-1){
			printf("INDETERMINADO!\n\n");
		}
	
	getchar();
}
