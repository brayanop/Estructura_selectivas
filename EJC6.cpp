// anio bisisesto
#include<bits/stdc++.h>
using namespace std;
int main(){
	int anio;
	cout<<"Ingrese el anio:"<< endl;
	cin>> anio;
	if (anio%4==0 && anio%100!=0 ){
		cout << " bisiesto" ;
	} else if (anio%400==0){
		cout << "bisiesto";
	} else {
		cout << "No es bisiesto";
	}
	return 0;
}
