#ifndef ANIMALSILVESTRE_H
#define ANIMALSILVESTRE_H

#include "Animal.h"
#include <string>

class AnimalSilvestre
{
private:
    string autorizacao_ibama;
public:
    AnimalSilvestre(string autorizacao_ibama);
    ~AnimalSilvestre();
};

#endif