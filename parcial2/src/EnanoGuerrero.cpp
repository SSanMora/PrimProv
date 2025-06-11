#include "EnanoGuerrero.h"
#include <iostream>
using namespace std;

EnanoGuerrero::EnanoGuerrero(string nombre, double estatura, double fuerza, double proteccion)
    : nombre(nombre), estatura(estatura), fuerza(fuerza), proteccion(proteccion),
      poderBase(10), durezaBase(10), runa(nullptr) {}

EnanoGuerrero::~EnanoGuerrero() {
    if (runa) delete runa;
}

void EnanoGuerrero::equiparRuna(RunaMagica* nuevaRuna) {
    if (runa) {
        delete runa;
        runa = nullptr;
    }

    if (nuevaRuna)
        runa = nuevaRuna;
}


std::string EnanoGuerrero::getNombre() const {
    return nombre;
}


void EnanoGuerrero::mostrarEstadisticas() const {
    if (!runa) {
        cout << nombre << " no tiene runa equipada.\n";
        return;
    }
    /*La !runa significa NO hay runa asignada (es nullptr)*/
    double danioElemental = runa->calcularDanioElemental(poderBase);
    double fortalezaDefensiva = runa->calcularFortalezaDefensiva(durezaBase);

    double ataque = (estatura + fuerza) * danioElemental / 100.0;
    double defensa = proteccion + (fortalezaDefensiva / 10.0);
    double poderDefinitivo = ataque + defensa;

    cout << "Guerrero: " << nombre << endl;
    cout << "Runa equipada: " << runa->nombreRuna() << endl;
    cout << "Estatura: " << estatura << " | Fuerza: " << fuerza << " | Protección: " << proteccion << endl;
    cout << "Daño Elemental: " << danioElemental << " | Fortaleza Defensiva: " << fortalezaDefensiva << endl;
    cout << "Ataque: " << ataque << " | Defensa: " << defensa << endl;
    cout << "Guerrero...Aqui tu PODER DEFINITIVO: " << poderDefinitivo << endl;
}
