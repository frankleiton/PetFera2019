#ifndef ANFIBIO_H
#define ANFIBIO_H

#include <iostream>
#include <ctime>
#include <string>

#include "Animal.h"

class Anfibio: public Animal
{
protected:
    int total_de_mudas;
    time_t ultima_muda;

public:
    Anfibio(int total_de_mudas, time_t ultima_muda, int id, string classe, string nome_cientifico, char sexo, double tamanho, string dieta, Veterinario veterinario, Tratador tratador, string nome_batismo);
    ~Anfibio();

    void setUltimaMuda(time_t ultima_muda);
    void setTotalMudas(int total_de_mudas);

    int getTotalMudas();
    time_t getUltimaMuda();
};

#endif