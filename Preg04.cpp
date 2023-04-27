#include <iostream>
using namespace std;

int main() {
    int n;
    double porcentaje;
    cout << "Ingrese la ganancia de Pablito: ";
    cin >> n;
    if (n >= 0 && n <= 1000) {
        porcentaje = 0.05;
    } else if (n >= 1001 && n <= 1500) {
        porcentaje = 0.07;
    } else if (n >= 1501 && n <= 2000) {
        porcentaje = 0.08;
    } else if (n >= 2001 && n <= 5000) {
        porcentaje = 0.1;
    } else if (n >= 5001) {
        porcentaje = 0.15;
    }
    double resultado = n * porcentaje;
    cout << "El valor de la donacion sera: " << resultado << endl;
    return 0;
}