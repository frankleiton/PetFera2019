#ifndef GERENCIA_H
#define GERENCIA_H

#include <iostream>
#include <list>
#include <string>

#include "../Classes/Animal.h"
#include "../Classes/Funcionario.h"
#include "../Classes/Mamifero.h"
#include "../Classes/Reptil.h"
#include "../Classes/Anfibio.h"
#include "../Classes/Ave.h"

using namespace std;

class Gerencia
{
public:

    /**
     * @brief Atributos para GERENCIAR do PETSHOP
     * 
     */
    list<Funcionario*> funcionarios;
    list<Animal*> animais;


    /**
     * @brief Funções para gerencia do PETSHOP 
     *  
     */

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