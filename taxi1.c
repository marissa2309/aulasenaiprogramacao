#include <stdio.h>


int main(){

printf("Escola SENAI Euclides Facchini,Votuporanga\n");
printf("Marissa dos Santos Gonçalves\n\n");

int b;
int km;
float valorcorrida = 0;

printf("Digite o numero da bandeira <1 ou 2>:\n");
scanf("%d",&b);
printf("Digite a kilometragem rodada:\n");
scanf("%d",&km);

if(b == 1){
  valorcorrida = km * 1.80;
  printf("O valor da corrida e: %.2f\n",valorcorrida);
  
}else{
  valorcorrida = km * 2.30;
  printf("O valor da corrida e: %.2f\n",valorcorrida);

   }
}

