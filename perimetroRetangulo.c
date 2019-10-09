#include<stdio.h>
#include<stdlib.h>

int getPerimetro(int base, int altura);
int getArea(int base, int altura);
int main(){
	int base, altura;
	
	printf("Base: ");
	scanf("%d", &base);
	printf("\nAltura: ");
	scanf("%d", &altura);
	
	printf("\nPerimetro = %d", getPerimetro(base, altura));
	printf("\nArea = %d", getArea(base, altura));
};

int getPerimetro(int base, int altura){
	return ((2 * base) + (2 * altura));
}

int getArea(int base, int altura){
	return (base * altura);
}
