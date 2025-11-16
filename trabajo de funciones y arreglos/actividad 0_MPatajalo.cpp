//Descuentos para un producto de una tienda con sus dos tipos de descuentos por promocion o frecuencia.
#include <iostream>
using namespace std;



void CalculoDescuento(double precio){
	double  porcentaje1, porcentaje2;
	string frecuencia, promocion;
	
	porcentaje1=(0.10 * precio);
	porcentaje2=(0.15 * precio);
	
	cout<<" Ingrese si es un cliente frecuente y ademas si el producto tiene promocion"<<endl;
	cin>>frecuencia>>promocion;
	
	if(frecuencia=="si"){
		cout<<"Se le aplica un descuento por cliente frecuente del "<< "10%"<<endl;
		cout<<"Su valor aplicado del descuento es de  $"<< porcentaje1 <<endl;
	}
	else{
		cout<<"No se le aplica ningun descuento de cliente preferencial y su valor es de: $"<< precio<<endl;
	}
	if(promocion=="si"){
		cout<<"Se le aplica un descuento de promocion del "<< "  15% " <<endl;
		cout<<"Su valor aplicado por el descuento de la promocion es:  $"<<porcentaje2<<endl;
	}
	else{
		cout<<"No se le aplica el descuento de la promocion su valor se mantiene en : $"<< precio<<endl;
	}
	cout<<("----------------------------------------------------------------------------------------")<<endl;
}
void CalculopreFinal(double precio){
	double porcentaje1,porcentaje2;
	
	porcentaje1=(0.10 * precio);
	porcentaje2=(0.15 * precio);
	
	double DescPromo=porcentaje1;
	double DescCliente=porcentaje2;
	
	double PrecioFinal=precio-(DescPromo+DescCliente);
	cout << "Precio base: $" << precio << endl;
    cout << "Descuento por promocion: $" << DescPromo << endl;
    cout << "Descuento por cliente frecuente: $" << DescCliente << endl;
    cout << "Precio final del producto: $" << PrecioFinal << endl;
}


int main (){
	double precio;
	cout<<" Ingrese el precio del producto escogido  $";
	cin>>precio;
	CalculoDescuento(precio);
	CalculopreFinal(precio);
	
	return 0;
}
