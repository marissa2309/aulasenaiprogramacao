#include <stdio.h>

int main(){

printf("Escola SENAI Euclides Facchini,Votuporanga\n");
printf("Marissa dos Santos Gonçalves\n\n");

int aluno,aluna;

   printf("Digite a quantidade de alunos:");
   scanf("%d",&aluno);
   printf("Digite a quantidade de alunas:");
   scanf("%d",&aluna);

  if(aluno >aluna){
    printf("Exitem mais alunos do que alunas");
  }else{
    printf("Existem mais alunas do que alunos");
  }
}