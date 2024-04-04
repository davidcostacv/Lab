#include <iostream>
#include <string>
#include <algorithm>

bool esPalindromo(std::string cadena) {
    std::string cadenaInvertida = cadena;
    std::reverse(cadenaInvertida.begin(), cadenaInvertida.end());

    if (cadena == cadenaInvertida) {
        return true;
    } else {
        return false;
    }
}

int main() {
    std::string palabra;
    std::cout << "Ingrese una palabra: ";
    std::cin >> palabra;

    if (esPalindromo(palabra)) {
        std::cout << "La palabra es un palíndromo" << std::endl;
    } else {
        std::cout << "La palabra no es un palíndromo" << std::endl;
    }

    return 0;
}
