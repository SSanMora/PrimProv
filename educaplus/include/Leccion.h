/* esta clase giarda el tema de la lección, su duración en minutos
y además permite mostrar su información */

#ifndef LECCION_H
#define LECCION_H

#include <string>
using namespace std;

class Leccion {
    private:
        string temaDeLaLeccion;
        /* este es el tema de la lección */
        int duracionEnMinutos;
        /* esta es la duración de la lección en minutos */

    public:
        Leccion(const string& tema, int duracion);
        /* constructor que inicializa el tema y la duración de la lección */

        string getTemaDeLaLeccion() const;
        /* método para obtener el tema de la lección */

        int getDuracionEnMinutos() const;
        /* método para obtener la duración de la lección */

        void mostrarInformacion() const;
        /* método para mostrar la información de la lección */
};

#endif