/* Creacion de un arreglo obteniendo el resultado sin mostrar 
ningun cambio en el arreglo original.*/
#include <iostream>
using namespace std;

void multiplicarArreglo(int arr[], int tam, int multiplicador) {
    cout << "Resultados de la multiplicacion: ";
    for (int i = 0; i < tam; i++) {
        cout << arr[i] * multiplicador << " ";
    }
    cout << endl;
}

int main() {
    int numeros[5];  
    int multiplicador;

    cout << "Ingrese 5 numeros enteros:" << endl;
    for (int i = 0; i < 5; i++) {
        cin >> numeros[i];
    }

    cout << "Arreglo original: ";
    for (int i = 0; i < 5; i++) {
        cout << numeros[i] << " ";
    }
    cout << endl;

    cout << "Ingrese el numero multiplicador: ";
    cin >> multiplicador;

    multiplicarArreglo(numeros, 5, multiplicador);

    cout << "Arreglo original despues de la funcion: ";
    for (int i = 0; i < 5; i++) {
        cout << numeros[i] << " ";
    }
    cout << endl;

    return 0;
}

