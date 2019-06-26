/**
 * @file Veterinario.cpp
 * @author Frankleiton Levy (frankleiton@gmail.com), Giovanna Karla (macedo1999.gk@gmail.com), Pedro Cardoso Carvalho (carvalho.pedro.cardoso@gmail.com)
 * @brief  PetFera2019
 * @version 2.3
 * @since 2019-06-01
 * @date 2019-06-25
 * 
 * @sa Materiais disponiveis no SIGAA da materia de LP-I 2019.1
 * 
 */
#include "Veterinario.h"

using namespace std;

Veterinario::Veterinario(){}

Veterinario::Veterinario(string cmv, int id, string nome, string cpf, short idade, short tipo_sanguineo, char fator_rh, string especialidade) : Funcionario(id, nome, cpf, idade, tipo_sanguineo, fator_rh, especialidade)
{
    this->cmv = cmv;
}

Veterinario::~Veterinario(){}