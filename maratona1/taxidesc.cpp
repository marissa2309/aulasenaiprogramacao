#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){


int b;
float km,valor;
float taxaminima = 3.50;
int desconto ;

cout << "Digite o numero da bandeira < 1 ou 2 > :" << endl;
cin >> b;
cout << "Digite a kilometragem rodada: " << endl;
cin >> km;

cout << "O taxi oferece desconto de 30 < 1 - SIM ou 2 - NAO >" << endl;
cin >> desconto;

if(b == 1){
    valor = 1.80;
}else{
   valor = 2.30;
}

float resultado = km * valor;

     if(resultado < taxaminima){
         cout << "valor da corrida:" << taxaminima << endl;

      }
      
   if(desconto == 1){
       cout << "O valor da corrida e: " << resultado * 0.70;

   }
   else{
      cout << "valor da corrida: " << resultado;

   }


}