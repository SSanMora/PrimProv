#ifndef RUNAFUEGO_H
#define RUNAFUEGO_H

#include "RunaMagica.h"

class RunaFuego : public RunaMagica {
public:
    double calcularDanioElemental(double poderBase) const override;
    double calcularFortalezaDefensiva(double durezaBase) const override;
    const char* nombreRuna() const override;
};

#endif
