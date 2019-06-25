#include "Reptil.h"

Reptil::Reptil(bool venenoso, string tipo_veneno, int id, string classe, string nome_cientifico, char sexo, double tamanho, string dieta, Veterinario veterinario, Tratador tratador, string nome_batismo) : Animal(id, classe, nome_cientifico, sexo, tamanho, dieta, veterinario, tratador, nome_batismo)
{
    this->venenoso = venenoso;
    this->tipo_veneno = tipo_veneno;
}

Reptil::~Reptil(){}