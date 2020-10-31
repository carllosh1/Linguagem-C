//Escreva um algoritmo que apresente quatro opções (a) consulta saldo, 
//(b)saque, 
//(c) depósito e
// (d) sair.
//  O saldo deve iniciar em R$ 0,00. A cada saque
//ou depósito o valor do saldo deve ser atualizado.

#include <stdio.h>
#include<stdlib.h>

int x;
float saldototal=0, saque,  deposito;
char codigo;

int main(){
	while(codigo != 'D'){
		printf("-------------------------");
		printf("\n|Op%c%co	        |C%cdigo	|", 135, 198, 162);
		printf("\n-------------------------");
		printf("\n|Consultar saldo|  A	|");
		printf("\n|Saque		|  B	|");
		printf("\n|Dep%csito	|  C	|", 162);
		printf("\n|SAIR		|  D	|");
		printf("\n-------------------------\n\n");
	
		do{
			printf("Entre com um c%cdigo: ", 162);
			scanf("%s*c", &codigo);
		}while((codigo != 'A')and(codigo != 'B')and(codigo != 'C')and(codigo != 'D'));
	
		if(codigo == 'A'){
			system("cls");
			printf ("CONSULTAR O SALDO");
			printf("\nSALDO: R$%0.2f\n", saldototal);
			system("pause");
			system("cls");
		}else
		if(codigo == 'B'){
			system("cls");
			printf("SAQUE");
			if(saldototal==0){
				printf("\nValor que deseja retirar(0.00): R$");
				scanf("%f*c", &saque);
				printf("Saldo Insuficiente!\n");
			}else{
				printf("\nValor que deseja retirar(0.00): R$");
				scanf("%f*c", &saque);
				saldototal = saldototal - saque;
			}
			system("\npause");
			system("cls");
	
		}else
		if(codigo == 'C'){
			system("cls");
		
			printf("DEPOSITO");
			printf("\nValor a ser depositado(0.00): R$");
			scanf("%f*c", &deposito);
		
			system("\npause");
			system("cls");
		
			saldototal = saldototal + deposito;
		}else{}
	}
		
	printf("VOC%c SAIU! \nOBRIGADO POR UTILIZAR O SERVI%cO", 210, 135);	
}

