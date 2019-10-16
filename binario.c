#include<stdio.h>
#include<stdlib.h>

int getBinario(int numero);

int main(){
	int numero;

	printf("\nInforme um numero entre 1 e 32: ");
	scanf("%d", &numero);

	printf("\n%d", getBinario(numero));
}

int getBinario(int numero){
	int resto, aux, binario=0, j=1;
	aux = numero;

	while(aux!=0){
		resto = aux % 2;
		binario = binario + (resto*j);
		aux = aux / 2;
		j=j*10;
	}
return binario;
}