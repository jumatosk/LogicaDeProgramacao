#include<stdio.h>
#include<stdlib.h>
#define pi 3.14

float getArea(int raio);
int getPerimetro(int raio);

int main(){
	int raio;
		
	printf("Raio: ");
	scanf("%d", &raio);
	
	printf("\nArea: %2.f", getArea(raio));
	printf("\nPerimetro: %d", getPerimetro(raio));
	
}

float getArea(int raio){
	return (pi * (raio * raio));
}

int getPerimetro(int raio){
	return ((pi * 2) * raio);
}
