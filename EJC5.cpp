numero de pulsaciones

#include <iostream>
using namespace std;
int main() {
    char sexo;
    int edad;
    float numPul;
    cout << "Ingrese el sexo M o F: ";
    cin >> sexo;
    cout << "Ingrese la edad: ";
    cin >> edad;
    if (sexo == 'M'){
        numPul = (210 - edad) / 10;
       } else if (sexo == 'F' ){
        numPul= (220 - edad) / 10;
       }
    cout << "El número de pulsaciones es " << numPul;
    return 0;
}
