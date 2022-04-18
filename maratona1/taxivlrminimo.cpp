#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){


int b;
float km,valor;
float taxaminima = 3.50;

cout << "Digite o numero da bandeira < 1 ou 2 > :" << endl;
cin >> b;
cout << "Digite a kilometragem rodada: " << endl;
cin >> km;

if(b == 1){
    valor = 1.80;
}else{
   valor = 2.30;
   
}

float resultado = km * valor;

    if(resultado > taxaminima){
       cout << "valor da corrida: " << resultado << endl;
    }
    else{
       cout << "valor da corrida: " << taxaminima << endl;
    }
}