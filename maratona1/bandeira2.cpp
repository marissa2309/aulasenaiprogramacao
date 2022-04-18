#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){


int b;
int km;
float valorcorrida = 0;

cout << "Digite o numero da bandeira < 1 ou 2 > :" << endl;
cin >> b;
cout << "Digite a kilometragem rodada: " << endl;
cin >> km;


      if(b == 1){
        valorcorrida = km * 1.80;
        cout << "O valor da corrida e: " << valorcorrida << endl;
      }
      else{
        valorcorrida = km * 2.30;
        cout << "O valor da corrida e: " << valorcorrida << endl;  
      }
}