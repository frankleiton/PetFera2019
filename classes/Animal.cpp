#include <iostream>
#include "Veterinario.cpp"
#include "Tratador.cpp"

using namespace std;

class Animal
{
private:
    int id;
    string classe;
    string nome_cientifico;
    char sexo;
    double tamanho;
    string dieta;
    Veterinario veterinario;
    Tratador tratador;
    string nome_batismo;

public:
    Animal(int id, string classe, string nome_cientifico, char sexo, double tamanho, string dieta, Veterinario veterinario, Tratador tratador, string nome_batismo);
    Animal();
    ~Animal();
};

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

Animal::Animal()
{
}

Animal::~Animal()
{
}
