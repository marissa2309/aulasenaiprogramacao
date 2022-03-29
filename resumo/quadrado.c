# include <stdio.h>

int main(){

 printf("Escola SENAI Euclides Facchini,Votuporanga\n");
 printf("Marissa dos Santos Gonçalves\n\n");

int lado;

printf("Digite o tamanho do lado:");
scanf("%d",&lado);


int area = lado * lado;
int perimetro = lado * 4;

printf("A area do quadrado é:%d \n",area);
printf("O perimetro do quadrado é:%d \n",perimetro);

    }