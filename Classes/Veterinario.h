#ifndef VETERINARIO_H
#define VETERINARIO_H

using namespace std;

#include <iostream>
#include <string>
#include "Funcionario.h"

class Veterinario : public Funcionario
{
protected:
    string cmv;
public:
    Veterinario();
    Veterinario(string cmv, int id, string nome, string cpf, short idade, short tipo_sanguineo, char fator_rh, string especialidade);
    ~Veterinario();
};

#endif