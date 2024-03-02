#include <iostream>
using namespace std;

int main() {
    char opcion = 's';
    int a=50;
    int b=50;
    while (opcion == 's' || opcion == 'S') {
        cout << "Desea Saber numeros pares o Impares? (P/I) : ";
        cin >> opcion;
        if (opcion == 'p' || opcion == 'P' ) {
            cout << "Los numeros Pares haste 50 son: " << endl;
            for (int i = 2; i < a; i += 2) cout << i << endl;
        } if (opcion == 'i' || opcion == 'I' ) {
            cout << "Los numeros Impares haste 50 son: " << endl;
            for (int i = 1; i < b; i += 2) cout << i << endl;
        }do {
            cout << "Desea ingresar otro numero? (S/N) : ";
            cin >> opcion;
        } while (opcion != 's' && opcion != 'S' && opcion != 'n' && opcion != 'N');

    }
    return 0;
}
