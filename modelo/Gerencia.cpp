#include "Gerencia.h"

Gerencia::Gerencia(){
    repo->creat_table();
}
Gerencia::~Gerencia(){}
bool Gerencia::CadastrarTratador(Tratador *tratador)
{
    funcionarios.push_back(tratador);
}

bool Gerencia::CadastrarVeterinario(Veterinario *veterinario)
{
    funcionarios.push_back(veterinario);
}

bool Gerencia::CadastrarAnimal(Animal *animal )
{
    
    animais.push_back(animal);
    repo->insert_table_animal(animal->getClasse(),animal->getNome(),animal->getNome_cientifico(),animal->getSexo(),to_string(animal->gettamanho()),animal->getDieta(),to_string(animal->getVeterinario()),to_string(animal->getTratador()),animal->getNome());
}

bool Gerencia::venderAnimal(list<Animal>::iterator animal)
{
    repo->delete_table_animal(to_string(animal->getID()));
    //animais.erase(*animal);
    
    
}

void Gerencia::listarAnimais()
{
    repo->select_table_animal();
    // list<Funcionario*>::iterator it;
    // for (it = funcionarios.begin(); it != funcionarios.end(); ++it)
    // {
    //     Tratador* animal = dynamic_cast<Tratador*>(*it);
    // }  
}

void Gerencia::Consultar_Animal_id(int id)
{ 
    // bool encontrado = false;

    // list<Animal*>::iterator it;
    // for (it = animais.begin(); it != animais.end(); ++it)
    // {
    //     Animal* animal = dynamic_cast<Animal*>(*it);
    //     if (animal->getID() == id)
    //     {
    //         encontrado = true;
    //         cout << "Animal Encontrado | Nome: " << animal->getNome_cientifico() << endl;
    //         return;
    //     }
    // }  

    // if (!encontrado)
    // {
    //     cout << "Animal nao Encontrado" << endl;
    //     return;
    // }
    repo->select_table_animal_id(to_string(id));
    
}

void Gerencia::Consultar_Animal_Classe(string classe)
{
    list<Animal*>::iterator it;
    for (it = animais.begin(); it != animais.end(); ++it)
    {
        // if (classe == "mamifero")
        // {
        //     Mamifero* mamifero = dynamic_cast<Mamifero*>(*it);
        //     cout << "ID: " << mamifero->getID() << "Nome: " << mamifero->getNome_cientifico();
        // }

        // if (classe == "ave")
        // {
        //     Ave* ave = dynamic_cast<Ave*>(*it);
        //     cout << "ID: " << ave->getID() << "Nome: " << ave->getNome_cientifico();
        // }

        // if (classe == "reptil")
        // {
        //     Reptil* reptil = dynamic_cast<Reptil*>(*it);
        //     cout << "ID: " << reptil->getID() << "Nome: " << reptil->getNome_cientifico();
        // }

        // if (classe == "anfibio")
        // {
        //     Anfibio* anfibio = dynamic_cast<Anfibio*>(*it);
        //     cout << "ID: " << anfibio->getID() << "Nome: " << anfibio->getNome_cientifico();
        // }
    }  
}

void Gerencia::Consultar_Animal_Veterinario(Veterinario veterinario)
{
    list<Animal*>::iterator it;
    for (it = animais.begin(); it != animais.end(); ++it)
    {
        Animal* animal = dynamic_cast<Animal*>(*it);
        if (animal->getVeterinario() == veterinario.getID())
        {
            cout << "Animal sobre os cuidados desse veterinario: " << animal->getNome_cientifico();
        }
        
    }  
}

void Gerencia::Consultar_Animal_Tratador(Tratador tratador)
{
    list<Animal*>::iterator it;
    for (it = animais.begin(); it != animais.end(); ++it)
    {
        Animal* animal = dynamic_cast<Animal*>(*it);
        if (animal->getTratador() == tratador.getID())
        {
            cout << "Animal sobre os cuidados desse tratador: " << animal->getNome_cientifico();
        }
    }  
}