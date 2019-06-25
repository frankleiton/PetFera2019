#ifndef ANFIBIONATIVO_H
#define ANFIBIONATIVO_H

#include <iostream>
#include <string>

#include "Anfibio.h"
#include "AnimalNativo.h"

using namespace std;

class AnfibioNativo : public AnimalNativo, Anfibio
{
private:
    /* data */
public:
    AnfibioNativo(string uf_origem, string autorizacao, string autorizacao_ibama, int total_de_mudas, time_t ultima_muda, int id, string classe, string nome_cientifico, char sexo, double tamanho, string dieta, Veterinario veterinario, Tratador tratador, string nome_batismo);
    ~AnfibioNativo();
};
#endif