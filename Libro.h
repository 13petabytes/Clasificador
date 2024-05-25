#ifndef Libro_h
#define Libro_h
#include <stdio.h>
#include <iostream>
#include <fstream>
#include <string>
#include "Registrador.h"
using namespace std;

class Libro:public Registrador{
protected:
  string libroTxt;
public:
  //constructor y destructor
  Libro();
  ~Libro();
  //getter y setter
  string getLibroTxt();
  void setLibroTxt(string);
  //metodos
  void escribir();
  string buscar() override;
  void unirTXT() override;
  void creadorLibrotxt();
};
#endif //Libro_h