#include <bits/stdc++.h>

using namespace std;

int main(){
    float nota1, nota2, media;

    cout << "Digite a primeira nota: ";
    cin >> nota1;
    
    while(nota1 < 0 || nota1 > 10){
        cout << "Valor invalido! Tente novamente: ";
        cin >> nota1;
        }

    cout << "Digite a segunda nota: ";
    cin >> nota2;

    while(nota2 < 0 || nota2 > 10){
        cout << "Valor invalido! Tente novamente: ";
        cin >> nota2;
        }

    media = (nota1 + nota2) / 2;
    cout << fixed << setprecision(2);
    cout << "MEDIA = " << media;


}