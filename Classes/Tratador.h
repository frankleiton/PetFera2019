#ifndef TRATADOR_H
#define TRATADOR_H

#include <iostream>
#include "Funcionario.h"
#include <string>

using namespace std;

class Tratador : public Funcionario
{
protected:
    int nivel_de_seguranca;
public:
    Tratador();
    Tratador(int nivel_de_seguranca, int id, string nome, string cpf, short idade, short tipo_sanguineo, char fator_rh, string especialidade);
    ~Tratador();
};

#endif