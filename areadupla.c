#include <stdio.h>


int main(){

printf("Escola SENAI Euclides Facchini,Votuporanga\n");
printf("Marissa dos Santos Gonçalves\n\n");

int a;
int b;

int a1;
int b1;

printf("Digite a base do primeiro retangulo em cm:");
scanf("%d",&a);
printf("Digite a altura do primeiro retangulo em cm:");
scanf("%d",&b);
printf("Digite a base do primeiro retangulo em cm:");
scanf("%d",&a1);
printf("Digite a altura do primeiro retangulo em cm:");
scanf("%d",&b1);

int contas = a * b;
int contas1 = a1 * b1;

printf("A area do primeiro retangulo,%d\n",contas);
printf("A area do segundo retangulo:%d\n",contas1);

if(contas<contas1){
   printf("A area do primeiro retangulo e maior");


}
if(contas>contas1){
   printf("A area do segundo retangulo e maior");

}

if(contas==contas1){
   printf("A area dos dois retangulos sao iguais");

     }
   
}