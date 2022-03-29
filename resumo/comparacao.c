# include <stdio.h>


int main(){

printf("Escola SENAI Euclides Facchini,Votuporanga\n");
printf("Marissa dos Santos Gonçalves\n\n");

int idadeA;
int idadeB;

printf("Insira a idade de Pedro:\n");
scanf("%d\n",&idadeA);
printf("Insira a idade de Joana:\n");
scanf("%d\n",&idadeB);

int f = 1;

if(idadeA < idadeB){
printf("Joana e mais velha que:%d",idadeA);

 }else if (idadeA > idadeB){
 printf("Pedro e mais velho que:%d",idadeB);

}

else{
f = 0;
printf("Os dois tem a mesma idade:\n");

}

}
