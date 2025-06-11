#ifndef RUNAPIEDRA_H
#define RUNAPIEDRA_H

#include "RunaMagica.h"

class RunaPiedra : public RunaMagica {
public:
    double calcularDanioElemental(double poderBase) const override;
    double calcularFortalezaDefensiva(double durezaBase) const override;
    const char* nombreRuna() const override;
};

#endif
