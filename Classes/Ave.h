#ifndef AVE_H
#define AVE_H

#include <iostream>
#include <string>

#include "Animal.h"

using namespace std;

class Ave : public Animal
{
protected:
    double tamanho_do_bico_cm;
    double envergadura_das_asas;
public:
    Ave(double tamanho_do_bico_cm, double envergadura_das_asas, int id, string classe, string nome_cientifico, char sexo, double tamanho, string dieta, Veterinario veterinario, Tratador tratador, string nome_batismo);
    ~Ave();

    virtual void coisando();
};

#endif