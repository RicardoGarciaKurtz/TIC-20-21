//lee tres numeros para que te de el mayor
#include<stdio.h>
int main(){
	int num1,num2,num3;
	int mayor;
	printf("numero1: ");
	scanf("%d",&num2);
	printf("numero2: ");
	scanf("%d",&num2);
	printf("numero3: ");
	scanf("%d",&num3);
	//lee bien los numero?
	//printf("has introducido los numeros: ")
	//printf("%d, %d, %d, num1, num2, num3")
	if(num1>num2 && num1>num3){
		mayor=num1;
	}
		if(num2>num1 && num2>num3){
		mayor=num2;
	}
		if(num3>num1 && num3>num2){
		mayor=num3;
	}
	printf("el mayor es %d",mayor);
	return 0;
}
