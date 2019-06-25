#include "MamiferoExotico.h"

MamiferoExotico::MamiferoExotico(string pais_origem, string autorizacao_ibama, string cor_do_pelo, int id, string classe, string nome_cientifico, char sexo, double tamanho, string dieta, Veterinario veterinario, Tratador tratador, string nome_batismo): AnimalExotico(pais_origem, autorizacao_ibama), Mamifero(cor_do_pelo, id, classe, nome_cientifico, sexo, tamanho, dieta, veterinario, tratador, nome_batismo)
{

}

MamiferoExotico::~MamiferoExotico()
{
    
}