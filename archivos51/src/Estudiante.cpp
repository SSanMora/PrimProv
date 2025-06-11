#include "Estudiante.h"

Estudiante::Estudiante(string codigo, string nombre, float notas[3], float adicional){
    this->codigo = codigo;
    this->nombre = nombre;
    for(int i=0; i<3; i++){
        this->notas[i] = notas[i];
    }
    this->adicional = adicional;
}

void Estudiante::setCodigo(string codigo){
    this->codigo = codigo;
}
string Estudiante::getCodigo(){
    return codigo;
}

void Estudiante::setNombre(string nombre){
    this->nombre = nombre;
}
string Estudiante::getNombre(){
    return nombre;
}

void Estudiante::setNotas(float notas[3]){
    for(int i=0; i<3; i++){
        this->notas[i] = notas[i];
    }
}

float Estudiante::getNotas(int numeroNota){
    return notas[numeroNota];
}

void Estudiante::setAdicional(float adicional){
    this->adicional = adicional;
}

float Estudiante::getAdicional(){
    return adicional;
}

void Estudiante::calcularPromedio(){
    float resultado = 0;
    for(int i=0; i<3; i++){
        resultado += notas[i];
    }
    promedio = (resultado/3) + adicional;
}

float Estudiante::getPromedio(){
    return promedio;
}