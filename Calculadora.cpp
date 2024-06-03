#include <iostream>
using namespace std;

int suma (int x, int y )
{
    return x+y;
}
int resta (int x, int y)
{
    return x-y;
}
int multiplicacion (int x, int y)
{
    return x*y;
}
float division (float x, float y)
{
    return x/y;
}
int main (){
    int num1, num2, opc;
    cout << "CALCULADORA CONVENCIONAL\n";
    cout << "Ingrese un numero entero a=\n";
    cin >> num1;

    cout << "Ingrese otro numero entero b= ";
    cin >> num2;

cout << "Elija que opcion desea: \n\t 1.Sumar\n\t 2.restar\n\t 3.Multiplicacion\n\t 4.Division\n\t  Otro numero: salir\n";
cout << "Su opcion es :";
cin >> opc;

switch (opc)
{
    case 1: 
    cout << "Opcion sumar "<< num1 << "+"<< num2 << "es" << suma (num1,num2);
    break;

    case 2: 
    cout << "Opcion resta "<< num1 << "-"<< num2 << "es" << resta (num1,num2);
    break;

    case 3: 
    cout << "Opcion multiplicacion "<< num1 << "*"<< num2 << "es" << multiplicacion (num1,num2);
    break;

    case 4: 
    cout << "Opcion dividir  "<< num1 << "/"<< num2 << "es" << division (num1,num2);
    break;

    default:
    cout << "No hay nada, bye";
    break;
}
return 0;

}
