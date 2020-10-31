//Construa um algoritmo que verifique se um número fornecido pelo usuário é
//primo ou não.
// primo = divisivel por 1 e por ele mesmo (2)

#include <stdio.h>
int i, numero, x, soma;
int main(){
	printf("Algoritmo para verificar se e primo ou nao");
   do{	
		printf("\nEntre com um numero:");
        scanf("%d",&numero);
        
        soma=0;
        
        for(x=1; x<=numero; x++){
            if(numero%x==0)
                 soma++;
        }
        if(numero==0){
        	soma= -2;
		}
        if(soma>2 || soma == 1){
        	printf("Nao primo!\n");
		}
        else
		if(soma=2){
        	printf("primo!\n");
		}else{
			printf("INDETERMINADO!");
		}
        printf("\nVoce deseja continuar?\n|SIM(0)|NAO(1)|:");
        scanf("%i", &i);
    }while(i != 1);
}
