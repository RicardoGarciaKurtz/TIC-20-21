/*funcion mayor
1 nombre
2 que recibe
3 que devuelve
4 como lo hace
*/

#include<stdio.h>
int devuelve_mayor(int num1, int num2,int num3){
	int mayor;
	if(num1>num2 &&num1>num3) mayor=num1;
	if(num2>num1 &&num2>num3) mayor=num2;
	if(num3>num2 &&num3>num1) mayor=num3;
	return mayor;
}
int main(){ 
	int num1,num2,num3;
	printf("introduce 3 numeros enteros:\n");
	printf("numero1: ");
	scanf("%d",&num1);
	printf("numero2: ");
	scanf("%d",&num2);
	printf("numero3: ");
	scanf("%d",&num3);
	printf("el mayor de [%d], [%d], [%d] , es ", num1,num2,num3);
	printf("%d", devuelve_mayor(num1,num2,num3));
	return 0;
}
