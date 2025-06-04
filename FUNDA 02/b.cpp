#include <iostream>
using namespace std;

int main()
{
    int n1;

    cout << "ingrese un numero NATURAL" << endl;
    cin >> n1;

    for (double i = 1; i < 11; i++)
    {
        cout << "La suma de los primeros 10 numeros NATURALES con su numero es de : " << n1 + i << endl;
    }

    return 0;
}