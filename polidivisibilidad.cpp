/* funcion que recibe un numero y devuelve si es divisible
para el numero 2,3,5 y 7*/
#include<stdio.h>
int esPolidivisible(int num){
	int cont=0;
	int respuesta=0;
	if(num%2==0) cont++;
	if(num%3==0) cont++;
	if(num%5==0) cont++;
	if(num%7==0) cont++;
	if(cont==4) respuesta=1;
	return(respuesta);
}
int main(){
	int num;
	printf("escribe un numero: ");
	scanf("%d", &num);
	if (esPolidivisible(num)==1){
		printf("es divisible para todos ellos");
    }else{
    	printf("no es polidivisible");
	}
	return 0;
}
