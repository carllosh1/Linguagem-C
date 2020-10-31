//A partir de três valores que serão digitados, verificar se formam ou não um
//triângulo. Em caso positivo, exibir sua classificação: “Isósceles, escaleno ou
//eqüilátero”. Um triângulo escaleno possui todos os lados diferentes, o
//isósceles, dois lados iguais e o eqüilátero, todos os lados iguais. Para existir
//triângulo é necessário que a soma de dois lados quaisquer seja maior que o
//outro, isto, para os três lados.

#include <stdio.h>

float lado1,lado2,lado3;

int main(){
	printf("Entre com o primeiro lado: ");
	scanf("%f", &lado1);
	
	printf("Entre com o Segundo lado: ");
	scanf("%f", &lado2);
	
	printf("Entre com o Terceiro lado: ");
	scanf("%f", &lado3);
	
	if ((lado1>lado2+lado3)or(lado2>lado1+lado3)or(lado3>lado1+lado2)){
		printf("Nao e um triangulo");
	} else if (lado1 == lado2 && lado1 == lado3){
		printf("Equilatero");
		
	}else if (lado1 == lado2 && lado1 != lado3){
		printf("Isoceles");
		
	}else if (lado1 != lado2 && lado1 == lado3){
		printf("Isoceles");
		
	} else if (lado1 != lado2 && lado1 != lado3 && lado2 != lado3){
		printf("Escaleno");
	}
			
}
