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
int main(){
	int cont;
	int marcador1[3];
	int marcador2[3];
	char tecla
	for(cont=0;cont<=3;cont++){
		//turno ordenador
		printf("\nturno 1. ordenador( presiona cualquier tecla para tirar el dado)")
		scanf("%c,&tecla");
		marcador1[cont]=tirada();
		printf("%d",marcador1[cont]);
		//turno jugador
	}
	return 0;
}

