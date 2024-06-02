#ifndef Libro_h
#define Libro_h
#include <fstream>
#include <string>
#include <iostream>
#include <stdio.h>
#include <string>
#include "Item.h"
using namespace std;

class Libro:public Item{
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
  void unirTXT() override;
  void creadorLibrotxt();
};
#endif //Libro_h