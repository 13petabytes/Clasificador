#include <fstream>
#include <string>
#include <iostream>
#include <stdio.h>
#include <string>
#include <vector>
#include <memory>
#include "Item.h"
#include "DVD.h"
#include "Libro.h"
#include "Figuras.h" 
#include "Registrador.h"
using namespace std;

int main() {
  //Declaración de objetos y vector
  vector<unique_ptr<Item>> items;
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
  //ciclo para crear un nuevo item
  while (opcion == 1){
    int nDVDs;
    int nLibros;
    int nFiguras;
    int tItems;
    cout<<"Incerte el numero de DVDs que va a archivar:"<<endl;
    cin>>nDVDs;
    cout<<"Incerte el numero de Libros que va a archivar:"<<endl;
    cin>>nLibros;
    cout<<"Incerte el numero de Figuras que va a archivar:"<<endl;
    cin>>nFiguras;
      for (int i = 0; i < nDVDs; ++i){
        items.push_back(make_unique<DVD>());
      }
      for (int i = 0; i < nLibros; ++i){
        items.push_back(make_unique<Libro>());
      }
      for (int i = 0; i < nFiguras; ++i){
        items.push_back(make_unique<Figuras>());
      }
    tItems = nDVDs + nLibros + nFiguras;
    for (int i = 0; i < tItems; ++i){
      items[i]->crearItem();
      items[i]->unirTXT();
      string texto = items[i]->getTexto();
      archivador.setTxt(texto);
      archivador.archivar();
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
  //ciclo para buscar item
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
  }

cout<<"Adios";
return 0;
}
