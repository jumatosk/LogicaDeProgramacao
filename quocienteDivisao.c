#include<stdio.h>
#include<stdlib.h>

int getQuociente(int numero1, int numero2);
int getResto(int numero1, int numero2);

int main(){
	int numero1, numero2;
	
	printf("Insira o primeiro numero: ");
	scanf("%d", &numero1);
	printf("nInsira o segundo numero: ");
	scanf("%d", &numero2);
	
	printf("\nQuociente: %d", getQuociente(numero1, numero2));
	printf("\nResto: %d", getResto(numero1, numero2));
	
}

int getQuociente(int numero1, int numero2){
	return numero1 / numero2;
}

int getResto(int numero1, int numero2){
	return numero1 % numero2;
}
