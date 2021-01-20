/*
haz un juegoen el que compites en el ordenador. reglas:
1. se tira el dado(nº aleatorio) 3 veces de forma consecutiva
>turno 1. ordenador( presiona cualquier tecla para tirar el dado)
>4
>turno 1. player 1 ( presiona cualquier tecla para tirar el dado)
> gana el ordenador
>turno 2.
>se dan todos los resultados parciales, la suma de todos y
se da el ganador
*/
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
tirada(){
	int puntuacion;
	srand(time(0));
	puntuacion=rand()%6+1;
	return(puntuacion);
}
void escribe_ganador(int puntuacion_1,int puntuacion_2){
	if(puntuacion_1>puntuacion2)
		printf("\n ordenador win");
	else
		if(puntuacion_1<puntuacion_2)
			printf("\njugador win")
		else
			printf("\njugador y ordenador empatan");	
}
proclama_ganandor(int puntuacion1, int puntuacion2){
}
int main(){
	int cont;
	int marcador1[3];
	int marcador2[3];
	char tecla;
	int total1=0;
	int total2=0,
	for(cont=0;cont<=3;cont++){
		//turno ordenador
		printf("\nturno 1. ordenador( presiona cualquier tecla para tirar el dado)");
		scanf("%c,&tecla");
		marcador1[cont]=tirada();
		printf("%d",marcador1[cont]);
		//turno jugador
		printf("\nturno 1. jugador( presiona cualquier tecla para tirar el dado)");
		scanf("%c,&tecla");
		marcador2[cont]=tirada();
		printf("%d",marcador2[cont]);
		escribe_ganador(marcador1[cont])
	}
	//resultados
	printf("\n**********************************");
	printf("\n*          puntuaciones          *");
	printf("\n**********************************");
	printf("\n*        jugador ordenador       *");
	for(cont=0;cont<3;cont++){
		printf("\n* turno %d     %d     %d       *",cont+1,marcador1[cont]
		printf("\n      total    %d     %d       *");
	}
	printf("\n**********************************");
	printf("\n     total      %d       %d       *",total1,total2);
	proclama_ganador(total1,total2);
	return 0;
}

