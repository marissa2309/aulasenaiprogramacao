#include <stdio.h>

int main(){

printf("Escola SENAI Euclides Facchini,Votuporanga\n");
printf("Marissa dos Santos Gonçalves\n\n");

int a;
int b;
double soma = 0;
printf("De quantos numeros voce desseja calcular a media:");
scanf("%d",&a);

for(int i = 1; i <= a;i++){
    printf("Digite um dos numeros: ");
    scanf("%d",&b);
    soma = soma + b;
}
 double media = soma/a;
 printf("A media do numeros fornecido e:%.1f",media);

}