#include<stdio.h>
#include<stdlib.h>

int getPerimetro(int base, int altura);
int getArea(int base, int altura);
int main(){
	int base, altura;
	int area;
	int perimetro;
	
	printf("Base: ");
	scanf("%d", &base);
	printf("\nAltura: ");
	scanf("%d", &altura);
	
	perimetro = getPerimetro(base, altura);
	area = getArea(base, altura);
	
	printf("\nPerimetro = %d", perimetro);
	printf("\nArea = %d", area);
};

int getPerimetro(int base, int altura){
	return ((2 * base) + (2 * altura));
}

int getArea(int base, int altura){
	return (base * altura);
}
