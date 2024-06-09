#ifndef Item_h
#define Item_h
#include <fstream>
#include <string>
#include <iostream>
#include <stdio.h>
#include <memory>
#include <string>
using namespace std;

class Item{
protected:
    string texto;
public:
    //contructor y destructor
    Item();
    virtual ~Item() = 0;
    //getter y setter
    string getTexto();
    void setTexto(string);
    //metodos
    virtual void unirTXT() = 0;
    virtual void crearItem() = 0;
};
#endif //Item_h
