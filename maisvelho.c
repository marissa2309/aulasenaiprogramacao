#include <stdio.h>

int main(){

printf("Escola SENAI Euclides Facchini,Votuporanga\n");
printf("Marissa dos Santos Gonçalves\n\n");

int Pedro;
int Ismael;
int Joana;

printf("Digite a idade de Pedro:");
scanf("%d",&Pedro);
printf("Digite a idade de Ismael:");
scanf("%d",&Ismael);
printf("Digite a idade de Joana:");
scanf("%d",&Joana);

if(Pedro > Ismael && Pedro > Joana){
   printf("Pedro e o mais velho dentre os tres");
}
if( Joana > Pedro && Joana > Ismael ){
   printf("Joana e o mais velho dentre os tres");
}
if(Ismael > Pedro &&  Ismael > Joana){
   printf("Ismael e a mais velha dentre os tres");   
}

}


