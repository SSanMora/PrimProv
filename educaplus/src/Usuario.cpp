/* include guard */
#include "Usuario.h"
#include <iostream>

using namespace std;

Usuario::Usuario(const string& nombre, const string& correo)
    : nombreDeUsuario(nombre), correoElectronico(correo) {}
    /* este es el constructor que inicializa el nombre de usuario y el correo electrónico */

Usuario::~Usuario() {}
    /* un destructor virtual para asegurar que las clases hijas se destruyan correctamente */

string Usuario::getNombreDeUsuario() const {
    return this -> nombreDeUsuario;
    /* este es el método que devuelve el nombre de usuario */
}

string Usuario::getCorreoElectronico() const {
    return this -> correoElectronico;
    /* este es el método que devuelve el correo electrónico */
}
