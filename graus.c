#include <stdio.h>

int main(){

printf("Escola SENAI Euclides Facchini,Votuporanga\n");
printf("Marissa dos Santos Gonçalves\n\n");

float c;

printf("Digite a temperatura em  °Celsius:");
scanf("%f",&c);

float temperatura = (c * 1.8 + 32);

printf("A tenperatura em °F e:%.1f\n",temperatura);


}