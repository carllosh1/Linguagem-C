/* Faça um algoritmo que lê 2 matrizes A e B de 2 linhas e 4 colunas. Em
seguida, construa uma matriz C onde cada elemento de C é o maior valor
entre os elementos correspondentes em A e B. */

#include <stdio.h>
#include <stdlib.h>

int matrizA[2][4], matrizB[2][4],matrizC[2][4], i, j;

int main(){
	  for(i=0; i<2; i++){
	  	for(j=0; j<4; j++){
	  		fflush(stdin);
	  		printf("Entre com o Valor da matriz A [%i][%i]: ", i+1, j+1);
	  		scanf("%i", &matrizA[i][j]);
		  }
		 
	  }
	   system("cls");
	  
	  for(i=0; i<2; i++){
	  	for(j=0; j<4; j++){
	  		printf("Entre com o Valor da matriz B [%i][%i]: ", i+1, j+1);
	  		scanf("%i", &matrizB[i][j]);
		  }
	  }
	  system("cls");
	  for(i=0; i<2; i++){
	  	for(j=0; j<4; j++){
	  		if(matrizA[i][j] >= matrizB[i][j]){
	  			matrizC[i][j]= matrizA[i][j];
	  			
			  }else if(matrizB[i][j] >= matrizA[i][j]){
			  	matrizC[i][j]= matrizB[i][j];
			  }
			  printf("Maiores valores[%i][%i]: %i\n", i+1, j+1, matrizC[i][j]);
	  			
		  }
	  }
	  

}
