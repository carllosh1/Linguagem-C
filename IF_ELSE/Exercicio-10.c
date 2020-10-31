//Um cinema que possui capacidade de 100 lugares está sempre com
//ocupação total. Certo dia cada espectador respondeu a um questionário, no
//qual constava:
//A) sua idade;
//b) sua opinião em relação ao filme, segundo:
//Ótimo = *****
//Bom = ****
//regular = ***
//Ruim= **
//Péssimo = *
//Elabore um algoritmo que, lendo estes dados, calcule e imprima: a
//quantidade de respostas: ''ótimo'‘, a média de idade das pessoas que
//responderam ruim e a média de idade das pessoas que responderam
//péssimo.

#include <stdio.h>


int idade, x, qtd, nota;
float mir1,mir2,mir3, mip1, mip2, mip3; 

int main(){
	printf("\n---------------------------------------------------------");
	printf("\n|	         QUESTIONARIO DO CINEMA		        |");
	printf("\n---------------------------------------------------------");
	printf("\n|NOTA 	        |	=       |  ENTRE COM ESSE VALOR	|");
	printf("\n---------------------------------------------------------");
	printf("\n|Otimo	        | 	=	|	    1		|");
	printf("\n|Bom 		|	=	|	    2		|");
	printf("\n|Regular	|	=	|	    3		|");
	printf("\n|Ruim		|	=	|	    4		|");
	printf("\n|Pessimo	|	=	|	    5		|");
	printf("\n---------------------------------------------------------");

 

   	for(x = 1; x<6; x++){
   		printf("\n\n%i - Entre com a sua idade: ", x);
   		scanf("%i", &idade);
   		
   		do {printf("\nEntre com a sua Avaliacao: ");
   			scanf("%i", &nota);
		   }while((nota != 1)and(nota !=2)and(nota !=3)and(nota !=4)and(nota !=5));
		   
		   
		   if (nota == 1){
                qtd = qtd+ 1;	
                
		   }else if(nota == 2){
		   			
		   }else if(nota == 3){	
		   
		   }else if(nota == 4){
		   			mir1 = mir1 + 1;
		   			mir2 = (mir2 + idade);
		   			mir3 = mir2/mir1;
		   			
		   }else if(nota == 5){
		   			mip1 = mip1 + 1;
		   			mip2 = (mip2 + idade);
		   			mip3 = mip2/mip1;
		   } 
   	
	   }
   	
    printf("\n\nQuantidade de OTIMO: %i",	qtd);
    printf("\nMedia de Idades que responderam RUIM: %.0f", mir3);
    printf("\nMedia de Idades que responderam PESSIMO: %.0f", mip3);
    
    
}
