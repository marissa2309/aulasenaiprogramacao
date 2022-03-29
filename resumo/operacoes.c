# include <stdio.h>

int main(){

 printf("Escola SENAI Euclides Facchini,Votuporanga\n");
 printf("Marissa dos Santos Gonçalves\n\n");

   int primeiro;
   int segundo;


   printf("Digite o primeiro número:");
   scanf("%d",&primeiro);
   printf("Digite o segundo número:");
   scanf("%d", &segundo);
   
   int soma = primeiro + segundo;
   int sub = primeiro - segundo;
   int mult = primeiro * segundo;
   int div = primeiro / segundo;
   double media = (primeiro + segundo)/2.0;
   
   printf("A soma de: %d + %d = %d \n",primeiro,segundo,soma);
   printf("A subtracao de: %d - %d = %d \n",primeiro,segundo,sub);
   printf("O produto de: %d * %d = %d \n",primeiro,segundo,mult);
   printf("A divisao de:%d / %d = %d \n",primeiro,segundo,div);
   printf("A media entre %d e %d :%.2f\n", primeiro,segundo,media);

}
