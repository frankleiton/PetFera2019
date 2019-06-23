#include "Animal.cpp"

using namespace std;

class AnimalSilvestre
{
private:
    string autorizacao_ibama;
public:
    AnimalSilvestre(string autorizacao_ibama)
    {
        this->autorizacao_ibama = autorizacao_ibama;
    }
    ~AnimalSilvestre();
};
