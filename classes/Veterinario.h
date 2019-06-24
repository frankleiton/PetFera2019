#ifndef VETERINARIO_H
#define VETERINARIO_H

#include <iostream>
#include "Funcionario.h"

using namespace std;

class Veterinario : public Funcionario
{
private:
    string cmv;
public:
    Veterinario();
    Veterinario(string cmv, int id, string nome, string cpf, short idade, short tipo_sanguineo, char fator_rh, string especialidade);
    ~Veterinario();
};

#endif