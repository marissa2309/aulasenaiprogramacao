#include <stdio.h>

int main(){

printf("Escola SENAI Euclides Facchini,Votuporanga\n");
printf("Marissa dos Santos Gonçalves\n\n");

int b;
float km,valor;
float taxaminima = 3.50;
int desconto ;

printf("Digite o numero da bandeira <1 ou 2>:\n");
scanf("%d",&b);

printf("Digite a kilometragem rodada:\n");
scanf("%f",&km);

printf("O taxi oferece desconto de 30 < 1 - SIM ou 2 - NAO >");
scanf("%d",&desconto);

if(b == 1){
    valor = 1.80;
}else{
   valor = 2.30;
}

float resultado = km * valor;

if(resultado < taxaminima){
   printf("valor da corrida: %.2f",taxaminima);

}else{
  
   if(desconto == 1){
       printf("O valor da corrida e:%.2f",resultado * 0.70);

   }else{
      printf("valor da corrida: %.2f",resultado);

   }


  }
}