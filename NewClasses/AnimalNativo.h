#ifndef ANIMALNATIVO_H
#define ANIMALNATIVO_H


#include "AnimalSilvestre.h"
#include <string>

class AnimalNativo: public AnimalSilvestre
{
private:
    string uf_origem;
    string autorizacao;
public:
    AnimalNativo(string uf_origem, string autorizacao, string autorizacao_ibama);
    ~AnimalNativo();
};

#endif