#include "Leccion.h"
#include <iostream>

using namespace std;

Leccion::Leccion(const string& tema, int duracion)
    : temaDeLaLeccion(tema), duracionEnMinutos(duracion) {
    /* constructor que inicializa el tema y la duración de la lección */
}

string Leccion::getTemaDeLaLeccion() const {
    /* método para obtener el tema de la lección */
    return this -> temaDeLaLeccion;
}

int Leccion::getDuracionEnMinutos() const {
    /* método para obtener la duración de la lección */
    return this -> duracionEnMinutos;
}
void Leccion::mostrarInformacion() const {
    /* método para mostrar la información de la lección */
    cout << "Tema de la lección: " << temaDeLaLeccion << endl;
    cout << "Duración (minutos): " << duracionEnMinutos << endl;
}
