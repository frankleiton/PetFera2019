#ifndef MAMIFERO_H
#define MAMIFERO_H

#include <iostream>
#include <string>

#include "Animal.h"

using namespace std;

class Mamifero : public Animal
{
protected:
    string cor_do_pelo;
public:
    Mamifero( string cor_do_pelo, int id, string classe, string nome_cientifico, char sexo, double tamanho, string dieta, Veterinario veterinario, Tratador tratador, string nome_batismo);
    ~Mamifero();
};

#endif