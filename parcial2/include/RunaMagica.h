/*Esta sera la clase que usare como abstracta*/
#ifndef RUNAMAGICA_H
#define RUNAMAGICA_H

class RunaMagica {
public:
    virtual double calcularDanioElemental(double poderBase) const = 0;
    virtual double calcularFortalezaDefensiva(double durezaBase) const = 0;
    virtual const char* nombreRuna() const = 0; /*Este es un método virtual puro que obliga a las clases hijas implementar una función*/
    virtual ~RunaMagica() {} /*destructor virtual de la clase base.*/
};

#endif
