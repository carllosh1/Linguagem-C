/* Escreva uma fun��o chamada MEDIA que retorne a m�dia de 3 valores reais
(X, Y e Z) passados como par�metros. */

#include <stdio.h>

float MEDIA(float x, float y, float z){
	float media;
	media = (x+y+z)/3;
	
	return(media);
	
}
float x,y,z, media;
int main (){
	printf("Entre com 3 valores reais: ");
	scanf("%f %f %f", &x,&y,&z);
	
	media= MEDIA(x,y,z);
	
	printf("A media: %.2f", media);
}


