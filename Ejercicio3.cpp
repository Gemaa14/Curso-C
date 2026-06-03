#include <iostream>

using namespace std;

int main() {
    int numero1;
    int numero2;
    
    cout << "Introduce el numero inicial: ";
    cin >> numero1;
    do {
        cout << "Introduce un numero: ";
        cin >> numero2;
        if (numero2 != numero1) {
            if (numero2 < numero1) {
                cout << "El numero es MAYOR que " << numero2 << endl;
            } else {
                cout << "El numero es MENOR que " << numero2 << endl;
            }
        }
        
    } while (numero2 != numero1);
    
    cout << "\nEl numero " << numero2 << " es igual al " << numero1 << "." << endl;
    
    return 0;
}