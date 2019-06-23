#include <iostream>
#include "AnimalSilvestre.cpp"

using namespace std;

class AnimalNativo: public AnimalSilvestre
{
private:
    string uf_origem;
    string autorizacao;
public:
    AnimalNativo(string uf_origem, string autorizacao, string autorizacao_ibama): AnimalSilvestre( autorizacao_ibama )
    {
        this->autorizacao = autorizacao;
        this->uf_origem = uf_origem;
    }

    ~AnimalNativo();
};

