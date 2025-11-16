//Crecion de un arreglo de 5 numeros aplicando una funcion de referencia y tambien calculando la suma de sus elementos.
//Arreglo que permita el almacenamiento de varios numeros mediante una funcion de referencia.
#include <iostream>
using namespace std;

void calcularSuma(int arr[], int tam, int &suma) {
    suma = 0; 
    for (int i = 0; i < tam; i++) {
        suma += arr[i];
    }
}

void eliminarDato(int arr[], int &tam, int valor) {
    bool encontrado = false;
    for (int i = 0; i < tam; i++) {
        if (arr[i] == valor) {
        	
            for (int j = i; j < tam - 1; j++) {
                arr[j] = arr[j + 1];
            }
            tam--;
            encontrado = true;
            break;
        }
    }
    if (!encontrado) {
        cout << "El valor " << valor << " no se encuentra en el arreglo." << endl;
    }
}

void mostrarArreglo(int arr[], int tam) {
    cout << "Arreglo actual: ";
    for (int i = 0; i < tam; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    const int MAX = 5;
    int numeros[MAX];
    int tam = MAX;
    int suma;
    cout << "Ingrese 5 numeros enteros:" << endl;
    for (int i = 0; i < MAX; i++) {
        cin >> numeros[i];
    }
    calcularSuma(numeros, tam, suma);
    cout << "La suma total es: " << suma << endl;

    int valorEliminar;
    cout << "Ingrese el valor que desea eliminar: ";
    cin >> valorEliminar;

    eliminarDato(numeros, tam, valorEliminar);

    mostrarArreglo(numeros, tam);

    calcularSuma(numeros, tam, suma);
    cout << "La nueva suma total es: " << suma << endl;

    return 0;
}

