#include <stdio.h>

int saque=0, cem=0, cinquenta=0, vinte=0, dez=0, cinco=0, dois=0;


int main(){
	 
		printf("O valor do SAQUE TEM QUE SER INTEIRO");
		printf("\n\nDigite o valor que voce deseja sacar: ");
		scanf("%i", &saque);
		
		if((saque%2!=0) && (saque>4)){
			saque-=5;
			cinco=1;
		}else{}
		
		while(saque>=100){
			saque-= 100;
			cem++;
		}
		while(saque>=50 ){
			saque-= 50;
			cinquenta++;
		}
		while(saque>=20){
			saque-=20;
			vinte++;
		}
		while(saque>=10){
			saque-=10;
			dez++;
		}

		while(saque>=2){
			saque-=2;
			dois++;
		}
		
		if(saque!=0){
			printf("NAO EH POSSIVEL SACAR!");
		}else{
			printf("\nNOTAS DE CEM: %d", cem);
			printf("\nNOTAS DE Cinquenta: %d", cinquenta);
			printf("\nNOTAS DE VINTE: %d", vinte);
			printf("\nNOTAS DE DEZ: %d", dez);
			printf("\nNOTAS DE CINCO: %d", cinco);
			printf("\nNOTAS DE DOIS: %d\n", dois);
		}
}


