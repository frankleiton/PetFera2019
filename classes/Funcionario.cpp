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
    Funcionario();
    Funcionario(int id, string nome, string cpf, short idade, short tipo_sanguineo, char fator_rh, string especialidade);
    ~Funcionario();

    int getID()
    {
        return this->id;
    }

    string getNome()
    {
        return this->nome;
    }

    string getCpf()
    {
        return this->cpf;
    }


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
