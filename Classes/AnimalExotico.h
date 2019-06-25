#ifndef ANIMALEXOTICO_H
#define ANIMALEXOTICO_H

#include <iostream>
#include <string>

#include "AnimalSilvestre.h"
#include <string>

using namespace std;

class AnimalExotico : AnimalSilvestre
{
private:
    string pais_origem;
public:
    AnimalExotico(string pais_origem, string autorizacao_ibama);
    ~AnimalExotico();
};

#endif