/*Construir um algoritmo que tenha uma função que calcule o cubo de um
número inteiro qualquer de forma que esta possa ser usada para resolver os
seguintes cálculos que serão feitos no algoritmo principal
? O volume de uma esfera: 4/3 R3
? E a equação: x3 + y3 + 2 -> Não tem como calculc*/

#include<stdio.h>
#include<math.h>


float Volume, raio, pi, x, y, Equacao;

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
	
}

float calcularVolume(){
	Volume = cubo(raio) * pi *4 /3;
	return(Volume);
}

void equacao(){
	printf("Equacao: x^3 + y^3 + 2 | digite os valores de x e y: ");
	scanf("%f %f", &x, &y);
	
}

float calcularEquacao(){
	Equacao =cubo(x)+ cubo(y) + 2;
	return(Equacao);
}

int main(){
	
	esfera();
	calcularVolume();
	printf("O volume eh: %0.2f\n", Volume);
	
	printf("\n");
	
	equacao();
	calcularEquacao();
	printf("O volume eh: %0.2f", Equacao);
}
