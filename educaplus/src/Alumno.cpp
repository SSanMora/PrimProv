/* include guard */
#include "Usuario.h"
#include "Alumno.h"
#include "Curso.h"
#include <vector>
#include <string>
#include <iostream>

using namespace std;

Alumno::Alumno(const string& nombre, const string& correo)
    : Usuario(nombre, correo) {}
    /* constructor que inicializa el nombre de usuario y el correo electrónico */

void Alumno::inscribirCurso(Curso* curso) {
    cursosInscritos.push_back(curso);
    /* este es el método que permite al alumno inscribirse a un curso */
}
void Alumno::mostrarCursos() const {
    cout << "Cursos inscritos por " << getNombreDeUsuario() << endl;
    for (Curso* curso : cursosInscritos) {
        cout << "- " << curso->getTituloDelCurso() << ": " << curso->getDescripcionDelCurso() << endl;
    }
    /* este es el método que muestra los cursos en los que está inscrito el alumno */
}

void Alumno::login() const {
    cout << "Alumno " << getNombreDeUsuario() << " ha iniciado sesión." << endl;
    /* este es el método que implementa la funcionalidad de login para el alumno */
}