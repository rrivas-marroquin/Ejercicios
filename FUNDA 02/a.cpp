#include <iostream>
using namespace std;

int main()
{

    double consumo, result, conversion = 0.1;

    cout << "ingrese su consumo de luz" << endl;
    cin >> consumo;
    result = consumo * conversion;

    if (result < 100)
    {
        cout << "su tarifa es menor: $" << result << endl;
    }

    else if (result >= 100 && result < 200)
    {
        cout << "su tarifa es media: $" << result << endl;
    }

    else if (result >= 200)
    {
        cout << "su tarifa es alta: $" << result << endl;
    }

    return 0;
}