#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){

int a;
float nota,notamaior = 0,notamenor = 10;
float soma = 0;

cout << "De quantos numeros voce desseja calcular a media:" << endl;
cin >> a;

   for(int i = 0; i < a; i++){
       cout <<  "Nota:" << endl;
       cin >> nota;
   }

  
   soma = soma + nota;

    if(nota > notamaior){
      notamaior = nota;
    }
    if(nota < notamenor){
      notamenor = nota;

    }

    double media = soma/a;
 
 cout << "A soma das notas: " << soma << endl;
 cout << "A media das notas: " << media << endl;
 cout << "A maior nota e: " << notamaior << endl;
 cout << "A menor nota e: " << notamenor << endl;

}
 




