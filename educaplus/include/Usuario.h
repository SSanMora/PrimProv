/* esta es la clase abstracta (base)*/
/* estos son los include guard */
# ifndef USUARIO_H
# define USUARIO_H

#include <string>
#include <vector>

using namespace std;

class Usuario {
    private:
        string nombreDeUsuario;
        string correoElectronico;
        
    public:
        Usuario(const string&nombre, const string& correo);
        /* este es el constructor que inicializa el nombre de usuario y el correo electrónico */

        virtual ~Usuario();
        /* un destructor virtual para asegurar que las clases hijas se destruyan correctamente */

        string getNombreDeUsuario() const;
        /* este es el método que devuelve el nombre de usuario */
        
        string getCorreoElectronico() const;
        /* este es el método que devuelve el correo electrónico */

        virtual void login() const = 0;
        /* este es el método virtual puro que obliga a las clases hijas 
        a definir su propia versión de login. es un método polimórfico puro */

};

#endif