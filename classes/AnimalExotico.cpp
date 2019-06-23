#include <iostream>
#include "AnimalSilvestre.cpp"

using namespace std;

class AnimalExotico: AnimalSilvestre
{
private:
    string pais_origem;
public:
    AnimalExotico(string pais_origem, string autorizacao_ibama): AnimalSilvestre( autorizacao_ibama )
    {
        this->pais_origem = pais_origem;
    }
    ~AnimalExotico();
};
