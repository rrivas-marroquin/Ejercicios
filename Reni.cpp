#include <iostream>
using namespace std;

int main ()
{
    double numero1, numero2;
    int operaciones;

    cout << endl << "Operaciones Matematicas" <<endl << endl;
    cout << "1- Sumar" << endl;
    cout << "2- Restar"<< endl;
    cout << "3- Multiplicar" << endl;
    cout << "4- Dividir" << endl;
    cout << "5- Salir" << endl; 
    cout << "Ingresar la operacion: ";
  
    cin >> operaciones;

  
    

    switch (operaciones){
    case 1:
    cout << "Ingresar el primer numero: "; 
    cin >> numero1;

    
    cout << "Ingresar el segundo numero: ";
    cin >> numero2;

    cout << " respuesta: " << numero1 + numero2 << endl;
    break;
    case 2:
    cout << "Ingresar el primer numero: "; 
    cin >> numero1;

    
    cout << "Ingresar el segundo numero: ";
    cin >> numero2;
    cout << "respuesta: " << numero1 - numero2 << endl;
    break;
    case 3:
    cout << "Ingresar el primer numero: "; 
    cin >> numero1;

    
    cout << "Ingresar el segundo numero: ";
    cin >> numero2;
    cout << " respuesta: " << numero1 * numero2 << endl;
    break;
    case 4:
    cout << "Ingresar el primer numero: "; 
    cin >> numero1;

    cout << "Ingresar el segundo numero: ";
    cin >> numero2;
    if (numero2 != 0)
    cout << " respuesta: " << numero1 / numero2 << endl;
        else
        cout << "No se puede divir entre 0" << endl;
    break;
    case 5:
    cout << "Saliendo" << endl;
    break;

default: 
        cout << "Sintax error" << endl;

    }
    return 0;
}