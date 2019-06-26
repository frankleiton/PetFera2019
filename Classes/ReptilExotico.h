#ifndef REPTILEXOTICO_H
#define REPTILEXOTICO_H

#include <iostream>
#include <string>

#include "AnimalExotico.h"
#include "Reptil.h"

using namespace std;

class ReptilExotico: public AnimalExotico, Reptil
{
private:
    /* data */
public:
    ReptilExotico(string pais_origem, string autorizacao_ibama, bool venenoso, string tipo_veneno, int id, string classe, string nome_cientifico, char sexo, double tamanho, string dieta, Veterinario veterinario, Tratador tratador, string nome_batismo);
    ~ReptilExotico();
};

#endif