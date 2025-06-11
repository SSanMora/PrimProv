#include <iostream>
#include <vector>
#include "Alumno.h"
#include "Docente.h"
#include "Curso.h"
#include "Leccion.h"

using namespace std;

int main() {
    vector<Alumno*> alumnos;
    vector<Docente*> docentes;
    vector<Curso*> cursosDisponibles;

    int opcionPrincipal;

    do {
        cout << "\n--- [BIENVENIDO] ---\n";
        cout << "1. Iniciar sesión como un alumno\n";
        cout << "2. Iniciar sesión como un docente\n";
        cout << "3. Salir del sistema\n";
        cout << "Seleccione una opcion: ";
        cin >> opcionPrincipal;

        if (opcionPrincipal == 1) {
            string nombre, correo;
            cout << "\n[ALUMNO] Nombre de usuario: ";
            cin.ignore(); getline(cin, nombre);
            cout << "[ALUMNO] Correo: ";
            getline(cin, correo);

            Alumno* alumno = new Alumno(nombre, correo);
            alumno->login();
            alumnos.push_back(alumno);

            int op;
            do {
                cout << "\n--- [MENU ALUMNO] ---\n";
                cout << "1. Inscribirse en un curso\n";
                cout << "2. Mostrar cursos inscritos\n";
                cout << "3. Volver\n";
                cout << "Opcion: ";
                cin >> op;

                if (op == 1) {
                    if (cursosDisponibles.empty()) {
                        cout << "No hay cursos disponibles actualmente.\n";
                    } else {
                        cout << "\nCursos disponibles:\n";
                        for (size_t i = 0; i < cursosDisponibles.size(); ++i) {
                            cout << i + 1 << ". " << cursosDisponibles[i]->getTituloDelCurso()
                                 << " - " << cursosDisponibles[i]->getDescripcionDelCurso() << endl;
                        }

                        int seleccion;
                        cout << "Seleccione un curso por número: ";
                        cin >> seleccion;

                        if (seleccion >= 1 && seleccion <= cursosDisponibles.size()) {
                            alumno->inscribirCurso(cursosDisponibles[seleccion - 1]);
                            cout << "¡Inscripción exitosa!\n";
                        } else {
                            cout << "Selección inválida.\n";
                        }
                    }
                } else if (op == 2) {
                    alumno->mostrarCursos();
                }
            } while (op != 3);

        } else if (opcionPrincipal == 2) {
            string nombre, correo;
            cout << "\n[DOCENTE] Nombre de usuario: ";
            cin.ignore(); getline(cin, nombre);
            cout << "[DOCENTE] Correo: ";
            getline(cin, correo);

            Docente* docente = new Docente(nombre, correo);
            docente->login();
            docentes.push_back(docente);

            int op;
            do {
                cout << "\n--- [MENU DOCENTE] ---\n";
                cout << "1. Publicar nuevo curso\n";
                cout << "2. Agregar leccion a un curso\n";
                cout << "3. Mostrar cursos publicados\n";
                cout << "4. Volver\n";
                cout << "Opcion: ";
                cin >> op;

                if (op == 1) {
                    string titulo, descripcion;
                    cout << "\nTitulo del curso: ";
                    cin.ignore(); getline(cin, titulo);
                    cout << "Descripcion: ";
                    getline(cin, descripcion);

                    Curso* curso = new Curso(titulo, descripcion);
                    docente->publicarUnNuevoCurso(curso);
                    cursosDisponibles.push_back(curso);

                } else if (op == 2) {
                    string tituloCurso, tema;
                    int duracion;
                    cout << "\nCurso al que deseas agregar leccion: ";
                    cin.ignore(); getline(cin, tituloCurso);
                    cout << "Tema de la leccion: ";
                    getline(cin, tema);
                    cout << "Duracion en minutos: ";
                    cin >> duracion;

                    Leccion* leccion = new Leccion(tema, duracion);
                    docente->agregarUnaLeccionParaUnCurso(tituloCurso, leccion);

                } else if (op == 3) {
                    docente->mostrarTodosLosCursosPublicados();
                }

            } while (op != 4);
        }

    } while (opcionPrincipal != 3);

    for (Alumno* a : alumnos) delete a;
    for (Docente* d : docentes) delete d;

    cout << "\nSaliendo del sistema...\n";
    return 0;
}
