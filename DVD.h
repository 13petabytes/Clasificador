#ifndef DVD_h
#define DVD_h
#include <fstream>
#include <string>
#include <iostream>
#include <stdio.h>
#include <string>
#include "Item.h"
using namespace std;

class DVD:public Item{
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
  void unirTXT() override;
  void creadorDvdtxt();
};
#endif //DVD_h