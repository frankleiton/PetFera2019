#ifndef MAMIFERONATIVO_H
#define MAMIFERONATIVO_H

#include <iostream>
#include <string>

#include "AnimalNativo.h"
#include "Mamifero.h"

using namespace std;

class MamiferoNativo: public AnimalNativo, Mamifero
{
private:
    /* data */
public:
    MamiferoNativo(string uf_origem, string autorizacao, string autorizacao_ibama, string cor_do_pelo, int id, string classe, string nome_cientifico, char sexo, double tamanho, string dieta, Veterinario veterinario, Tratador tratador, string nome_batismo);
    ~MamiferoNativo();
};


#endif