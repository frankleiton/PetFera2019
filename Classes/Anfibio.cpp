/**
 * @file Anfibio.cpp
 * @author Frankleiton Levy (frankleiton@gmail.com), Giovanna Karla (macedo1999.gk@gmail.com), Pedro Cardoso Carvalho (carvalho.pedro.cardoso@gmail.com)
 * @brief  PetFera2019
 * @version 2.3
 * @since 2019-06-01
 * @date 2019-06-25
 * 
 * @sa Materiais disponiveis no SIGAA da materia de LP-I 2019.1
 * 
 */
#include "Anfibio.h"

Anfibio::Anfibio(int total_de_mudas, time_t ultima_muda, int id, string classe, string nome_cientifico, char sexo, double tamanho, string dieta, Veterinario veterinario, Tratador tratador, string nome_batismo): Animal(id, classe, nome_cientifico, sexo, tamanho, dieta, veterinario, tratador, nome_batismo)
{
    this->total_de_mudas = total_de_mudas;
    this->ultima_muda = ultima_muda;
}

void Anfibio::setUltimaMuda(time_t ultima_muda)
{
    this->ultima_muda = ultima_muda;
}

void Anfibio::setTotalMudas(int total_de_mudas)
{
    this->total_de_mudas = total_de_mudas;
}

int Anfibio::getTotalMudas()
{
    return this->total_de_mudas;
}

time_t Anfibio:: getUltimaMuda()
{  
    return this->ultima_muda;
}

Anfibio::~Anfibio(){}