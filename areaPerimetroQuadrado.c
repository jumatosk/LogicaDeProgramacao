#include<stdio.h>
#include<stdlib.h>

int getArea(int lado);
int getPerimetro(int lado);

int main(){
	int lado;
	int area;
	int perimetro;
	
	printf("Lado: ");
	scanf("%d", &lado);	
	
	perimetro = getPerimetro(lado);
	area = getArea(lado);
	
	printf("\nArea: %d", area);
	printf("\nPerimetro: %d", perimetro);	
}

int getArea(int lado){
	return lado * lado;
}

int getPerimetro(int lado){
	return lado * 4;
}
