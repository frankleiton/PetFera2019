#include <string>
#include "Tratador.h"

using namespace std;

Tratador::Tratador(){}

Tratador::Tratador(int nivel_de_seguranca, int id, string nome, string cpf, short idade, short tipo_sanguineo, char fator_rh, string especialidade) : Funcionario(id, nome, cpf, idade, tipo_sanguineo, fator_rh, especialidade)
{
    this->nivel_de_seguranca = nivel_de_seguranca;
}

Tratador::~Tratador(){}