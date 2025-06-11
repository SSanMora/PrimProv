#ifndef DOCENTE_H
#define DOCENTE_H

#include "Usuario.h"
#include "Curso.h"
#include "Leccion.h"
#include <vector>

using namespace std;

class Docente : public Usuario {
    private:
        vector<Curso*> cursosPublicados;

    public:
        Docente(const string& nombre, const string& correo);
        /* constructor que inicializa el nombre de usuario y el correo electrónico */

        ~Docente();
        /* destructor para liberar memoria de los cursos publicados */

        void publicarUnNuevoCurso(Curso* curso);
        /* método para publicar un curso */

        void agregarUnaLeccionParaUnCurso(const string& tituloCurso, Leccion* leccion);
        /* método para agregar una lección a un curso por su título */

        void eliminarUnaLeccionDeUnCurso(const string& tituloCurso, const string& temaLeccion);
        /* método para eliminar una lección de un curso por su título y tema */

        void mostrarTodosLosCursosPublicados() const;
        /* método para mostrar todos los cursos publicados por el docente */

        void login() const override;
        /* método que implementa la funcionalidad de login para el docente */

};

#endif