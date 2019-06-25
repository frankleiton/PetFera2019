#include "ReptilExotico.h"

ReptilExotico::ReptilExotico(string pais_origem, string autorizacao_ibama, bool venenoso, string tipo_veneno, int id, string classe, string nome_cientifico, char sexo, double tamanho, string dieta, Veterinario veterinario, Tratador tratador, string nome_batismo): AnimalExotico(pais_origem, autorizacao_ibama), Reptil(venenoso, tipo_veneno, id, classe, nome_cientifico, sexo, tamanho, dieta, veterinario, tratador, nome_batismo)
{

}

ReptilExotico::~ReptilExotico()
{
    
}