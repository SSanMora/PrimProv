///ctrl+shift+b para compilar
///Crear un sistema que me permita crear deportista subdivisionado por deporte, modificarlo, eliminarlo, mostrar el goleador, el que tenga mas faltas, y el promedio de tiempos en natacion
#include <iostream>
#include <Futbolista.h>
#include <Basketbolista.h>
#include <Nadador.h>
#include <Deportista.h>

using namespace std;
void menu();

int posicionFutbol=0,posicionBasket=0,posicionNatacion=0;
int main()
{
    menu();
    return 0;
}

void menu(){

  Futbolista futbolistas[6];
  Basketbolista basketbolista[7];//Array de objeto de los basketbolistas
  Nadador nadador[2];

  string nombre;
  int opt;
  for(int i =0; i <2;i--){

    cout<< "-------Sistema de Competicion-------" << endl;
    cout<< "1. Crear Deportista" << endl;
    cout<< "2. Modificar Deportista" << endl;
    cout<< "3. listar Deportistas" << endl;
    cout<< "4. Mostrar Deportista con mejores Resultados" << endl;
    cout<< "5. Mostrar Deportista con mas faltas" << endl;
    cout<< "6. Mostrar Promedios Natacion" << endl;
    cout<< "7. Salir del Programa" << endl;
    cin>>opt;

    switch(opt){

    case 1:
        cout<<"Ingresa el programa del deportista que quiere registrar" << endl;
        cout<<"1 para futbolista"<<endl;
        cout<<"2 para basketbolista"<<endl;
        cout<<"3 para nadador"<<endl;
        cin>>opt;
        switch(opt){
            case 1:
                futbolistas[posicionFutbol].crearFutbolista(futbolistas,posicionFutbol);
                posicionFutbol++;
                break;
            case 2:
                basketbolista[posicionBasket].crearBasketbolista(basketbolista,posicionBasket);
                posicionBasket++;
                break;
            case 3:
                nadador[posicionNatacion].CrearNadador(nadador,posicionNatacion);
                posicionNatacion++;
                break;
            default:
                cout<<"Opcion no valida"<<endl;
        }
        break;
    case 2:
        cout<<"Ingresa el programa del deportista que quiere modificar" << endl;
        cout<<"1 para futbolista"<<endl;
        cout<<"2 para basketbolista"<<endl;
        cout<<"3 para nadador"<<endl;
        cin>>opt;
        switch(opt){
            case 1:
                futbolistas[posicionFutbol].ModificarFutbolista(futbolistas,posicionFutbol);
                break;
            case 2:
                basketbolista[posicionBasket].ModificarBasketbolista(basketbolista,posicionBasket);
                break;
            case 3:
                nadador[posicionNatacion].ModificarNadador(nadador,posicionNatacion);
                break;
            default:
                cout<<"Opcion no valida"<<endl;
        }
        break;
    case 3:
        cout<<"Ingresa el programa del deportista que quiere listar" << endl;
        cout<<"1 para futbolista"<<endl;
        cout<<"2 para basketbolista"<<endl;
        cout<<"3 para nadador"<<endl;
        cin>>opt;
        switch(opt){
            case 1:
                futbolistas[posicionFutbol].ListarFutbolistas(futbolistas,posicionFutbol);
                break;
            case 2:
                basketbolista[posicionBasket].listarBasketbolista(basketbolista,posicionBasket);
                break;
            case 3:
                nadador[posicionNatacion].ListarNadadores(nadador,posicionNatacion);
                break;
            default:
                cout<<"Opcion no valida"<<endl;
        }
        break;
    case 4:
        cout<<"Ingresa el programa del deportista que quiere mostrar" << endl;
        cout<<"1 para futbolista"<<endl;
        cout<<"2 para basketbolista"<<endl;
        cout<<"3 para nadador"<<endl;
        cin>>opt;
        switch(opt){
            case 1:
                futbolistas[posicionFutbol].MostrarGoleador(futbolistas,posicionFutbol);
                break;
            case 2:
                basketbolista[posicionBasket].MostrarMasPuntos(basketbolista,posicionBasket);
                break;
            case 3:
                nadador[posicionNatacion].MostrarMejorTiempo(nadador,posicionNatacion);
                break;
            default:
                cout<<"Opcion no valida"<<endl;
        }
        break;
    case 5:
        cout<<"Ingresa el programa del deportista que quiere mostrar" << endl;
        cout<<"1 para futbolista"<<endl;
        cout<<"2 para basketbolista"<<endl;
        cout<<"3 para nadador"<<endl;
        cin>>opt;
        switch(opt){
            case 1:
                futbolistas[posicionFutbol].MostrarMasFaltador(futbolistas,posicionFutbol);
                break;
            case 2:
                basketbolista[posicionBasket].MostrarMasRebotesHechos(basketbolista,posicionBasket);
                break;
            case 3:
                nadador[posicionNatacion].PromedioTiempos(nadador,posicionNatacion);
                break;
            default:
                cout<<"Opcion no valida"<<endl;
        }
        break;
    case 6:
        cout<<"Ingresa el programa del deportista que quiere mostrar" << endl;
        cout<<"1 para futbolista"<<endl;
        cout<<"2 para basketbolista"<<endl;
        cout<<"3 para nadador"<<endl;
        cin>>opt;
        switch(opt){
            case 1:
                futbolistas[posicionFutbol].MostrarMasPartidosJugados(futbolistas,posicionFutbol);
                break;
            case 2:
                basketbolista[posicionBasket].MostrarMasAsistidor(basketbolista,posicionBasket);
                break;
            case 3:
                nadador[posicionNatacion].PromedioTiempos(nadador,posicionNatacion);
                break;
            default:
                cout<<"Opcion no valida"<<endl;
        }
        break;
    case 7:
        cout<<"Saliendo del programa..."<<endl;
        break;
    }
  }
}