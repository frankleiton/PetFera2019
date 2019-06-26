#include "AnimalNativo.h"

AnimalNativo::AnimalNativo(string uf_origem, string autorizacao, string autorizacao_ibama): AnimalSilvestre( autorizacao_ibama )
{
    this->autorizacao = autorizacao;
    this->uf_origem = uf_origem;
}

AnimalNativo::~AnimalNativo()
{

}