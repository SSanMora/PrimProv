#include "RunaPiedra.h"

double RunaPiedra::calcularDanioElemental(double poderBase) const {
    return poderBase * 1.3;
}

double RunaPiedra::calcularFortalezaDefensiva(double durezaBase) const {
    return durezaBase * 4.0;
}

const char* RunaPiedra::nombreRuna() const {
    return "Runa de Piedra";
}
