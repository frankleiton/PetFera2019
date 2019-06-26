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

Animal::Animal(int id, string classe, string nome_cientifico, char sexo, double tamanho, string dieta, int veterinario, int tratador, string nome_batismo)
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

int Animal::getVeterinario()
{
    return this->veterinario;
}

int Animal::getTratador()
{
    return this->tratador;
}
    void Animal::setNome(string valor){
        nome = valor ;
    }
    void Animal::setClasse(string valor){
        classe = valor;
    }
    void Animal::setCientifico(string valor){
        nome_cientifico = valor;
    }
    void Animal::setSexo(char valor){
        sexo= valor ;
    }
    void Animal::setTamanho(double valor){
        tamanho = valor;
    }
    void Animal::setDieta(string valor){
        dieta = valor;
    }
    void Animal::setVeterinario(int valor){
        veterinario = valor ;
    }
    void Animal::setTratador(int valor){
        tratador== valor ;
    }
    void Animal::setBatismo(string valor){
        nome_batismo = valor ;
    }