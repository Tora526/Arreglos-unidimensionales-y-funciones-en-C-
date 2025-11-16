//Diseño de dos programas con un arreglo pwro que estos ademas almacenen entre 4 o 5 numeros, ya sea para notas o una lista de numeros pare.
#include <iostream>
using namespace std;
void arreglo(int arr[], int tam){
cout<< "----------------------- ENUNCIADO 1 -----------------------------"<<endl;
	cout << "Los numeros ingresados son: ";
	for (int i = 0; i < tam; i++) {
        cout << arr[i] << " ";
}
cout<<endl;
}
void calificaciones(int cal[], int est){
cout<< "----------------------- ENUNCIADO 2 -----------------------------"<<endl;
	cout << "Las calificaciones de los cuatro estudiantes es: ";
	for(int a=0;a<est;a++){
		cout<< cal[a] << " ";
	}
}
int main(){
	int numeros[5];
	cout << "Ingrese 5 numeros enteros:" << endl;
    for (int i = 0; i < 5; i++) {
        cin >>numeros[i];
    }
    arreglo(numeros, 5);
    cout<< "----------------------- FIN DEL ENUNCIADO 1 -----------------------------"<<endl;
    
    int notas[4];
    	cout<<" Ingrese las calificaciones de los cuatro estuiantes: "<<endl;
    	for(int a=0;a<4;a++){
    		cin>>notas[a];
		}
    calificaciones(notas, 4);
    cout<<endl;
    cout<< "----------------------- FIN DEL ENUNCIADO 2 -----------------------------"<<endl;

    
    return 0;
}
