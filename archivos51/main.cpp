#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include "Estudiante.h"

using namespace std;

vector <string> separarCadena(string registro);
vector <Estudiante> generarEstudiantes(vector <string> elementos);

int main() {

    vector <string> registros;
    string linea;
    vector <string> palabras;
    vector <string> registrarCompleto;
    vector <Estudiante> estudiantes;
    
    // Crear un objeto de tipo ofstream para leer en el archivo
    //fstream archivo("notas.txt", ios::in);

    // 2da forma
    ifstream archivo("notas.txt");

    while(getline(archivo, linea)){
        registros.push_back(linea);
    }

    for (int k=0; k<registros.size(); k++){
        palabras = separarCadena(registros[k]);

        for(int m =0; m<palabras.size(); m++){
            cout << palabras[m] << endl;
            registrarCompleto.push_back(palabras[m]);
        }
    }
    estudiantes = generarEstudiantes(registrarCompleto);
    ///calcularPromedio(estudiantes);
    for(int i=0; i<estudiantes.size(); i++){
        estudiantes[i].calcularPromedio();
    }

    for(int i=0; i<estudiantes.size(); i++){
        cout << estudiantes[i].getNombre() << " " << estudiantes[i].getPromedio() << endl;
    }
    
    return 0;


}

vector <Estudiante> generarEstudiantes(vector <string> elementos){
    string codigo, nombre;
    float nota[3], adicional;
    vector <Estudiante> salida;
    for(int j = 0; j<elementos.size(); j+=6){
        codigo = elementos[j];
        nombre = elementos[j+1];
        /// stof = convierte string a flotante;
        /// stoi = convierte string a entero;
        /// stold = convierte string a double;
        nota[0] = stof(elementos[j+2]); // stof = Convertir a float
        nota[1] = stof(elementos[j+3]);
        nota[2] = stof(elementos[j+4]);
        adicional = stof(elementos[j+5]);

        Estudiante estu = Estudiante(codigo, nombre, nota, adicional);
        salida.push_back(estu);
    }
    return salida;
}

// Definición de la función separarCadena fuera de main
vector <string> separarCadena(string registro){
    char delimitador = '-';
    string auxiliar = "";
    vector <string> contenido; ///esta sera la salida 

    for(int i=0; i<registro.size(); i++){
        if(i+1 == registro.size()){
            contenido.push_back(auxiliar);
            auxiliar = "";
        }else{
            if(registro[i] != delimitador){
                auxiliar += registro[i]; ///Agregar el caracter a la cadena auxiliar (variable)
            }else{
                contenido.push_back(auxiliar); ///Agregar la cadena auxiliar al vector
                auxiliar = ""; ///Reiniciar la cadena auxiliar (variable)
            }
        }
    }

    return contenido;
}
