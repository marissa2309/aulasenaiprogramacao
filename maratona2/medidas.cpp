#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){

 float   a, b, c, areaQuadrado, areaTriangulo, areaTrapezio ;



    cout << "Digite a medida A: " ;
    cin >> a;
    cout << "Digite a medida B: " ;
    cin >> b;
    cout << "Digite a medida C: " ;
    cin >> c;

    areaQuadrado = a * a;
    areaTriangulo = a * b / 2;
    areaTrapezio = a + b / 2 * c;

    cout << "QUADRADO = "  << areaQuadrado << endl;
    cout << "TRIANGULO = " << areaTriangulo << endl;
    cout << "TRAPEZIO = " << areaTrapezio << endl;
    
}
