/*Funciones dentro de un almacenamiento de numeros en un
 arreglo obteniendo el valor mas alto dentro de este mismo*/
#include <iostream>
using namespace std;

void encontrarMayor(int arr[], int x, int &mayor) {
    mayor = arr[0]; 
    for (int i = 1; i < x; i++) {
        if (arr[i] > mayor) {
            mayor = arr[i];
        }
    }
}

int main() {
    const int Can = 5;   
    int numeros[Can];
    int mayor;

    cout << "Ingrese " << Can << " numeros enteros:" << endl;
    for (int i = 0; i < Can; i++) {
        cin >> numeros[i];
    }

    encontrarMayor(numeros, Can, mayor);

    cout << "El valor mayor del arreglo es: " << mayor << endl;

    return 0;
}

