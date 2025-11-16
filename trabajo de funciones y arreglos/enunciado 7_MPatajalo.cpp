/*Aplicacion de notas que nos permita el retotrno del promedio en los elementos dentro de un arreglo*/
#include <iostream>
#include <iomanip> 
using namespace std;

double calcularPromedio(int list[], int tama) {
    int suma = 0;
    for (int i = 0; i < tama; i++) {
        suma += list[i];
    }
    return (double)suma / tama; 
}

int main() {
    int numeros[5];   

    cout << "Ingrese 5 numeros enteros:" << endl;
    for (int i = 0; i < 5; i++) {
        cin >> numeros[i];
    }

    double promedio = calcularPromedio(numeros, 5);

    cout << endl;
    cout << "El promedio de los elementos es: " << promedio << endl;

    return 0;
}

