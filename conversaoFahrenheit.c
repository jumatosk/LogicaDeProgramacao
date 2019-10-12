#include<stdio.h>
#include<stdlib.h>

float getCelsius(float temperatura);

int main(){
	float fahrenheit;
	float celsius;
	printf("Insira a temperatura em fahrenheit");
	scanf("%f", &fahrenheit);

	printf("\nTemperatura em celsius = %.2f\n", getCelsius(fahrenheit));
}

float getCelsius(float temperatura){
	return ((temperatura - 32) * 5 / 9);
}