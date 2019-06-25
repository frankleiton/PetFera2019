#include "Funcionario.h"

Funcionario::Funcionario(int id, string nome, string cpf, short idade, short tipo_sanguineo, char fator_rh, string especialidade)
{
    this->id = id;
    this->nome = nome;
    this->cpf = cpf;
    this->idade = idade;
    this->tipo_sanguineo = tipo_sanguineo;
    this->fator_rh = fator_rh;
    this->especialidade = especialidade;
}

int Funcionario::getID()
{
    return this->id;
}

string Funcionario::getNome()
{
    return this->nome;
}

string Funcionario::getCpf()
{
    return this->cpf;
}


Funcionario::Funcionario()
{
    
}

Funcionario::~Funcionario()
{

}

void Funcionario::coisar()
{
    cout << "oi";
}