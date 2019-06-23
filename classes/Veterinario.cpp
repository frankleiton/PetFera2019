#include <iostream>
#include "Funcionario.cpp"

using namespace std;

class Veterinario : public Funcionario
{
private:
    string cmv;
public:
    Veterinario();
    Veterinario(string cmv, int id, string nome, string cpf, short idade, short tipo_sanguineo, char fator_rh, string especialidade) : Funcionario(id, nome, cpf, idade, tipo_sanguineo, fator_rh, especialidade)
    {
        this->cmv = cmv;
    }
    ~Veterinario();
};


