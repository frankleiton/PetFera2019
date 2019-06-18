#include <iostream>
#include "AnimalNativo.cpp"
#include "Mamifero.cpp"

using namespace std;

class MamiferoNativo: public AnimalNativo, Mamifero
{
private:
    /* data */
public:
    MamiferoNativo(/* args */);
    ~MamiferoNativo();
};

MamiferoNativo::MamiferoNativo(/* args */)
{
}

MamiferoNativo::~MamiferoNativo()
{
}
