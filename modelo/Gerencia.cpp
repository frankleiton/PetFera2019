#include "Gerencia.h"
/**
 * @brief cadastrar tratador
 * 
 * @param tratador 
 * @return true 
 * @return false 
 */
bool Gerencia::CadastrarTratador(Tratador *tratador)
{
    funcionarios.push_back(tratador);
}
/**
 * @brief cadastrar veterinario
 * 
 * @param veterinario 
 * @return true 
 * @return false 
 */
bool Gerencia::CadastrarVeterinario(Veterinario *veterinario)
{
    funcionarios.push_back(veterinario);
}
/**
 * @brief cadastrar animal
 * 
 * @param animal 
 * @return true 
 * @return false 
 */
bool Gerencia::CadastrarAnimal(Animal *animal)
{
    animais.push_back(animal);
}
/**
 * @brief vender animal
 * 
 * @param animal 
 * @return true 
 * @return false 
 */
bool Gerencia::venderAnimal(list<Animal>::iterator animal)
{
    //animais.erase(*animal);
}
/**
 * @brief listar animais
 * 
 */
void Gerencia::listarAnimais()
{
    list<Funcionario*>::iterator it;
    for (it = funcionarios.begin(); it != funcionarios.end(); ++it)
    {
        Tratador* animal = dynamic_cast<Tratador*>(*it);
    }  
}
/**
 * @brief consultar animal pelo id
 * 
 * @param id 
 */
void Gerencia::Consultar_Animal_id(int id)
{ 
    bool encontrado = false;

    list<Animal*>::iterator it;
    for (it = animais.begin(); it != animais.end(); ++it)
    {
        Animal* animal = dynamic_cast<Animal*>(*it);
        if (animal->getID() == id)
        {
            encontrado = true;
            cout << "Animal Encontrado | Nome: " << animal->getNome_cientifico() << endl;
            return;
        }
    }  

    if (!encontrado)
    {
        cout << "Animal nao Encontrado" << endl;
        return;
    }
    
    
}
/**
 * @brief consultar animal pela classe
 * 
 * @param classe 
 */
void Gerencia::Consultar_Animal_Classe(string classe)
{
    list<Animal*>::iterator it;
    for (it = animais.begin(); it != animais.end(); ++it)
    {
        if (classe == "mamifero")
        {
            Mamifero* mamifero = dynamic_cast<Mamifero*>(*it);
            cout << "ID: " << mamifero->getID() << "Nome: " << mamifero->getNome_cientifico();
        }

        if (classe == "ave")
        {
            Ave* ave = dynamic_cast<Ave*>(*it);
            cout << "ID: " << ave->getID() << "Nome: " << ave->getNome_cientifico();
        }

        if (classe == "reptil")
        {
            Reptil* reptil = dynamic_cast<Reptil*>(*it);
            cout << "ID: " << reptil->getID() << "Nome: " << reptil->getNome_cientifico();
        }

        if (classe == "anfibio")
        {
            Anfibio* anfibio = dynamic_cast<Anfibio*>(*it);
            cout << "ID: " << anfibio->getID() << "Nome: " << anfibio->getNome_cientifico();
        }
    }  
}
/**
 * @brief consultar animal pelo veterinario
 * 
 * @param veterinario 
 */
void Gerencia::Consultar_Animal_Veterinario(Veterinario veterinario)
{
    list<Animal*>::iterator it;
    for (it = animais.begin(); it != animais.end(); ++it)
    {
        Animal* animal = dynamic_cast<Animal*>(*it);
        if (animal->getVeterinario().getID() == veterinario.getID())
        {
            cout << "Animal sobre os cuidados desse veterinario: " << animal->getNome_cientifico();
        }
        
    }  
}
/**
 * @brief consultar animal pelo tratador
 * 
 * @param tratador 
 */
void Gerencia::Consultar_Animal_Tratador(Tratador tratador)
{
    list<Animal*>::iterator it;
    for (it = animais.begin(); it != animais.end(); ++it)
    {
        Animal* animal = dynamic_cast<Animal*>(*it);
        if (animal->getTratador().getID() == tratador.getID())
        {
            cout << "Animal sobre os cuidados desse tratador: " << animal->getNome_cientifico();
        }
    }  
}