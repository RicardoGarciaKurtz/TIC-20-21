#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//memory alocation

int main(){
	int Y=0,X=0;
	char Z[50];
	char *lista[2];
	int cont;
	char aux[20];
	int longitud;
	for(cont=0;cont<2;cont++){
		printf("\npalabra %d: ",cont);
		scanf("%s",aux);
		lista[cont]=(char *) malloc(longitud);
		strcpy(lista[cont],aux);//destino,origen
		
	}	
	//mostrar lista
	printf("\n****************************************");
	printf("\n*     lista de palabras     *");
	printf("\n****************************************");
	for(cont=0;cont<2;cont++){
		printf("\n %d .- %s",cont,*(lista+cont));
	}
	printf("\nahora invertimos la palabras: \n");
	gets(Z);
	while(Z[X] != '\0')
	{
		printf("%c",Z[X]);
		X++;
 
	}
	printf("\nLa palabra invertida es: %s", strrev(Z));
 

	
	return 0;
}
