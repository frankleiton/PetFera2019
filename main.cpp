#include <iostream>
#include "modelo/Gerencia.h"
//#include "Repository/Repository.h"

// #include "Classes/Ave.h"
// #include "Classes/Anfibio.h"
// #include "Classes/Mamifero.h"
// #include "Classes/Reptil.h"

using namespace std;

int main(int argc, char const *argv[])
{
    //Carregar informações do banco

    Gerencia *gerencia = new Gerencia();

    //Interações com o usuário
    while(true)
    {
        int op = 0;

        cout << "1 - Cadastrar pet a ser comercializado" << endl;
        cout << "2 - Alterar dados do cadastro do pet" << endl;
        cout << "3 - Consultar os dados do pet cadastrado" << endl;
        cout << "4 - Cadastrar Funcionario" << endl;
        cout<< "5-exit"<<endl;

        cin >> op;
        string aux ;
        int aux2;
        double aux3;
        char aux4;
        Animal *animal = new Animal();
        switch (op)
        {
        case 1:
            
            cout<<"digite tamanho"<<endl;
            cin>> aux3;
            animal->setTamanho(aux3);
            cout<<"Digite id do veterinario"<<endl;
            cin>>aux2;
            animal->setVeterinario(aux2);
            cout<<"Digite id do tratador"<<endl;
            cin>>aux2;
            animal->setTratador(aux2);
            cout<< "Digite sexo (M ou F)"<<endl;
            cin>>aux4;
            animal->setSexo(aux4);
            cout<<"Digite nome do animal"<<endl;
            cin>>aux;
            animal->setNome(aux);
            cout<< "Digite nome de batismo"<<endl;
            cin>>aux;
            animal->setBatismo(aux);
            cout<<"Digite nome cientifico"<<endl;
            cin>>aux;
            animal->setCientifico(aux);
            cout<<"Digite classe"<<endl;
            cin >>aux;
            animal->setClasse(aux);
            cout<<"digite dieta"<<endl;
            cin>>aux;
            animal->setDieta(aux);
            
            gerencia->CadastrarAnimal(animal);
            break;

        case 2:
            gerencia->listarAnimais();
            break;

        case 3:

            break;

        case 4:

            break;

        default:
            return 0 ;
            break;
        }
    }
}