#ifndef ANFIBIOEXOTICO_H
#define ANFIBIOEXOTICO_H

#include <iostream>

#include "Anfibio.h"
#include "AnimalExotico.h"
#include <string>

class AnfibioExotico : public AnimalExotico, Anfibio
{
private:
    /* data */
public:
    AnfibioExotico(std::string pais_origem, std::string autorizacao_ibama, int total_de_mudas, time_t ultima_muda, int id, string classe, string nome_cientifico, char sexo, double tamanho, string dieta, Veterinario veterinario, Tratador tratador, string nome_batismo);
    ~AnfibioExotico();
};


#endif