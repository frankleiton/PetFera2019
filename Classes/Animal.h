#ifndef ANIMAL_H
#define ANIMAL_H

using namespace std;

#include <iostream>
#include <string>

#include "Veterinario.h"
#include "Tratador.h"

class Animal
{
protected:
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
    Animal();
    Animal(int id, string classe, string nome_cientifico, char sexo, double tamanho, string dieta, Veterinario veterinario, Tratador tratador, string nome_batismo);
    ~Animal();

    int getID();
    string getNome_cientifico();    
    Veterinario getVeterinario();
    Tratador getTratador();

    virtual void coisar();

};

#endif