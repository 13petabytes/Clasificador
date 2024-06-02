#include <fstream>
#include <string>
#include <iostream>
#include <stdio.h>
#include <string>
#include "DVD.h"
#include "Libro.h"
#include "Figuras.h" 
#include "Registrador.h"
using namespace std;

int main() {
  Registrador archivador;
  cout<<"Bienvenido al sistema de archivos"<<endl;
  cout<<"Incerte la opción que desea realizar:"<<endl;
  cout<<"1) para crear un nuevo item"<<endl;
  cout<<"2) para buscar un item"<<endl;
  cout<<"3) para salir"<<endl;
  int opcion;
  cin>>opcion;
  while(opcion != 1 && opcion != 2 && opcion != 3){
    cout<<"Incerte una opción valida"<<endl;
    cout<<"1) para crear un nuevo item"<<endl;
    cout<<"2) para buscar un item"<<endl;
    cout<<"3) para salir"<<endl;
    cin>>opcion;
  }
  //While para checar que el usuario no quiere seguir en el sistema
  while (opcion != 3){
  while(opcion == 2){
    string letra = "x";
    int numero = 0;
    int opcionBusqueda;
    cout<<"¿Qué desea buscar?"<<endl;
    cout<<"1) para buscar un Libro"<<endl;
    cout<<"2) para buscar un DVD"<<endl;
    cout<<"3) para buscar una Figura"<<endl;
    cin>>opcionBusqueda;
    while(opcion != 1 && opcion != 2 && opcion != 3){
      cout<<"1) para buscar un Libro"<<endl;
      cout<<"2) para buscar un DVD"<<endl;
      cout<<"3) para buscar una Figura"<<endl;
      cin>>opcionBusqueda;
    }
    if(opcionBusqueda == 1){
      archivador.buscar(letra,numero);
    }
    else if (opcionBusqueda == 2){
      archivador.buscar(numero);
    }
    else if (opcionBusqueda == 3){
      archivador.buscar(letra);
    }
    cout<<"¿Qué desea hacer ahora?"<<endl;
    cout<<"1) para crear un nuevo item"<<endl;
    cout<<"2) para buscar un item"<<endl;
    cout<<"3) para salir"<<endl;
    cin>>opcion;
    while(opcion != 1 && opcion != 2 && opcion != 3){
      cout<<"Incerte una opción valida"<<endl;
      cout<<"1) para crear un nuevo item"<<endl;
      cout<<"2) para buscar un item"<<endl;
      cout<<"3) para salir"<<endl;
      cin>>opcion;
    }
  }
  return 0;
  }
  cout<<"Adios";
}