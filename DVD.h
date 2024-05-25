#ifndef DVD_h
#define DVD_h
#include <stdio.h>
#include <iostream>
#include <fstream>
#include <string>
#include "Registrador.h"
using namespace std;

class DVD:public Registrador{
protected:
  string dvdTxt;
public:
  //constructor y destructor
  DVD();
  ~DVD();
  //getter y setter
  string getDVDtxt();
  void setDVDtxt(string);
  //metodos
  void escribir();
  string buscar() override;
  void unirTXT() override;
  void creadorDvdtxt();
};
#endif //DVD_h