
#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){

int n,i;
float x,y,divisao;


cout << "Quantos casos voce vai digitar?";
cin >> n;

     for (i = 1 ; i <= n;i++){

          cout << fixed << setprecision(2);  
          cout << "Entre com o numerador: ";
          cin >> x;
          cout << "Entre com o denumerador: ";
          cin >> y;

          if(y == 0){
             cout << " DIVISAO IMPOSSIVEL " ;
          }
          else{
             divisao = x/y;
             cout << "Divisao = " << divisao;
          }
      }
}