descuento por un numero ingresado por el usuario

#include <iostream>
using namespace std;
int main() {
    float Compra, descuento;
    int num;
    cout << "Ingrese el monto total de la compra: S/.";
    cin >> Compra;

    cout << "Ingrese el número aleatorio escogido: ";
    cin >> num;
    if (num < 74){
        descuento = Compra * 0.15;
    }else{
        descuento = Compra * 0.2;
}
    cout << "El descuento aplicado es: " << descuento << endl;
    return 0;
}
