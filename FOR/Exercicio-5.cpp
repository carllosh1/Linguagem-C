//Escreva um algoritmo que leia dois n�meros, N1 e N2. Como resultado,
//calcule quantos n�meros �mpares existem entre N1 e N2. Supor que N1 e N2
//n�o entram no c�lculo.


#include <stdio.h>
#include <stdlib.h>

int n1,n2, x, impar, par,h;

int main(){
	printf("Entre com o Primeiro numero: ");
	scanf("%i", &n1);
	printf("Entre com o Segundo numero: ");
	scanf("%i", &n2);
 	system("cls");
if(n1>n2){
  printf("N�MEROS DE N2 A N1:");
  for (x=n2+1; x < n1; x++)
  {
  	
  	if(h == x%2){
  	par= par+1;
    printf("\nValores: %d - PAR", x);
  }else {
  	impar= impar +1;
  	printf("\nValores: %d - IMPAR", x);
  }

}
}else {
	
	printf("NUMEROS DE N1 A N2:");
	for(x=n1+1; x < n2; x++)
  {
  	
  	if(h == x%2){
  	par= par+1;
    printf("\nValores: %d - PAR", x);
  }else {
  	impar= impar +1;
  	printf("\nValores: %d - IMPAR", x);
  }
  
}

}

printf("\n\nContador de numero pares: %i", par);
printf("\nContador de numero impares: %i", impar);
}



























