#include <iostream>
#include <string>

using namespace std;

struct Cliente {
    string nombreCompleto;
    char sexo;
    int edad;
    string numeroTelefono;
};

int main() {
    Cliente clientes[4];

    for(int i = 0; i < 4; i++) {
        cout << "Ingrese el nombre completo del cliente " << i+1 << ": ";
        getline(cin, clientes[i].nombreCompleto);
        cout << "Ingrese el sexo del cliente " << i+1 << " (M/F): ";
        cin >> clientes[i].sexo;
        cout << "Ingrese la edad del cliente " << i+1 << ": ";
        cin >> clientes[i].edad;
        cin.ignore();
        cout << "Ingrese el número de teléfono del cliente " << i+1 << ": ";
        getline(cin, clientes[i].numeroTelefono);
    }
    
    int menorEdad = clientes[0].edad;
    int indiceMenorEdad = 0;

    for(int i = 1; i < 4; i++) {
        if(clientes[i].edad < menorEdad) {
            menorEdad = clientes[i].edad;
            indiceMenorEdad = i;
        }
    }

    cout << "El cliente con la menor edad es: " << clientes[indiceMenorEdad].nombreCompleto << endl;

    return 0;
}

