#include <fstream>
#include "Registrador.h"
using namespace std;

//constructor y destructor

Registrador::Registrador(){};
Registrador::~Registrador(){};

//getter y setter

void Registrador::setTexto(string texto_N){
  texto = texto_N;
}
string Registrador::getTexto(){
  return texto;
}
//metodo

void Registrador::escribir(){
  ofstream archivo("Archibaje.txt", ios::app);
  archivo<<endl<<texto;
  archivo.close();
}