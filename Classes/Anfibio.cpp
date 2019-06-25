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