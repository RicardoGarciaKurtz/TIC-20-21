#include<stdio.h>
int main(){
	int numeros[10];
	int cont;
	int pos;
	int bolsillo;
	int veces;
	printf("\n introduzca 10 numeros enteros: ");
	for(cont=0;cont<10;cont++){
		printf("\n numeros %d: ",cont);
		scanf("%d",&numeros[cont]);
	}
	for(veces=1;veces<10;veces++){
		for(pos=0;pos<9;pos++){
			if(numeros[pos]>numeros[pos+1]){
				//intercambios
				bolsillo=numeros[pos];
				numeros[pos]=numeros[pos+1];
				numeros[pos+1]=bolsillo;
		}
	}
}
	printf("\n ordenada: ");
		for(cont=0;cont<10;cont++){
		printf("\n numeros %d: %d",cont,numeros[cont]);
}
	return 0;
}
