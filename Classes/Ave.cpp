/**
 * @file Ave.cpp
* @author Frankleiton Levy (frankleiton@gmail.com), Giovanna Karla (macedo1999.gk@gmail.com), Pedro Cardoso Carvalho (carvalho.pedro.cardoso@gmail.com)
 * @brief  PetFera2019
 * @version 2.3
 * @since 2019-06-01
 * @date 2019-06-25
 * 
 * @sa Materiais disponiveis no SIGAA da materia de LP-I 2019.1
 * 
 */
#include "Ave.h"

Ave::Ave(double tamanho_do_bico_cm, double envergadura_das_asas, int id, string classe, string nome_cientifico, char sexo, double tamanho, string dieta, Veterinario veterinario, Tratador tratador, string nome_batismo) : Animal(id, classe, nome_cientifico, sexo, tamanho, dieta, veterinario, tratador, nome_batismo)
{
    this->envergadura_das_asas = envergadura_das_asas;
    this->tamanho_do_bico_cm = tamanho_do_bico_cm;
}

Ave::~Ave(){}

void Ave::coisando()
{
    cout << "oi";
}