#include <iostream>

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
    int numerro;
    Funcionario();
    Funcionario(int id, string nome, string cpf, short idade, short tipo_sanguineo, char fator_rh, string especialidade);
    ~Funcionario();
};

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

Funcionario::Funcionario()
{
    
}

Funcionario::~Funcionario()
{
}
