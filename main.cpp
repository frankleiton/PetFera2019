/**
 * @file main.cpp
 * @author Frankleiton Levy (frankleiton@gmail.com), Giovanna Karla (macedo1999.gk@gmail.com), Pedro Cardoso Carvalho (carvalho.pedro.cardoso@gmail.com)
 * @brief  PetFera2019
 * @version 2.3
 * @since 2019-06-01
 * @date 2019-06-25
 * 
 * @sa Materiais disponiveis no SIGAA da materia de LP-I 2019.1
 * 
 */

#include <iostream>
#include "modelo/Gerencia.h"
//#include "Repository/Repository.h"

#include "Classes/Ave.h"
#include "Classes/Anfibio.h"
#include "Classes/Mamifero.h"
#include "Classes/Reptil.h"

using namespace std;

int main(int argc, char const *argv[])
{
    //Carregar informações do banco



    //Interações com o usuário
    while(true)
    {
        int op = 0;

        cout << "1 - Cadastrar pet a ser comercializado" << endl;
        cout << "2 - Alterar dados do cadastro do pet" << endl;
        cout << "3 - Consultar os dados do pet cadastrado" << endl;
        cout << "4 - Cadastrar Funcionario" << endl;

        cin >> op;

        switch (op)
        {
        case 1:
            

            cout << "1 - Mamifero " << endl;
            cout << "2 - Reptil " << endl;
            cout << "3 - Ave " << endl;
            cout << "4 - Anfibio " << endl;

            cin >> op;

            if (op == 1)
            {
                
            }

            
            break;

        case 2:

            break;

        case 3:

            break;

        case 4:

            break;

        default:

            break;
        }
    }
}