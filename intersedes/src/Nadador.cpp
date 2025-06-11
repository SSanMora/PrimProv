#include "Nadador.h"

Nadador::Nadador()
{
     apunt1 = 0;
     apunt2 = 1;
     estilo = "";
     tiempos = 0;
     promedio = 0;
     peso = 0;

}
void Nadador::setEstilo(string estilo) {
    this->estilo = estilo;
}
string Nadador::getEstilo() {
    return estilo;
}
void Nadador::setMedallasOro(int medallasOro) {
    this->medallasOro = medallasOro;
}
int Nadador::getMedallasOro() {
    return medallasOro;
}
void Nadador::setMedallasPlata(int medallasPlata) {
    this->medallasPlata = medallasPlata;
}
int Nadador::getMedallasPlata() {
    return medallasPlata;
}
void Nadador::setMedallasBronce(int medallasBronce) {
    this->medallasBronce = medallasBronce;
}
int Nadador::getMedallasBronce() {
    return medallasBronce;
}
void Nadador::setCompetenciasGanadas(int competenciasGanadas) {
    this->competenciasGanadas = competenciasGanadas;
}
int Nadador::getCompetenciasGanadas() {
    return competenciasGanadas;
}
void Nadador::setCompetenciasPerdidas(int competenciasPerdidas) {
    this->competenciasPerdidas = competenciasPerdidas;
}
int Nadador::getCompetenciasPerdidas() {
    return competenciasPerdidas;
}
void Nadador::setTiempo(double tiempos) {
    this->tiempos = tiempos;
}
double Nadador::getTiempo() {
    return tiempos;
}
void Nadador::setPeso(double peso) {
    this->peso = peso;
}
double Nadador::getPeso() {
    return peso;
}
Nadador::Nadador(string nombre, int edad, string cedula, string codigo, int programa, string sexo, string estilo, int medallasOro, int medallasPlata, int medallasBronce, int competenciasGanadas, int competenciasPerdidas, double promedio, double tiempos, double peso) {
    this->estilo = estilo;
    this->medallasOro = medallasOro;
    this->medallasPlata = medallasPlata;
    this->medallasBronce = medallasBronce;
    this->competenciasGanadas = competenciasGanadas;
    this->competenciasPerdidas = competenciasPerdidas;
    this->promedio = promedio;
    this->tiempos = tiempos;
    this->peso = peso;
}
void Nadador::PromedioTiempos(Nadador nadador[],int posicionNatacion){

    for(int i =0;i < posicionNatacion;i++){
        promedio += nadador[i].getTiempo();
        peso += nadador[i].getPeso();
        medallasOro += nadador[i].getMedallasOro();
        medallasPlata += nadador[i].getMedallasPlata();
        medallasBronce += nadador[i].getMedallasBronce();
        competenciasGanadas += nadador[i].getCompetenciasGanadas();
        competenciasPerdidas += nadador[i].getCompetenciasPerdidas();
    }
}

void Nadador::CrearNadador(Nadador nadador[],int posicionNatacion){

    string nombre;
    int edad;
    string cedula;
    string codigo;
    int programa;
    string sexo;
    double tiempos;
    double peso;

    cout<<"Ingrese el Nombre del Nadador: ";
    cin>>nombre;

    cout<<"Ingrese la Edad del Nadador: ";
    cin>>edad;

    cout<<"Ingrese la Cedula del Nadador: ";
    cin>>cedula;

    cout<<"Ingrese el Codigo del Nadador: ";
    cin>>codigo;

    cout<<"Ingrese el Programa del Nadador: ";
    cin>>programa;

    cout<<"Ingrese el Sexo del Nadador: ";
    cin>>sexo;

    cout<<"Ingrese el Estilo del Nadador: ";
    cin>>estilo;

    cout<<"Ingrese el Tiempo del Nadador: ";
    cin>>tiempos;

    cout<<"Ingrese el Peso del Nadador: ";
    cin>>peso;

    nadador[posicionNatacion].setNombre(nombre);
    nadador[posicionNatacion].setEdad(edad);
    nadador[posicionNatacion].setCedula(cedula);
    nadador[posicionNatacion].setCodigo(codigo);
    nadador[posicionNatacion].setPrograma(programa);
    nadador[posicionNatacion].setSexo(sexo);
    
}

void Nadador::ModificarNadador(Nadador nadador[],int posicionNatacion){

    string nombre;
    cout<<"Ingrese el Nombre del Nadador que desea modificar: ";
    cin>>nombre;

    for(int i =0;i < posicionNatacion;i++){

        if(nadador[i].getNombre() == nombre){

            cout<<"Ingrese el nuevo Nombre del Nadador: ";
            cin>>nombre;
            nadador[i].setNombre(nombre);

        }
    }
}

void Nadador::ListarNadadores(Nadador nadador[],int posicionNatacion){

    for(int i =0;i < posicionNatacion;i++){

        cout<<"Nombre: "<<nadador[i].getNombre()<<endl;
        cout<<"Edad: "<<nadador[i].getEdad()<<endl;
        cout<<"Cedula: "<<nadador[i].getCedula()<<endl;
        cout<<"Codigo: "<<nadador[i].getCodigo()<<endl;
        cout<<"Estilo: "<<nadador[i].getEstilo()<<endl;
        cout<<"Tiempo: "<<nadador[i].getTiempo()<<endl;
        cout<<"Peso: "<<nadador[i].getPeso()<<endl;
    }

}

void Nadador::MostrarMejorTiempo(Nadador nadador[],int posicionNatacion){

    for(int i =0;i < posicionNatacion; i++){ //Buble Short

        while(apunt2 < posicionNatacion){

            if(nadador[apunt1].getTiempo() > nadador[apunt2].getTiempo()){
                //El objeto de auxiliar creado lo cree para almacenar lo que hay en el objeto del array en tal posicion
                Nadador auxiliar = nadador[apunt2];//Ordeno Objetos Completos
                nadador[apunt2] = nadador[apunt1];
                nadador[apunt1]=auxiliar;
                apunt1++;
                apunt2++;
            }else{
              apunt1++;
              apunt2++;
            }
        }
        apunt1=0;//Reiniciar apuntador
        apunt2=1;
   }
   cout<<"El nadador con el mejor tiempo es: "<<nadador[0].getNombre()<<" con: "<<nadador[0].getTiempo()<<" segundos" <<endl;
   cout<<"El promedio de tiempos es: "<<promedio/nadador[0].getCompetenciasGanadas()<<endl;
   cout<<"El promedio de pesos es: "<<peso/nadador[0].getCompetenciasGanadas()<<endl;
   cout<<"El promedio de medallas de oro es: "<<medallasOro/nadador[0].getCompetenciasGanadas()<<endl;
   cout<<"El promedio de medallas de plata es: "<<medallasPlata/nadador[0].getCompetenciasGanadas()<<endl;
   cout<<"El promedio de medallas de bronce es: "<<medallasBronce/nadador[0].getCompetenciasGanadas()<<endl;
   cout<<"El promedio de competencias ganadas es: "<<competenciasGanadas/nadador[0].getCompetenciasGanadas()<<endl;
   cout<<"El promedio de competencias perdidas es: "<<competenciasPerdidas/nadador[0].getCompetenciasGanadas()<<endl;

}