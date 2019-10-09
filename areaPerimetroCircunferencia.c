#include<stdio.h>
#include<stdlib.h>
#define pi 3.14

float getArea(int raio);
int getPerimetro(int raio);

int main(){
	int raio, perimetro;
	float area;
	
	printf("Raio: ");
	scanf("%d", &raio);
	
	area = getArea(raio);
	perimetro = getPerimetro(raio);
	
	printf("\nArea: %2.f", area);
	printf("\nPerimetro: %d", perimetro);
	
}

float getArea(int raio){
	return (pi * (raio * raio));
}

int getPerimetro(int raio){
	return ((pi * 2) * raio);
}
