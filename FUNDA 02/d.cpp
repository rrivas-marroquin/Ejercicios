#include <iostream>
using namespace std;

int main()
{
    int mes;

    cout << " Ingrese el numero de un mes (Enero = 1 ; Febrero = 2 ; etc...)" << endl;
    cin >> mes;

    switch (mes)
    {
    case 1:
        cout << " Enero tiene 31 dias" << endl;
        break;

    case 2:
        cout << " Febrero tiene 28 dias" << endl;
        break;

    case 3:
        cout << " Marzo tiene 31 dias" << endl;
        break;
    case 4:
        cout << " Abril tiene 30 dias" << endl;
        break;
    case 5:
        cout << " Mayo tiene 31 dias" << endl;
        break;
    case 6:
        cout << " Junio tiene 30 dias" << endl;
        break;
    case 7:
        cout << " Julio tiene 31 dias" << endl;
        break;
    case 8:
        cout << " Agosto tiene 31 dias" << endl;
        break;
    case 9:
        cout << " Septiembre tiene 30 dias" << endl;
        break;
    case 10:
        cout << " Octubre tiene 31 dias" << endl;
        break;
    case 11:
        cout << " Noviembre tiene 30 dias" << endl;
        break;
    case 12:
        cout << " Diciembre tiene 31 dias" << endl;
        break;

    default:
        cout << "Ingrese un numero de entre 1 a 12." << endl;
        break;
    }

    return 0;
}