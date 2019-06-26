/**
 * @file Funcionario.cpp
 * @author Frankleiton Levy (frankleiton@gmail.com), Giovanna Karla (macedo1999.gk@gmail.com), Pedro Cardoso Carvalho (carvalho.pedro.cardoso@gmail.com)
 * @brief  PetFera2019
 * @version 2.3
 * @since 2019-06-01
 * @date 2019-06-25
 * 
 * @sa Materiais disponiveis no SIGAA da materia de LP-I 2019.1
 * 
 */
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