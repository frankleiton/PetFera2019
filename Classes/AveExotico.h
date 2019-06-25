#ifndef AVEEXOTICO_H
#define AVEEXOTICO_H

#include <iostream>
#include <string>

#include "AnimalExotico.h"
#include "Ave.h"

using namespace std;

class AveExotico: public AnimalExotico, Ave
{
private:
    /* data */
public:
    AveExotico(string pais_origem, string autorizacao_ibama, double tamanho_do_bico_cm, double envergadura_das_asas, int id, string classe, string nome_cientifico, char sexo, double tamanho, string dieta, Veterinario veterinario, Tratador tratador, string nome_batismo);
    ~AveExotico();
};

#endif