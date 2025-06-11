#include <iostream>
#include <vector>
#include "EnanoGuerrero.h"
#include "RunaFuego.h"
#include "RunaPiedra.h"

using namespace std;

void mostrarMenuPrincipal() {
    cout << "\n--- Bienvenido al Reina de Etheria ---\n";
    cout << "1. Crear nuevo guerrero\n";
    cout << "2. Modificar runa de guerrero\n";
    cout << "3. Mostrar estadísticas de guerrero\n";
    cout << "4. Salir\n";
    cout << "Seleccione una opción: ";
    cout << "\n ....-Que el destino te acompañe en este mundo magico-....\n";
}

void mostrarRunasDisponibles() {
    cout << "Seleccione una runa:\n";
    cout << "1. Runa de Fuego (Poder *3, Dureza *1.2)\n";
    cout << "2. Runa de Piedra (Poder *1.3, Dureza *4)\n";
    cout << "3. Quitar runa\n";
    cout << "Opción: ";
}

int main() {
    vector<EnanoGuerrero*> guerreros; /*Aqui vamos a crear un vector para simplificar el proceso de guardar los datos*/
    int opcion;

    while (true) {
        mostrarMenuPrincipal();
        cin >> opcion;

        if (opcion == 1) {
            string nombre;
            double estatura, fuerza, proteccion;

            cout << "Ingrese nombre del guerrero: ";
            cin >> nombre;
            cout << "Estatura: ";
            cin >> estatura;
            cout << "Fuerza: ";
            cin >> fuerza;
            cout << "Protección: ";
            cin >> proteccion;

            EnanoGuerrero* nuevo = new EnanoGuerrero(nombre, estatura, fuerza, proteccion);
            guerreros.push_back(nuevo); /*Agregamos el nuevo guerrero al vector*/

            cout << "Guerrero creado con éxito.\n";

        } else if (opcion == 2) {
            if (guerreros.empty()) {
                cout << "No hay guerreros creados aún.\n";
                continue;
            }

            for (size_t i = 0; i < guerreros.size(); ++i) {
                cout << i + 1 << ". " << guerreros[i]->getNombre() << endl;
            }

            int indice;
            cout << "Seleccione el guerrero a modificar: ";
            cin >> indice;

            if (indice < 1 || indice > (int)guerreros.size()) {
                cout << "Índice inválido.\n";
                continue;
            }

            mostrarRunasDisponibles();
            int opcionRuna;
            cin >> opcionRuna;

            switch (opcionRuna) {
                case 1:
                    guerreros[indice - 1]->equiparRuna(new RunaFuego());
                    cout << "Runa de Fuego equipada.\n";
                    break;
                case 2:
                    guerreros[indice - 1]->equiparRuna(new RunaPiedra());
                    cout << "Runa de Piedra equipada.\n";
                    break;
                case 3:
                    guerreros[indice - 1]->equiparRuna(nullptr);
                    cout << "Runa quitada.\n";
                    break;
                default:
                    cout << "Opción inválida.\n";
                    break;
            }
            /*el new esta agregando una runa al equipar runa*/
            /*el null es un puntero vacio*/
        } else if (opcion == 3) {
            if (guerreros.empty()) {
                cout << "No hay guerreros creados.\n";
                continue;
            }

            for (size_t i = 0; i < guerreros.size(); ++i) {
                cout << "\n--- Guerrero " << i + 1 << " ---\n";
                guerreros[i]->mostrarEstadisticas();
            }

        } else if (opcion == 4) {
            for (auto g : guerreros) delete g;
            cout << "Saliendo del Reino de Etheria. ¡Que la magia ilumine tu camino!\n";
            break;
        } else {
            cout << "Opción no válida.\n";
        }
    }

    return 0;
}
