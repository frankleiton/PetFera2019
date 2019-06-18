#include <iostream>
#include "AnimalSilvestre.cpp"

using namespace std;

class AnimalNativo: public AnimalSilvestre
{
private:
    string uf_origem;
    string autorizacao;
public:
    AnimalNativo(/* args */);
    ~AnimalNativo();
};

AnimalNativo::AnimalNativo(/* args */)
{
}

AnimalNativo::~AnimalNativo()
{
}
