/*Construir um algoritmo que leia um valor inteiro N (utilizando
procedimento) e calcule o cubo deste valor (utilizando função). Mostre o
resultado. */

#include<stdio.h>
#include<math.h>

int cubo(int n){
	int resultado;
	
	resultado = pow(n,3);
	
}
void ler(){
	
	int n, resultado;
	
	printf("Informe um valor: ");
	scanf("%d", &n);
	
	
	
	resultado = cubo(n);
	
	printf("\nO cubo desse valor eh: %d", resultado);
}





int main(){
	
	ler();
}

