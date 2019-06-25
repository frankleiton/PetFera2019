#ifndef AVENATIVO_H
#define AVENATIVO_H

#include <iostream>
#include <string>

#include "AnimalNativo.h"
#include "Ave.h"

using namespace std;

class AveNativo: public AnimalNativo, Ave
{
private:
    /* data */
public:
    AveNativo(string uf_origem, string autorizacao, string autorizacao_ibama, double tamanho_do_bico_cm, double envergadura_das_asas, int id, string classe, string nome_cientifico, char sexo, double tamanho, string dieta, Veterinario veterinario, Tratador tratador, string nome_batismo);
    ~AveNativo();
};

#endif