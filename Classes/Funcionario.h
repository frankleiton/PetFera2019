#ifndef FUNCIONARIO_H
#define FUNCIONARIO_H

#include <iostream>
#include <string>

using namespace std;

class Funcionario
{
protected:
    int id;
    string nome;
    string cpf;
    short idade;
    short tipo_sanguineo;
    char fator_rh;
    string especialidade;

public:
    Funcionario();
    Funcionario(int id, string nome, string cpf, short idade, short tipo_sanguineo, char fator_rh, string especialidade);
    ~Funcionario();

    virtual void coisar();

    int getID();
    string getNome();
    string getCpf();

};


#endif