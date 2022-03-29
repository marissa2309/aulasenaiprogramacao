#include <stdio.h>

int main(){

printf("Escola SENAI Euclides Facchini,Votuporanga\n");
printf("Marissa dos Santos Gonçalves\n\n");

int numero1;
int numero2;


printf("Voce devera digitar dois numeros inteiros diferentes");
printf("Digite o primeiro numero:\n");
scanf("%d",&numero1);
printf("Digite o segundo numero:\n");
scanf("%d",&numero2);

int difernca = numero1 - numero2;

printf("A diferenca do maior pelo menor numero e:%d",difernca);

}