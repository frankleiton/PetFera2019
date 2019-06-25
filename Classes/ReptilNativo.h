#ifndef REPTILNATIVO_H
#define REPTILNATIVO_H

#include <iostream>
#include <string>

#include "AnimalNativo.h"
#include "Reptil.h"

using namespace std;

class ReptilNativo: public AnimalNativo, Reptil
{
private:
    /* data */
public:
    ReptilNativo(string uf_origem, string autorizacao, string autorizacao_ibama, bool venenoso, string tipo_veneno, int id, string classe, string nome_cientifico, char sexo, double tamanho, string dieta, Veterinario veterinario, Tratador tratador, string nome_batismo);

    ~ReptilNativo();
};

#endif