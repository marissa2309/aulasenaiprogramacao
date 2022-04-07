#include <stdio.h>

int main(){

printf("Escola SENAI Euclides Facchini,Votuporanga\n");
printf("Marissa dos Santos Gonçalves\n\n");

int b;
float km,valor;
float taxaminima = 3.50;

printf("Digite o numero da bandeira <1 ou 2>:\n");
scanf("%d",&b);

printf("Digite a kilometragem rodada:\n");
scanf("%f",&km);

if(b == 1){
    valor = 1.80;
}else{
   valor = 2.30;
   
}

float resultado = km * valor;

if(resultado > taxaminima){
   printf("valor da corrida: %.2f",resultado);
}else{
   printf("valor da corrida: %.2f",taxaminima);

}

}