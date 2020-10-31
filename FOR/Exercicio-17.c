//Ler um número inteiro n. Decidir se n é um número primo e apresente o
//resultado.

#include <stdio.h>
#include <stdlib.h>

int numero, i, numero_primo,x, sair;

int main(){
	
	for(x=1; x<=100000; x++){
	printf("Descubra se o numero eh primo:");
		printf("\nEntre com um numero: ");
		scanf("%i", &numero);
	
		
		numero_primo=0;
		if(numero==0){
				numero_primo = - 3;
			}
		for(i=1; i<=numero; i++){
				if(numero%i==0){
					numero_primo++;
			}
		}
			if(numero==1){
			 numero_primo= numero_primo +2;
			}
			
		
		if(numero_primo>2){
			printf("NAO PRIMO!\n\n");
		}else if(numero_primo > 0 && numero_primo<=2){
			printf("PRIMO!\n\n");
		}else if(numero_primo<=-1){
			printf("INDETERMINADO!\n\n");
		}
		do{
			printf("Se quiser SAIR(0) Continuar(1):");
			scanf("%i", &sair);
		}while((sair != 0)and(sair!=1));
		
		if(sair ==0){
			break;
			}else{ 
			system("cls");
			}
}

}
