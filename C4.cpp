#include <iostream>
#include <string>
using namespace std;

int main() {
    string texto;
    int aux = 0, igual = 0;
    
    cout << "Ingrese el numero o palabra a evaluar: ";
    getline(cin >> ws, texto);
    
    for(int ind = texto.length() - 1; ind >= 0; ind--) {
        if(texto[ind] == texto[aux]) {
            igual++;
        }
        aux++;
    }
    
    if(texto.length() == igual) {
        cout << "\nEl texto evaluado es palindromo" << endl;
    } else {
        cout << "\nEl texto evaluado no es palindromo" << endl;
    }
    
    return 0;
}
