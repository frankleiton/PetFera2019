/**
 * @file Animal.cpp
 * @author Frankleiton Levy (frankleiton@gmail.com), Giovanna Karla (macedo1999.gk@gmail.com), Pedro Cardoso Carvalho (carvalho.pedro.cardoso@gmail.com)
 * @brief  PetFera2019
 * @version 2.3
 * @since 2019-06-01
 * @date 2019-06-25
 * 
 * @sa Materiais disponiveis no SIGAA da materia de LP-I 2019.1
 * 
 */
#include "Animal.h"
    
using namespace std;

Animal::Animal()
{
    
}

Animal::~Animal()
{

}

void Animal::coisar()
{
    cout << "oi";
}

Animal::Animal(int id, string classe, string nome_cientifico, char sexo, double tamanho, string dieta, Veterinario veterinario, Tratador tratador, string nome_batismo)
{
    this->id = id;
    this->classe = classe;
    this->nome_cientifico = nome_cientifico;
    this->sexo = sexo;
    this->tamanho = tamanho;
    this->dieta = dieta;
    this->veterinario = veterinario;
    this->tratador = tratador;
    this->nome_batismo = nome_batismo;
}

int Animal::getID()
{
    return this->id;
}

string Animal::getNome_cientifico()
{
    return this->nome_cientifico;
}

Veterinario Animal::getVeterinario()
{
    return this->veterinario;
}

Tratador Animal::getTratador()
{
    return this->tratador;
}