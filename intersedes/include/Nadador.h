#ifndef NADADOR_H
#define NADADOR_H

#include <string>
#include "Deportista.h"

using namespace std;

class Nadador : public Deportista {
    private:
        string estilo;
        int medallasOro;
        int medallasPlata;
        int medallasBronce;
        int competenciasGanadas;
        int competenciasPerdidas;
        double promedio;
        int apunt1;
        int apunt2;
        double tiempos;
        double peso;
        
    public:
        Nadador();
        Nadador(string nombre, int edad, string cedula, string codigo, int programa, string sexo, string estilo, int medallasOro, int medallasPlata, int medallasBronce, int competenciasGanadas, int competenciasPerdidas, double promedio, double tiempos, double peso);
        void setTiempo(double tiempos);
        double getTiempo();
        void setPeso(double peso);
        double getPeso();
        void setEstilo(string estilo);
        string getEstilo();
        void setMedallasOro(int medallasOro);
        int getMedallasOro();
        void setMedallasPlata(int medallasPlata);
        int getMedallasPlata();
        void setMedallasBronce(int medallasBronce);
        int getMedallasBronce();
        void setCompetenciasGanadas(int competenciasGanadas);
        int getCompetenciasGanadas();
        void setCompetenciasPerdidas(int competenciasPerdidas);
        int getCompetenciasPerdidas();
        void CrearNadador(Nadador nadador[],int posicionNatacion);
        void ListarNadadores(Nadador nadador[],int posicionNatacion);
        void ModificarNadador(Nadador nadador[],int posicionNatacion);
        void MostrarMejorTiempo(Nadador nadador[],int posicionNatacion);
        void PromedioTiempos(Nadador nadador[],int posicionNatacion);
    protected:
};
#endif