//Construa um algoritmo que verifique se um número fornecido pelo usuário é
//primo ou não.
// primo = divisivel por 1 e por ele mesmo (2)

#include <stdio.h>
int i, numero, x, soma;
int main(){
    for(i=1; i<=100000; i++){	
		printf("Entre com um numero:");
        scanf("%d",&numero);
        
        soma=0;
        
        for(x=1; x<=numero; x++){
            if(numero%x==0)
                 soma++;
        }
        if(soma>2){
        	printf("Nao primo\n");
		}
        else{
        	printf("primo\n");
		}
            
    }
}
