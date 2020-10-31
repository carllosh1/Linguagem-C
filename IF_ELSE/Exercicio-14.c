//Entrar com o peso, o sexo e a altura de uma determinada pessoa. Após a
//digitação, exibir se esta pessoa está ou não com seu peso ideal. Veja tabela
//da relação peso/altura2.
//Peso/altura2 (R)
//- Femininos
//
//Mensagem peso/altura2 (R) -
//Masculinos
//
//Mensagem
//
//R < 19 Abaixo do peso R < 20 Abaixo do peso
//19 <= R < 24 Peso ideal 20 <= R < 25 Peso ideal
//R >= 24 Acima do peso R >= 25 Acima do peso

#include <stdio.h>
#include <conio.h>


float altura,imc, peso;
char sexo;

int main(){
	
	do {
	printf("Entre com o seu Sexo(M ou F): ");
	scanf("%s", &sexo);
	}while((sexo != 'M')&&(sexo != 'F'));
	
	printf("Entre com o seu Peso: ");
	scanf("%f", &peso);
	
	printf("Entre com sua Altura(0.00): ");
 	scanf("%f", &altura);
 	
 	imc = peso / (altura*altura);
 	
 	
 	if(sexo == 'M' && imc < 20){
 		printf("Abaixo do peso");
	 }else if(sexo == 'M' && 20 <= imc && imc <25){
	 	printf("Peso Ideal");
	 }else if(sexo == 'M' && imc >= 25){
	 	printf("Acima do peso");
		 	
	 }else	if(sexo == 'F' && imc < 19){
 		printf("Abaixo do peso");
	 }else if(sexo == 'F' && 19 <= imc && imc < 24){
	 	printf("Peso Ideal");
	 }else if(sexo == 'F' && imc >= 24){
	 	printf("Acima do peso");
	 }
	 
	 
}
