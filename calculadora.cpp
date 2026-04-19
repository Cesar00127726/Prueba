#include <iostream>
using namespace std;

int main(){
    double num1, num2;
    char operacion;

    cout << "Ingrese el primer numero: ";
    cin >> num1;

    cout << "Ingrese el segundo numeor: ";
    cin >> num2;

    cout << "Ingrese la operacion (+, -, *, /): ";
    cin >> operacion;

    if (operacion == '+') {
        cout << "Resultado: " << num1 + num2;
    }
    else if (operacion == '-') {
        cout << "Resultado: " << num1 - num2;
    }
    else if (operacion ==  '*'){
        cout << "Resultado: " << num1 * num2;
    }
    else if (operacion == '/') {
        cout << "Resultado: " << num1 / num2;
    } else{
        cout << "Error porque no se puede dividir entre 0 xd";    
    }

    return 0;
}