#ifndef Registrador_h
#define Registrador_h
#include <stdio.h>
#include <iostream>
#include <fstream>
using namespace std;

class Registrador{
protected:
    string texto;
public:
    //contructor y destructor
    Registrador();
    ~Registrador();
    //getter y setter
    string getTexto();
    void setTexto(string);
    //metodos
    void escribir();
    virtual string buscar();
    virtual void unirTXT();
};
#endif //Registrador_h