/* esta clase permite agregar y eliminar lecciones */
#ifndef CURSO_H
#define CURSO_H

/* include guard */
#include <string>
#include <vector>
#include "Leccion.h"

using namespace std;

class Curso {
    private:
        string tituloDelCurso;
        string descripcionDelCurso;
        vector<Leccion*> lecciones;

    public:
        Curso(const string& titulo, const string& descripcion);
        /* constructor que inicializa el título y la descripción del curso */

        ~Curso();
        /* destructor para liberar memoria de las lecciones */
        
        string getTituloDelCurso() const;
        /* método para obtener el título del curso */
        
        string getDescripcionDelCurso() const;
        /* método para obtener la descripción del curso */

        void agregarLeccion(Leccion* leccion);
        /* método para agregar una lección al curso */
        
        void eliminarLeccion(const string& tema);
        /* método para eliminar una lección del curso por su tema */
        
        void mostrarTodasLasLecciones() const;
        /* método para mostrar todas las lecciones del curso */
};

#endif