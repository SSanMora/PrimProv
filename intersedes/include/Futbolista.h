#ifndef FUTBOLISTA_H
#define FUTBOLISTA_H

#include <string>
#include "Deportista.h"

using namespace std;

class Futbolista : public Deportista {
    private:
        string posicion;
        int goles;
        int asistencias;
        int partidosJugados;
        int tarjetasRojas;
        int apuntador1,apuntador2;

    public:
        Futbolista();
        Futbolista(string nombre, int edad, string cedula, string codigo, int programa, string sexo, string posicion, int goles, int asistencias, int partidosJugados, int tarjetasRojas);
        void setPosicion(string posicion);
        string getPosicion();
        void setGoles(int goles);
        int getGoles();
        void setAsistencias(int asistencias);
        int getAsistencias();
        void setPartidosJugados(int partidosJugados);
        int getPartidosJugados();
        void setTarjetasRojas(int tarjetasRojas);
        int getTarjetasRojas();
        void MostrarGoleador(Futbolista futbolistas[],int posiciones);
        void MostrarMasAsistidor(Futbolista futbolistas[],int posiciones);
        void MostrarMasFaltador(Futbolista futbolistas[],int posiciones);
        void MostrarMasPartidosJugados(Futbolista futbolistas[],int posiciones);
        void crearFutbolista(Futbolista futbolistas[],int posiciones);
        void ModificarFutbolista(Futbolista futbolistas[],int posiciones);
        void ListarFutbolistas(Futbolista futbolistas[],int posiciones);
        protected:
};
#endif