#include "Docente.h"
#include <iostream>

using namespace std;

Docente::Docente(const string& nombre, const string& correo)
    : Usuario(nombre, correo) {}
    /* constructor que inicializa el nombre de usuario y el correo electrónico */

Docente::~Docente() {
    /* destructor para liberar memoria de los cursos publicados */
    for (Curso* curso : cursosPublicados) {
        delete curso; // liberar memoria de cada curso
    }
}

void Docente::publicarUnNuevoCurso(Curso* curso) {
    cursosPublicados.push_back(curso);
    /* método para publicar un curso */
    cout << "Curso '" << curso->getTituloDelCurso() << "' publicado por " << getNombreDeUsuario() << "." << endl;
}

void Docente::agregarUnaLeccionParaUnCurso(const string& tituloCurso, Leccion* leccion) {
    for (Curso* curso : cursosPublicados) {
        if (curso->getTituloDelCurso() == tituloCurso) {
            curso->agregarLeccion(leccion);
            cout << "Lección '" << leccion->getTemaDeLaLeccion() << "' agregada al curso '" << tituloCurso << "'." << endl;
            return;
        }
    }
    cout << "Curso '" << tituloCurso << "' no encontrado." << endl;
}

void Docente::eliminarUnaLeccionDeUnCurso(const string& tituloCurso, const string& temaLeccion) {
    for (Curso* curso : cursosPublicados) {
        if (curso->getTituloDelCurso() == tituloCurso) {
            curso->eliminarLeccion(temaLeccion);
            return;
        }
    }
    cout << "Curso '" << tituloCurso << "' no encontrado." << endl;
}

void Docente::mostrarTodosLosCursosPublicados() const {
    cout << "Cursos publicados por " << getNombreDeUsuario() << ":" << endl;
    for (Curso* curso : cursosPublicados) {
        cout << "- " << curso->getTituloDelCurso() << ": " << curso->getDescripcionDelCurso() << endl;
    }
}

void Docente::login() const {
    cout << "Docente " << getNombreDeUsuario() << " ha iniciado sesión." << endl;
    /* método que implementa la funcionalidad de login para el docente */
}