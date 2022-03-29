# include <stdio.h>

int main(){

 printf("Escola SENAI Euclides Facchini,Votuporanga\n");
 printf("Marissa dos Santos Gonçalves\n\n");

int numero1;
int numero2;

printf("Digite o primeiro numero:\n");
scanf("%d",&numero1);
printf("Digite o segundo numero:\n");
scanf("%d",&numero2);

for(int i = numero1; i<= numero2;i++){
  if(i % 2 == 0){
  printf("O par e :%d\n",i);

       }
   }
}