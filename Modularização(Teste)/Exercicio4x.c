/*Construir um algoritmo que tenha uma função que calcule o cubo de um
número inteiro qualquer de forma que esta possa ser usada para resolver os
seguintes cálculos que serão feitos no algoritmo principal
? O volume de uma esfera: 4/3 R3
? E a equação: x3 + y3 + 2 -> Não tem como calculc*/

#include<stdio.h>
#include<math.h>


float  raio, pi, x, y;

float cubo(float numero){
	float resultado;
	
	resultado = pow(numero,3);
	
	return(resultado);
}


void esfera(){
	float resultado;
	printf("Entre com o RAIO da esfera: ");
	scanf("%f", &raio);
	printf("Informe PI: ");
	scanf("%f", &pi);
	
	
	resultado = cubo(raio) * pi *4 /3;
	printf("O volume eh: %0.2f\n", resultado);
}

void equacao(){
	float resultado;
	printf("Equacao: x^3 + y^3 + 2 | digite os valores de x e y: ");
	scanf("%f %f", &x, &y);
	
	resultado =cubo(x)+ cubo(y) + 2;
	
	printf("O volume eh: %0.2f", resultado);
}

int main(){
	
	esfera();
	printf("\n");
	
	equacao();
}
