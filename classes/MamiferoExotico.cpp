#include <iostream>
#include "AnimalExotico.cpp"
#include "Mamifero.cpp"

using namespace std;

class MamiferoExotico: public AnimalExotico, Mamifero
{
private:
    /* data */
public:
    MamiferoExotico(/* args */);
    ~MamiferoExotico();
};

MamiferoExotico::MamiferoExotico(/* args */)
{
}

MamiferoExotico::~MamiferoExotico()
{
}
