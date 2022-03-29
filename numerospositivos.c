#include <stdio.h>

int main(){

int numero;

printf("Escola SENAI Euclides Facchini,Votuporanga\n");
printf("Marissa dos Santos Gonçalves\n\n");

printf("Digite um numero inteiro positivo:");
scanf("%d",&numero);
printf("Os numeros impares menores que %d sao:",numero);

for(int i = 1;i <= numero;i++){
    if(i %2 != 0){
       printf("%d ",i);
    }
  }
}