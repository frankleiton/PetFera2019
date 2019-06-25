#ifndef REPTIL_H
#define REPTIL_H

#include "Animal.h"

using namespace std;

class Reptil: public Animal
{
protected:
    bool venenoso;
    string tipo_veneno;
public:
    Reptil(bool venenoso, string tipo_veneno, int id, string classe, string nome_cientifico, char sexo, double tamanho, string dieta, Veterinario veterinario, Tratador tratador, string nome_batismo);
    ~Reptil();
};

#endif