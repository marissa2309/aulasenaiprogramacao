#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){

int n,x,i,dentro,fora;

dentro = 0;
fora = 0;

cout << "Quantos numeros voce vai digitar? ";
cin >> n;

     for( i < 1; 1 <= n ;i++){
         cout << "Digite um numero";
         cin >> x;
         
         if(x >= 10 && x <= 20){
             dentro = dentro + 1;
         }else{
             fora = fora + 1;
         }
    }
    cout << "Dentro" << dentro;
    cout << "Fora" << fora;
}