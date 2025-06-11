#include <iostream>
#include <vector>
#include "Cuenta.h"
#include "Persona.h"
#include <fstream>
using namespace std;

void leerArchivo(string ruta, vector<string>* contenido);

int main() {
    Cuenta *punteroCuenta = NULL;

    Cuenta cuenta = Cuenta("111", 400);

    punteroCuenta = &cuenta;

    Persona el = Persona("123", "Alvaro", punteroCuenta);
    Persona ella = Persona("234", "Alicia", punteroCuenta);

    ///punteroCuenta->consignar(100);
    ///punteroCuenta->retirar(200);
    el.consignar(100);
    ella.consignar(300);
    el.retirar(700); //acceder al puntero desde la clse que lo contiene

    cout<<"saldo ->"<<cuenta.verSaldo()<<endl;

    vector<string> lineas;
    leerArchivo("transacciones.txt", &lineas);
}


void leerArchivo(string ruta, vector<string>* contenido){

    ifstream fichero(ruta);
    while(fichero.eof()){ ///Mientras no sea el final del archivo
        string linea; 
        getline(fichero, linea);
        contenido->push_back(linea);
    }
    cout<<contenido->size()<<endl;
    cout<<contenido->at(0);
}