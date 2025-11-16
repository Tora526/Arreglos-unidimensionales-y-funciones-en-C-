/*Simulacion de varias funciones para el calulos de recarga de una tarjeta y ademas
el calculo de cobre de dos viajes.*/
#include <iostream>
#include <iomanip> 
using namespace std;

void recargar(double &saldo, double monto) {
    saldo += monto; 
    cout << "Recarga exitosa. Saldo actual: $" << saldo << endl;
}

bool pagar(double &saldo, double tarifa) {
    if (saldo >= tarifa) {
        saldo -= tarifa; 
        cout << "Pago exitoso. Saldo actual: $" << saldo << endl;
        return true;
    } else {
        cout << "Saldo insuficiente. No se pudo pagar el pasaje." << endl;
        return false;
    }
}

void mostrarEstado(double saldo, int pasadas) {
    cout << "===== TARJETA METRO/BUS QUITO =====" << endl;
    cout << "Pasadas realizadas: " << pasadas << endl;
    cout << "Saldo final: $" << fixed << setprecision(2) << saldo << endl;
    cout << "===================================" << endl;
}

int main() {
    double saldo = 0.0;   
    double monto;
    double tarifa = 0.45; 
    int pasadas = 0;

    cout << "===== TARJETA METRO/BUS QUITO =====" << endl;
    cout << "Saldo actual: $" << saldo << endl;

    cout << "Ingrese monto a recargar: ";
    cin >> monto;
    recargar(saldo, monto);

    cout << "Pagando pasaje de $" << tarifa << " ..." << endl;
    if (pagar(saldo, tarifa)) pasadas++;

    cout << "Pagando pasaje de $" << tarifa << " ..." << endl;
    if (pagar(saldo, tarifa)) pasadas++;

    mostrarEstado(saldo, pasadas);

    return 0;
}

