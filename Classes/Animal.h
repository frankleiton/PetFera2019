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
    string nome;

public:
    Animal();
    Animal(int id, string classe, string nome_cientifico, char sexo, double tamanho, string dieta, Veterinario veterinario, Tratador tratador, string nome_batismo);
    ~Animal();

    int getID();
    string getNome(){return nome;}
    string getClasse(){return classe;}
    string getNome_cientifico();  
    char getSexo(){return sexo;};
    double gettamanho(){return tamanho;}  
    string getDieta(){return dieta;}
    string getNomeBatismo(){return nome_batismo;}
    Veterinario getVeterinario();
    Tratador getTratador();

    virtual void coisar();

};

#endif