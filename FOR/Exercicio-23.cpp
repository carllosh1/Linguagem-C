//Fa�a um algoritmo para o �jogo de adivinhar um n�mero�. O computador
//deve sortear um n�mero entre 0 e 100 e pedir para o usu�rio tentar
//adivinhar este n�mero. O usu�rio vai dizer o seu palpite, e o computador
//deve responder, se ele � maior ou menor que o n�mero que ele sorteou. O
//algoritmo termina somente quando o usu�rio acertar exatamente qual o
//n�mero que o computador tinha sorteado, escrevendo uma mensagem de
//felicita��es para o nosso usu�rio e indicando o n�mero total de tentativas
//feitas. Dica: para gerar um n�mero qualquer entre 0 e 100, use a fun��o
//RandI( limite) - Retorna um n�mero inteiro gerado aleatoriamente, maior ou
//igual a zero e menor que limite

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include<time.h>

int main(){
	srand(time(NULL)); // PARA GERAR NUMEROS DIFERENTES
  	int i, numero,x = rand() % 100;
  
  printf("TENTE ADVINHAR O N%cMERO SORTEADO", 233);
  
  for (i=0; i <= 20; i++){
  	system("color 07");
  	printf("\n\nEntre com um valor entre 1 a 100:");
  	scanf("%i", &numero);
  	 
    if(x == numero){
    	printf("\nVoc%c acertou!", 136);
    	printf("\nNA TENTATIVA: %i", i);
    	system("color 02");
    	break;
	}else if(x < numero){
		printf("O n%cmero sorteado %c menor!", 163, 130);
		system("color 04");
	}else{
		printf("O n%cmero sorteado %c maior!", 163, 130);
		system("color 04");
	}
   
  }
   printf("\n\nN%cMERO SORTEADO: %d ", 233, x);
  getch();

}
