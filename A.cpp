#include <iostream>
using namespace std;


 int main() {
     int numero_entero;
    cout << "digite un numero entero: " << endl;
    cin >> numero_entero;
    
    
    for (int i = 1; i <= 20; i++)
    {
        cout << numero_entero << " * " << i << "=" << numero_entero * i << endl;
    }
    return 0;
 }