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
#include "Repository.h"
int main(){
    
    repository *repo = new repository();
    repo->creat_table();
    repo->insert_table_animal("ok","ok","ok",'F',"10","ok","0","0","ok");
    repo->select_table_animal();
    // repo->delete_table_animal("1");
    repo->insert_table_funcionario("ok","ok","ok","10","ok","+","ok","ok","10");
    repo->select_table_funcionario();
    repo->select_table_animal_id("1");
    repo->select_table_funcionario_id("1");

    return 0;
}