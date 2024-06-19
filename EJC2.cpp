cantidad a pagar
#include <iostream>
using namespace std;
int main() {
    float totalc, cantidad;
    cout << "Ingrese el monto total de la compra:.";
    cin >> totalc;
    if (totalc> 1000){
        cantidad= totalc* 0.8;
    }else{
        cantidad= totalc;
}
    cout << "El cliente pagará: " << cantidadPagar << endl;
    return 0;
}
