#include <iostream>
#include "AnimalNativo.cpp"
#include "Reptil.cpp"

using namespace std;

class ReptilNativo: public AnimalNativo, Reptil
{
private:
    /* data */
public:
    ReptilNativo(/* args */);
    ~ReptilNativo();
};

ReptilNativo::ReptilNativo(/* args */)
{
}

ReptilNativo::~ReptilNativo()
{
}
