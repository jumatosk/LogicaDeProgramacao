#include<stdio.h>
#include<stdlib.h>

int getArea(int lado);
int getPerimetro(int lado);

int main(){
	int lado;
	
	printf("Lado: ");
	scanf("%d", &lado);	
	
	printf("\nArea: %d", getArea(lado));
	printf("\nPerimetro: %d", getPerimetro(lado));	
}

int getArea(int lado){
	return lado * lado;
}

int getPerimetro(int lado){
	return lado * 4;
}
