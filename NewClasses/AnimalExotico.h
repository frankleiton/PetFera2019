#ifndef ANIMALEXOTICO_H
#define ANIMALEXOTICO_H

#include "AnimalSilvestre.h"
#include <string>

class AnimalExotico : AnimalSilvestre
{
private:
    string pais_origem;
public:
    AnimalExotico(string pais_origem, string autorizacao_ibama);
    ~AnimalExotico();
};

#endif