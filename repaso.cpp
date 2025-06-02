#include <iostream>
using namespace std;

int main() {
    float billetera = 100;
    int menudeldia, menudemanana, edad;
    float restante;

    cout << ".........Mac Menu........." << endl;
    cout << "1- Mañanero" << endl;
    cout << "2- Tarde" << endl;
    cout << "3- Noche" << endl;
    cout << "4- Salir" << endl;
    cout << "¿Qué menú quiere? ";
    cin >> menudeldia;

    switch (menudeldia) {
        case 1:
            cout << "MAÑANERO" << endl;
            cout << "1- Mac-muffin  5$" << endl;
            cout << "2- Hotcakes    4$" << endl;
            cout << "3- Papas       3$" << endl;
            cout << "4- Cajita feliz 3$" << endl;
            cout << "¿Qué desea ordenar? ";
            cin >> menudemanana;

            switch (menudemanana) {
                case 1:
                    cout << "Seleccionó un Mac-muffin" << endl;
                    restante = billetera - 5;
                    cout << "Su saldo actual es: $" << restante << endl;
                break;

                case 2:
                    cout << "Seleccionó unos Hotcakes" << endl;
                    restante = billetera - 4;
                    cout << "Su saldo actual es: $" << restante << endl;
                break;

                case 3:
                    cout << "Seleccionó unas Papas" << endl;
                    restante = billetera - 3;
                    cout << "Su saldo actual es: $" << restante << endl;
                break;

                case 4:
                    cout << "Seleccionó una Cajita Feliz" << endl;
                    cout << "Ingrese su edad: ";
                    cin >> edad;

                    if (edad >= 0 && edad <= 7) {
                        restante = billetera - 3;
                        cout << "Precio normal aplicado. Su saldo actual es: $" << restante << endl;
                    } else if (edad > 7 && edad <= 14) {
                        restante = billetera - (3 * 2);
                        cout << "Precio doble aplicado. Su saldo actual es: $" << restante << endl;
                    } else if (edad > 14 && edad < 18) {
                        restante = billetera - (3 * 3);
                        cout << "Precio triple aplicado. Su saldo actual es: $" << restante << endl;
                    } else if (edad >= 18 && edad <= 80) {
                        cout << "Lo sentimos, usted no puede comprar la Cajita Feliz." << endl;
                    } else {
                        cout << "Edad no válida." << endl;
                    }
                break;

                default:
                    cout << "Opción no válida." << endl;
                break;
            }
            break;

        default:
            cout << "Opción de menú no válida o no implementada." << endl;
        break;
    }

    return 0;
}