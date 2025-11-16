/* Creacion de una factura con descuento aplicando diferentes descuento*/
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

void cargarDatos(string &nombre, double &precioUnitario, int &cantidad) {
    cout << "Ingrese nombre del producto: ";
    cin >> nombre;
    cout << "Ingrese precio unitario: ";
    cin >> precioUnitario;
    cout << "Ingrese cantidad: ";
    cin >> cantidad;
}

double calcularSubtotal(double precioUnitario, int cantidad) {
    return precioUnitario * cantidad;
}

void aplicarDescuentos(double subtotal, int cantidad, double &total, double &descuentoTotal) {
    descuentoTotal = 0;

    if (cantidad == 2) {
        descuentoTotal += subtotal * 0.10;
    } else if (cantidad >= 3) {
        descuentoTotal += subtotal * 0.15;
    }

    if (subtotal > 200) {
        descuentoTotal += subtotal * 0.05;
    }

    total = subtotal - descuentoTotal;
}

void mostrarFactura(string nombre, double precioUnitario, int cantidad, double subtotal, double descuentoTotal, double total) {
    cout << "----- FACTURA -----"<<endl;
    cout << "Producto: " << nombre << endl;
    cout << "Precio unitario: $" << precioUnitario << endl;
    cout << "Cantidad: " << cantidad << endl;
    cout << "Subtotal: $" << subtotal << endl;
    cout << "Descuentos aplicados: $" << descuentoTotal << endl;
    cout << "Total final: $" << total << endl;
}

int main() {
    string nombre;
    double precioUnitario, subtotal, total, descuentoTotal;
    int cantidad;

    cargarDatos(nombre, precioUnitario, cantidad);

    subtotal = calcularSubtotal(precioUnitario, cantidad);

    aplicarDescuentos(subtotal, cantidad, total, descuentoTotal);

    mostrarFactura(nombre, precioUnitario, cantidad, subtotal, descuentoTotal, total);

    return 0;
}

