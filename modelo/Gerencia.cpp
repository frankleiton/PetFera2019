#include <iostream>
#include <map>

#include "../classes/Funcionario.cpp"
#include "../classes/Tratador.cpp"
#include "../classes/Veterinario.cpp"
#include "../classes/Animal.cpp"
#include "../classes/Mamifero.cpp"
#include "../classes/MamiferoExotico.cpp"



using namespace std;

class Gerencia
{
public:

    //Atributos para GERENCIAR do PETSHOP
    //EX: MAP de Funcionarios, MAP de Animais ...
    //...........................................
    map<int, Veterinario> veterinarios;
    map<int, Tratador> tratadores;
    map<int, Animal> animais;


    //Funções para gerencia do PETSHOP
    //...........................................

    bool CadastrarTratador(Tratador tratador)
    {
        tratadores.insert(pair<int, Tratador>(tratador.getID(), tratador));
    }

    bool CadastrarVeterinario(Veterinario veterinario)
    {
        veterinarios.insert(pair<int, Veterinario>(veterinario.getID() ,veterinario));
    }

    bool CadastrarAnimal(Animal animal)
    {
        animais.insert(pair<int, Animal>(animal.getID(), animal));
    }

    bool venderAnimal(int id)
    {
        animais.erase(id);
    }

    void listarAnimais()
    {
        map<int, Animal>::iterator it;

        for (it = animais.begin(); it != animais.end(); ++it) 
            cout << "ID: " << it->first << " | Nome: " << it->second->getID() << endl;        
    }


    Gerencia();
    ~Gerencia();
};