#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){

int a,b,a1,b1;
int area1,area2;

cout << "Digite a base do primeiro retangulo em cm:" << endl;
cin  >> a;
cout << "Digite a altura do primeiro retangulo em cm:" << endl;
cin >> b;
cout << "Digite a base do segundo retangulo em cm:" << endl;
cin >> a1;
cout << "Digite a altura do segundo retangulo em cm:" << endl;
cin >> b1;

area1 = b * a;
area2 = b1 * a1;

cout << "A area do primeiro retangulo: " << area1 << endl;
cout << "A area do segundo retangulo : " << area2 << endl;

    if(area1 > area2){
      cout << "A area do primeiro retangulo e maior" ;
    }
    else{
      cout << "A area do segundo retangulo e maior" ;

    }
}