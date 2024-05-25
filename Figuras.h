#ifndef Figuras_h
#define Figuras_h
#include <stdio.h>
#include <iostream>
#include <fstream>
#include <string>
#include "Registrador.h"
using namespace std;

class Figuras:public Registrador{
protected:
  string figuraTxt;
public:
  //constructor y destructor
  Figuras();
  ~Figuras();
  //getter y setter
  string getFiguraTxt();
  void setFiguraTxt(string);
  //metodos
  void escribir();
  string buscar() override;
  void unirTXT() override;
  void creadorFiguraTxt();
};
#endif //Figuras_h