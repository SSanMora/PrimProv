///Esta es la interfaz de la supercalase Deportista

#ifndef DEPORTISTA_H
#define DEPORTISTA_H

#include <iostream>
#include <string>
using namespace std;

class Deportista {
    private:
        string nombre;
        int edad;
        string cedula;
        string codigo;
        int programa;
        string sexo;

    public:
        void setNombre(string nombre);
        string getNombre();
        void setEdad(int edad);
        int getEdad();
        void setCedula(string cedula);
        string getCedula();
        void setCodigo(string codigo);
        string getCodigo();
        void setPrograma(int programa);
        int getPrograma();
        void setSexo(string sexo);
        string getSexo();

    protected:
        

};

#endif