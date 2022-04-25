#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){

float x,y;

cout << "Digite dois numeros: " ;
cin >> x;
cin >> y;

     while(x != y ){
 
           if (x < y){
           cout << "Crescente!";
           }else{
           cout << "Decrescente!";
           }
     
     cout<<fixed<<setprecision(2);     
     cout << "Digite outros dois numeros" << endl;
     cin >> x;
     cin >> y;
     }

}