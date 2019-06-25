#ifndef GERENCIA_H
#define GERENCIA_H

#include <iostream>
#include <list>
#include <string>

#include "../NewClasses/Animal.h"
#include "../NewClasses/Funcionario.h"
#include "../NewClasses/Mamifero.h"
#include "../NewClasses/Reptil.h"
#include "../NewClasses/Anfibio.h"
#include "../NewClasses/Ave.h"

using namespace std;

class Gerencia
{
public:

    //Atributos para GERENCIAR do PETSHOP
    //EX: MAP de Funcionarios, MAP de Animais ...
    //...........................................
    list<Funcionario*> funcionarios;
    list<Animal*> animais;


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