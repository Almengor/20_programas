#include <iostream>

float base;
float altura;
float resultado;
using namespace std;

int main(){

cout << "Ingrese la base del triangulo: ";
cin >> base;

cout << "Ingrese la altura del triangulo: ";
cin >> altura;

resultado=(base*altura)/2; 
cout << "El area de su triangulo es: " << resultado << endl;

cin.ignore();
cin.get();
}



