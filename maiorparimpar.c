#include <stdio.h>

int main(){

printf("Escola SENAI Euclides Facchini,Votuporanga\n");
printf("Marissa dos Santos Gonçalves\n\n");

int numero1;
int numero2;

printf("Digite o primeiro numero:\n");
scanf("%d",&numero1);
printf("Digite o segundo numero:\n");
scanf("%d",&numero2);


if(numero1 > numero2 && numero1 %2 ==0){
   printf("O primeiro numero e maior que o segundo e par\n");  
}
if(numero1 > numero2 && numero1 %2 !=0){
   printf("O primeiro numero e menor que o segundo e impar\n");
}
if(numero1 < numero2 && numero2 %2 ==0){
   printf("O segundo numero e maior que o primeiro e par\n");
}
if(numero1 < numero2 && numero2 %2 !=0){
   printf("O segundo numero e menor que o primeiro e impar\n");
}
}