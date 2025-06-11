#ifndef ENANOGUERRERO_H
#define ENANOGUERRERO_H

#include "RunaMagica.h"
#include <string>
using namespace std;

class EnanoGuerrero {
private:
    string nombre;
    double estatura;
    double fuerza;
    double proteccion;
    double poderBase;
    double durezaBase;
    RunaMagica* runa; /*Este puntero es de la runa mágica equipada*/

public:
    EnanoGuerrero(string nombre, double estatura, double fuerza, double proteccion);
    ~EnanoGuerrero(); /*Destructor*/

    void equiparRuna(RunaMagica* nuevaRuna);
    void mostrarEstadisticas() const;
    string getNombre() const;


};

#endif
