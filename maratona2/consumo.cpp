#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){

float distancia,combustivel,consumo;

cout<<fixed<<setprecision(2);
cout << "Distancia percorrida: ";
cin >> distancia;
cout << "Combustivel gasto: ";
cin >> combustivel;

consumo = distancia/combustivel;

cout << "Consumo medio = " << consumo;

return 0;
}