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
    int veterinario;
    int tratador;
    string nome_batismo;
    string nome;

public:
    Animal();
    Animal(int id, string classe, string nome_cientifico, char sexo, double tamanho, string dieta, int veterinario, int tratador, string nome_batismo);
    ~Animal();

    int getID();
    string getNome(){return nome;}
    string getClasse(){return classe;}
    string getNome_cientifico();  
    char getSexo(){return sexo;};
    double gettamanho(){return tamanho;}  
    string getDieta(){return dieta;}
    string getNomeBatismo(){return nome_batismo;}
    int getVeterinario();
    int getTratador();
    void setNome(string valor);
    void setClasse(string valor);
    void setCientifico(string valor);
    void setSexo(char valor);
    void setTamanho(double valor);
    void setDieta(string valor);
    void setVeterinario(int valor );
    void setTratador(int valor);
    void setBatismo(string valor);

    virtual void coisar();

};

#endif