#include <stdio.h>

int main(){

printf("Escola SENAI Euclides Facchini,Votuporanga\n");
printf("Marissa dos Santos Gonçalves\n\n");

int a;
float nota,notamaior = 0,notamenor = 10;
float soma = 0;

printf("De quantos numeros voce desseja calcular a media:");
scanf("%d",&a);

for(int i = 0; i < a; i++){
    printf("Nota:");
    scanf("%f",&nota);

    soma = soma + nota;

    if(nota > notamaior){
      notamaior = nota;
    }
    if(nota < notamenor){
      notamenor = nota;

    }
}
 
 double media = soma/a;

 printf("A soma das notas:%.1f\n",soma);
 printf("A media das notas:%.1f\n",media);
 printf("A maior nota e:%.1f\n",notamaior);
 printf("A menor nota e:%.1f\n",notamenor);
}
