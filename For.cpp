#include <iostream>
using namespace std;

int main (){
int n;
int nnv;

    cout << "de q tamano quiere el arreglo" << endl;
    cin >> n;

    float nota [n];

    for (int i = 0; i < n; i++)
    {
        cout << "ingrese sus notas" << endl;
        cin >> nnv;
        if (nnv >= 5.9)
        {
            nota [i] = nnv;
        }
        else 
        {
            i--;
        }
    }

    cout << "Estas son sus notas: \n";
    for (int i = 0; i < n ; i++)
    {
        cout << nota[i];
    }
    

    return 0;
}