 // Dados 3 longitudes diga si pueden formar un triangulo. Recuerde “En todo triangulo, cada
lado es menor que la suma de los otros dos, pero mayor que su diferencia”
#include <bits/stdc++.h>
using namespace std;
int main(){
    float a, b, c;
    cout << " EXISTENCIA DE UN TRIANGULO" << endl;
    cout << " a-b < c < a+b" << endl;
    cout << " Ingrese la base :" << endl;
    cin >> c;
    cout << " Ingrese los 2 lados :" << endl;
    cin >> a >> b;
    if (a-b < c && c < a+b) {
        cout << "El triangulo si existe" ;
    } else {
        cout << "El triangulo no si existe" ;
    }
    return 0;
}
