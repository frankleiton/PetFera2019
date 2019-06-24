#ifndef ANIMAL_H
#define ANIMAL_H

#include <iostream>
#include "Veterinario.h"
#include "Tratador.h"

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
    Animal();

    Animal(int id, string classe, string nome_cientifico, char sexo, double tamanho, string dieta, Veterinario veterinario, Tratador tratador, string nome_batismo);
    int getID();
    string getNome_cientifico();    
    Veterinario getVeterinario();
    Tratador getTratador();

    ~Animal();

};

#endif