#include "RunaFuego.h"

double RunaFuego::calcularDanioElemental(double poderBase) const {
    return poderBase * 3.0;
}

double RunaFuego::calcularFortalezaDefensiva(double durezaBase) const {
    return durezaBase * 1.2;
}

const char* RunaFuego::nombreRuna() const {
    return "Runa de Fuego";
}
