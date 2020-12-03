#include<stdio.h>

int main(){
	int cont,num;
	int tabla=7;
	printf("*************");
	printf("* tabla del %d *");
	printf("*************");
	for(cont=0;cont<=10;cont++){
		//I/O
		printf("%d x %d = %d\n",tabla, cont, cont*tabla);
	}
	return 0;
}
