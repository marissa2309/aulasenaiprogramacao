# include <stdio.h>
# include <stdlib.h>

int main(){


printf("Escola SENAI Euclides Facchini,Votuporanga ");
printf("Marissa dos Santos Gonçalves\n\n");

 int i;
   printf("Digite um numero para ver sua tabuada:\n");
   scanf("%d",&i);
   for(int multiplicador = 1;multiplicador <= 10; multiplicador++){
   int conta = (multiplicador * i);
   printf("%d x %d = %d \n",multiplicador,i,conta);

   }
}