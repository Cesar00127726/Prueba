#include <iostream>
using namespace std;

double saldo = 1000; // saldo inicial

void mostrarSaldo() {
    cout << "Tu saldo actual es: $" << saldo << endl;
}

void depositar() {
    double cantidad;
    cout << "Ingresa la cantidad a depositar: ";
    cin >> cantidad;

    if (cantidad > 0) {
        saldo += cantidad;
        cout << "Deposito exitoso.\n";
    } else {
        cout << "Cantidad invalida.\n";
    }
}

void retirar() {
    double cantidad;
    cout << "Ingresa la cantidad a retirar: ";
    cin >> cantidad;

    if (cantidad <= 0) {
        cout << "Cantidad invalida.\n";
    } else if (cantidad > saldo) {
        cout << "Fondos insuficientes.\n";
    } else {
        saldo -= cantidad;
        cout << "Retiro exitoso.\n";
    }
}

int main() {
    int opcion;

    do {
        cout << "\n=== CAJERO AUTOMATICO ===\n";
        cout << "1. Ver saldo\n";
        cout << "2. Depositar dinero\n";
        cout << "3. Retirar dinero\n";
        cout << "4. Salir\n";
        cout << "Selecciona una opcion: ";
        cin >> opcion;

        switch (opcion) {
            case 1:
                mostrarSaldo();
                break;
            case 2:
                depositar();
                break;
            case 3:
                retirar();
                break;
            case 4:
                cout << "Gracias por usar el sistema.\n";
                break;
            default:
                cout << "Opcion invalida.\n";
        }

    } while (opcion != 4);

    return 0;
}