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