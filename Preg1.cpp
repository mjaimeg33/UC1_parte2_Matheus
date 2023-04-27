#include <iostream>

int main() {
    // Inicializamos las variables
    int A = 8;
    int B = 9;

    // Imprimimos los valores originales
    std::cout << "Antes del intercambio:" << std::endl;
    std::cout << "A = " << A << std::endl;
    std::cout << "B = " << B << std::endl;

    // Intercambiamos los valores
    int temp = A;
    A = B;
    B = temp;

    // Imprimimos los nuevos valores
    std::cout <<"Intercambio:" << std::endl;
    std::cout << "A = " << A << std::endl;
    std::cout << "B = " << B << std::endl;

    return 0;
}