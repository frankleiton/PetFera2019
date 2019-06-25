#include "AveExotico.h"

AveExotico::AveExotico(string pais_origem, string autorizacao_ibama, double tamanho_do_bico_cm, double envergadura_das_asas, int id, string classe, string nome_cientifico, char sexo, double tamanho, string dieta, Veterinario veterinario, Tratador tratador, string nome_batismo): AnimalExotico(pais_origem, autorizacao_ibama), Ave(tamanho_do_bico_cm, envergadura_das_asas, id, classe, nome_cientifico, sexo, tamanho, dieta, veterinario, tratador, nome_batismo)
{
        
}

AveExotico::~AveExotico()
{
    
}