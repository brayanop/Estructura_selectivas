EJERCICIO 3: descuento de compra
#include <iostream>
using namespace std;
int main() {
    int cantidadCamisa;
    float precio, totalCompra, descuento;
   int Preciofinal;
    cout << "Ingrese la cantidad de camisas compradas: ";
    cin >> cantidadCamisa;
    cout << "Ingrese el precio unitario de cada camisa: S/.";
    cin >> precio;
    totalCompra = cantidadCamisa * precio;
    if (cantidadCamisas >= 3){
        descuento = totalCompra * 0.2;
  } else{
        descuento = totalCompra * 0.1;
}
Preciofinal =totalCompra – descuento;
    cout << "El total a pagar es:" << << endl;
    return 0;
}
