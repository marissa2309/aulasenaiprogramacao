# include <stdio.h>

int main(){
    
printf("Escola SENAI Euclides Facchini,Votuporanga\n");
printf("Marissa dos Santos Gon�alves\n\n");

int casosSuspeitos;
int casosConfirmados;
int quantidadeDeMorte;


printf("Informa��es sobre a dengue em :\n");
printf("Casos Suspeitos:\n");
scanf("%d",&casosSuspeitos);
printf("Casos Confirmados:\n");
scanf("%d",&casosConfirmados);
printf("Quantidade de Morte:\n");
scanf("%d",&quantidadeDeMorte);
int total = casosSuspeitos + casosConfirmados + quantidadeDeMorte;
printf("Total de dados: %d \n",total);

}
