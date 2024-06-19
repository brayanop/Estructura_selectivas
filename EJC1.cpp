aprobado o desaprobado

#include <iostream>
using namespace std;
int main() {
    float N1, N2, N3;
    float promedio;
    cout << "Ingrese la primera calificación: ";
    cin >>  N1;
    cout << "Ingrese la segunda calificación: ";
    cin >> N2;
    cout << "Ingrese la tercera calificación: ";
    cin >> N3;
    promedio = (N1+N2+N3) / 3;
    if (promedio >= 70){
        cout << "Aprobado." << endl;
   } Else{
        cout << Desaprobado." << endl;
}
    return 0;
}
