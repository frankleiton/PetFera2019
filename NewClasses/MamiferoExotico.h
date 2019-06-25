#ifndef MAMIFEROEXOTICO_H
#define MAMIFEROEXOTICO_H

#include <iostream>
#include <string>

#include "AnimalExotico.h"
#include "Mamifero.h"

using namespace std;

class MamiferoExotico: public AnimalExotico, Mamifero
{
private:
    /* data */
public:
    MamiferoExotico(string pais_origem, string autorizacao_ibama, string cor_do_pelo, int id, string classe, string nome_cientifico, char sexo, double tamanho, string dieta, Veterinario veterinario, Tratador tratador, string nome_batismo);
    ~MamiferoExotico();
};

#endif 