#ifndef ESTUDIANTE_H
#define ESTUDIANTE_H
#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Estudiante {
    private:
        string codigo;
        string nombre;
        float notas[3];
        float promedio;
        float adicional;
    public:
        Estudiante(string codigo, string nombre, float notas[3], float adicional);
        void setCodigo(string codigo);
        string getCodigo();

        void setNombre(string nombre);
        string getNombre();

        void setNotas(float notas[3]); ///No se puede pasar un arreglo como argumento, por eso no hay getNotas
        float getNotas(int numeroNota); ///Se puede pasar un arreglo como argumento, por eso no hay setNotas

        void setAdicional(float adicional);
        float getAdicional();

        void calcularPromedio();
        float getPromedio();
};
#endif
