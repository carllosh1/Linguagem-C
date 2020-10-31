//Escreva um algoritmo que receba o peso e a altura de uma determinada
//pessoa. Após a digitação, exibir se esta pessoa está ou não com seu peso
//ideal. Veja tabela da relação peso/altura2.
//
//Relação peso/altura2 (R) Mensagem
//R < 20 Abaixo do peso
//20 <= R < 25 Peso ideal
//R >= 25 Acima do peso

#include <stdio.h>

float peso,altura, imc;

int main(){
	printf("Entre com o seu Peso: ");
	scanf("%f", &peso);
	
	printf("Entre com sua Altura(0.00): ");
 	scanf("%f", &altura);
 	
 	imc = peso / (altura*altura);
 	
 	if(imc<20){
 		printf("Abaixo do peso");
 		
	}else if(25> imc && imc >= 20){
	 	printf("Peso Ideal");
	 	
	}else if(imc>=25){
	 	printf("Acima do peso");
	 }
}
