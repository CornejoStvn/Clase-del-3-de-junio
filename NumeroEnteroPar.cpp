#include <iostream>

using namespace std;

string tipoNumero(int num) 
{
    if (num > 0) {
        return "mayor que cero";
    } else if (num < 0) {
        return "menor que cero";
    } else {
        return "cero";
    }
}


string paridadNumero(int num) 
{
    if (num % 2 == 0) {
        return "par";
    } else {
        return "impar";
    }
}

int main() {
    int numero;

    cout << "Ingrese un numero entero: ";
    cin >> numero;

    string tipo = tipoNumero(numero);
    string paridad = paridadNumero(numero);

    cout << "El numero " << numero << " es " << tipo << " y es " << paridad << "." << endl;

    return 0;
}