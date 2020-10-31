//Escreva um algoritmo que leia 90000 números e conte quantos deles estão
//nos seguintes intervalos: (0 a 25), (26 a 50), (51 a 75), (76 a 100). A entrada
//de dados deve terminar quando for lido um número negativo.

#include <stdio.h>

int n, contador1, contador2, contador3, contador4, x;

int main(){
	for(x=0; x<10; x++){
	
		printf("Entre com um numero: ");
		scanf("%i", &n);
	
	if(n>=0 && n<=25){
	 contador1 = contador1 + 1;
	 
	}else if(n>=26&& n<=50){
	contador2 = contador2 + 1;
	 
	}else if(n>=51 && n<=75){
	contador3 = contador3 + 1;
	 
	}else if(n>=76 && n<=100){
	contador4 = contador4 +1;
	 
	}else if(n<0){
		break;
	}
}

 printf("\nEntre 0 e 25: %i", contador1);
 printf("\nEntre 26 e 50: %i", contador2);
 printf("\nEntre 51 e 75: %i", contador3);
 printf("\nEntre 76 e 100: %i", contador4);	
}
