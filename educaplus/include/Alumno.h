#ifndef ALUMNO_H
#define ALUMNO_H

/* include guard */
#include "Usuario.h"
#include "Curso.h"
#include <vector>
#include <string>

using namespace std;

class Alumno : public Usuario {
    private:
        vector<Curso*> cursosInscritos;
    
    public:
        Alumno(const string& nombre, const string& correo);
        /* este es el constructor que inicializa el nombre de usuario y el correo electrónico */

        void inscribirCurso(Curso* curso);
        /* este es el método que permite al alumno inscribirse a un curso */
        
        void mostrarCursos() const;
        /* este es el método que muestra los cursos en los que está inscrito el alumno */

        void login() const override;
        /* este es el método que implementa la funcionalidad de login para el alumno */

};

#endif