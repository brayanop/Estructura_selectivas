#include <iostream>
using namespace std;
int factorial(int n){
    if(n == 0 || n == 1){
        return 1;
    } else {
        return n*factorial(n-1);
    }
}

int main() {
    int num ;
    cout<<"Ingrese el numero :"<< endl;
    cin >> num ;
    int fact = factorial(num);
    cout << "El factorial "<< num << " es :"<< fact;
    return 0;
}
