#include <iostream>
#include <list>

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
            cout << "ID: " << it->first << " | Nome: " << it->second.getID() << endl;        
    }

    void Consultar_Animal(int id, string classe = "padrao")
    {
        Animal animal;
        map<int, Animal>::iterator it;

        if (classe == "padrao")
        {
            it = animais.find(id);

            if (it.operator!=)
            {
                cout << "Animal Encontrado";
            }else
            {
                cout << "Animal Não Encontrado";
            }
            
        }
        
    }


    Gerencia();
    ~Gerencia();
};