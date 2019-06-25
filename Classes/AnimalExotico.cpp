#include "AnimalExotico.h"

AnimalExotico::AnimalExotico(string pais_origem, string autorizacao_ibama): AnimalSilvestre(autorizacao_ibama)
{
    this->pais_origem = pais_origem;
}

AnimalExotico::~AnimalExotico(){}