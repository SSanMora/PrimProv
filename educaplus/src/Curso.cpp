/* include guard */
#include "Curso.h"
#include "Leccion.h"
#include <iostream>

using namespace std;

Curso::Curso(const string& titulo, const string& descripcion)
    : tituloDelCurso(titulo), descripcionDelCurso(descripcion) {
    //* constructor que inicializa el título y la descripción del curso */
}

Curso::~Curso() {
    /* destructor para liberar memoria de las lecciones */
    for (Leccion* leccion : lecciones) {
        delete leccion;
    }
}

string Curso::getTituloDelCurso() const {
    /* método para obtener el título del curso */
    return this->tituloDelCurso;
}

string Curso::getDescripcionDelCurso() const {
    /* método para obtener la descripción del curso */
    return this -> descripcionDelCurso;
}

void Curso::agregarLeccion(Leccion* leccion) {
    /* método para agregar una lección al curso */
    lecciones.push_back(leccion);
}

void Curso::eliminarLeccion(const string& tema) {
    /* método para eliminar una lección del curso por su tema */
    for (auto it = lecciones.begin(); it != lecciones.end(); ++it) {
        if ((*it)->getTemaDeLaLeccion() == tema) {
            delete *it; // liberar memoria de la lección
            lecciones.erase(it); // eliminar de la lista
            cout << "Lección '" << tema << "' eliminada del curso." << endl;
            return;
        }
    }

    cout << "Lección con tema '" << tema << "' no encontrada." << endl;
}

void Curso::mostrarTodasLasLecciones() const {
    /* método para mostrar todas las lecciones del curso */
    cout << "Lecciones del curso '" << tituloDelCurso << "':" << endl;
    for (const Leccion* leccion : lecciones) {
        leccion->mostrarInformacion();
        /* mostrar información de cada lección */
        cout << "------------------------" << endl;
    }
}