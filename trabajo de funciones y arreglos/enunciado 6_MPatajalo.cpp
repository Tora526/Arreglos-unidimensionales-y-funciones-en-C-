/*Arreglo que permite el almacenamiento de varios valores enteros e inplementando
una funsion para la obtencion de numeros pares*/
#include <iostream>
using namespace std;

int contarPares(int tab[], int can) {
    int contador = 0;
    for (int i = 0; i < can; i++) {
        if (tab[i] % 2 == 0) {   
            contador++;
        }
    }
    return contador;
}

int main() {
    int numeros[5];   

    cout << "Ingrese 5 numeros enteros:" << endl;
    for (int i = 0; i < 5; i++) {
        cin >> numeros[i];
    }

    int cantidadPares = contarPares(numeros, 5);

    cout << "La cantidad de numeros pares es: " << cantidadPares << endl;

    return 0;
}

