#include "Persona.h"
#include <fstream>
#include <iostream>

Persona::Persona(string cedula, string nombre, Cuenta* cuenta){
    this->cedula = cedula;
    this->nombre = nombre;
    this->cuenta = cuenta;
}

void Persona::retirar(double valor){
    ///Escribir 
    ///ofstream archivo("transacciones.txt");
    ///fstream archivo("transacciones.txt", ios::out); Otra forma de escribir
    fstream archivo("transacciones.txt", ios::app); 
    double valorInicial = cuenta->verSaldo();
    cuenta->setSaldo(valorInicial - valor);
    ///Opero sobre el archivo
    archivo << nombre <<"-"<<valorInicial<<"-"<<valorInicial-valor<<"-"<<"Retiro\n"<<endl;
    ///Cerrar Archivo
    archivo.close();
}

void Persona::consignar(double valor){
    ///ofstream archivo("transacciones.txt");
    fstream archivo("/workspaces/PrimProv/punteros/transacciones.txt", ios::app); 
    if(!archivo.is_open()){
        cout << "Error al abrir el archivo" << endl;
        return;
    }
    double valorInicial = cuenta->verSaldo();
    cuenta->setSaldo(valorInicial + valor);
    archivo << nombre <<"-"<<valorInicial<<"-"<<valorInicial+valor<<"-"<<"Consignar"<<endl;
    archivo.close();
}