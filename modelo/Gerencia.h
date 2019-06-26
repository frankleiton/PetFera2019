#ifndef GERENCIA_H
#define GERENCIA_H

#include <iostream>
#include <list>
#include <string>

#include "../Classes/Animal.h"
#include "../Classes/Funcionario.h"
// #include "../Classes/Mamifero.h"

// #include "../Classes/Reptil.h"
// #include "../Classes/Ave.h"

// #include "../Classes/Anfibio.h"
#include "../Repository/Repository.h"
using namespace std;

class Gerencia
{
public:

    //Atributos para GERENCIAR do PETSHOP
    //EX: MAP de Funcionarios, MAP de Animais ...
    //...........................................
    list<Funcionario*> funcionarios;
    list<Animal*> animais;
    repository *repo = new repository();


    //Funções para gerencia do PETSHOP
    //...........................................

    bool CadastrarTratador(Tratador *tratador);

    bool CadastrarVeterinario(Veterinario *veterinario);

    bool CadastrarAnimal(Animal *animal);

    bool venderAnimal(list<Animal>::iterator animal);

    void listarAnimais();

    void Consultar_Animal_id(int id);
    
    void Consultar_Animal_Classe(string classe);

    void Consultar_Animal_Veterinario(Veterinario veterinario);

    void Consultar_Animal_Tratador(Tratador tratador);


    Gerencia();
    ~Gerencia();
};

#endif