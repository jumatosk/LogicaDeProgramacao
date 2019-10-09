#include<stdio.h>
#include<stdlib.h>

int sucessor(int numero);

int main(){
	int numero;

	printf("Insira um numero: ");
	scanf("%d", &numero);
	
	printf("Sucessor de %d = %d", numero, sucessor(numero));	
}

int sucessor(int numero){
	return numero + 1;
}
