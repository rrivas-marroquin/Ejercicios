#include <iostream>
using namespace std;

int main() {
    float billetera = 100;
    int menu_del_dia, menu_de_manana, menu_de_la_tarde, edad;
    float restante;



    cout << ".........Mac Menu.........." << endl;
    cout << "........1 Ma;anero.........." << endl;
    cout << "........2 Tarde............" << endl;
    cout << "........3 Salir............" << endl;
    cout << ".....Que menu quiere??....." << endl;
    cin >> menu_del_dia;


    switch (menu_del_dia){
        case 1:
        cout << "....MA;ANERO...." << endl;
        cout << "..1- Mac-muffin...  5$" << endl;
        cout << "...2- Hotcakes....  4$" << endl;
        cout << ".....3- Papas.......  3$" << endl;
        cout << ".... Que mas le puedo ofrecer??....." << endl;
        cin >> menu_de_manana;
        break;

        switch (menu_de_manana){
            case 1:
                cout << "Selecciono un Mac-muffin" << endl;
                restante = billetera - 5;
                cout << "Su saldo actual es de:" << restante << endl;
            break;

            case 2:
                cout << "Selecciono un Hotcakes" << endl;
                restante = billetera - 4;
                cout << "Su saldo actual es de:" << restante << endl;
            break;

            case 3:
                cout << "Selecciono un Papas" << endl;
                restante = billetera - 3;
                cout << "Su saldo actual es de:" << restante << endl;
            break;

            default:
                cout << "Introduzca un numero valido" << endl;
            break;
        }
    case 2:
        cout << "...........Tarde..........." << endl;
        cout << ".....1- Cheese Burger........ 4.99$" << endl;
        cout << ".....2- Double Bacon.............. 3.99$" << endl;
        cout << ".....3- Mac goffin.............. 6.99$" << endl;
        cout << ".....4- Big mac................... 5.99$" << endl;
        cout << ".....5- Cajita feliz...............99.99$ " << endl;
        cout << "..... Que mas le puedo ofrecer??........" << endl;
        cin>> menu_de_la_tarde;

    switch (menu_de_la_tarde){
        case 1:
            cout << "Selecciono una Cheese burger" << endl;
            restante = billetera - 4.99;
            cout << "Su saldo actual es de" << restante << endl;
        break;

        case 2:
            cout << "Double Bacon" << endl;
            restante = billetera - 3.99;
            cout << "Su saldo actual es de" << restante << endl;
        break;

        case 3:
            cout << "Mac goffin" << endl;
            restante = billetera - 6.99;
            cout << "Su saldo actual es de" << restante << endl;
        break;

        case 4:
            cout << "Bic mac" << endl;
            restante = billetera - 5.99;
            cout << "Su saldo actual es de" << restante << endl;
        break;

        case 5:
            cout << "Cajita feliz" << endl;
            cout << "ingrese su edad" << endl;
        cin >> edad;
        if (edad >= 0 && edad <= 7) {
                restante = billetera - 99.99;
                cout << "Se aplico el precio normal de la cajita feliz: Su poket tiene " << restante << endl;
            } else if (edad >= 8 && edad <= 14){
                restante = billetera - (2 * 99.99);
                cout << "Se le aplico el aumento de precio a su compra, debido a su edad: su poket tiene " << restante << endl;
            } else if (edad >= 15 && edad <= 18){
                restante = billetera - (99.99 * 3);
                cout << "Se aplico el super aumento de precio a su cajita feliz, debido a su edad: su poket tiene " << restante << endl;
            } else if (edad >= 19) {
                cout << "busque laburo mejor"  << endl;
            }
        break;

        default:
            cout << "Introduzca un numero valido" << endl;
        break;
    return 0;

}
}
}