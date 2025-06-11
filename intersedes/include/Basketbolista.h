#ifndef BASKETBOLISTA_H
#define BASKETBOLISTA_H

#include <string>
#include "Deportista.h"

using namespace std;

class Basketbolista : public Deportista {
    private:
        string posicion;
        int puntos;
        int asistencias;
        int rebotes;
        int robos;
        int tapones;
        int apuntador1,apuntador2;

    public:
        Basketbolista();
        Basketbolista(string nombre, int edad, string cedula, string codigo, int programa, string sexo, string posicion, int puntos, int asistencias, int rebotes, int robos, int tapones);
        void crearBasketbolista(Basketbolista basketbolista[],int posicionBasket);
        void ModificarBasketbolista(Basketbolista basketbolista[],int posicionBasket);
        void listarBasketbolista(Basketbolista basketbolista[],int posicionBasket);
        void MostrarMasPuntos(Basketbolista basketbolista[],int posicionBasket);
        void MostrarMasAsistidor(Basketbolista basketbolista[],int posicionBasket);
        void MostrarMasRebotesHechos(Basketbolista basketbolista[],int posicionBasket);
        void MostrarMasRobos(Basketbolista basketbolista[],int posicionBasket);
        void MostrarMasTapones(Basketbolista basketbolista[],int posicionBasket);
        void setPosicion(string posicion);
        string getPosicion();
        void setPuntos(int puntos);
        int getPuntos();
        void setAsistencias(int asistencias);
        int getAsistencias();
        void setRebotes(int rebotes);
        int getRebotes();
        void setRobos(int robos);
        int getRobos();
        void setTapones(int tapones);
        int getTapones();

    protected:
};
#endif