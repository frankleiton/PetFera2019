#include "MamiferoNativo.h"

MamiferoNativo::MamiferoNativo(string uf_origem, string autorizacao, string autorizacao_ibama, string cor_do_pelo, int id, string classe, string nome_cientifico, char sexo, double tamanho, string dieta, Veterinario veterinario, Tratador tratador, string nome_batismo) : AnimalNativo(uf_origem, autorizacao, autorizacao_ibama), Mamifero(cor_do_pelo, id, classe, nome_cientifico, sexo, tamanho, dieta, veterinario, tratador, nome_batismo)
{

}

MamiferoNativo::~MamiferoNativo()
{
    
}