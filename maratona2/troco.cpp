#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){

   float preco, dinheiro, troco; 
   int quantidade;

   cout << "Preco unitario do produto: ";
   cin >> preco;
   cout << "Quantidade comprada: ";
   cin >> quantidade;
   cout << "Dinheiro recebido: ";
   cin >> dinheiro;
   
   troco = dinheiro - (preco * quantidade);
   
   cout << "TROCO = " <<  troco;

}