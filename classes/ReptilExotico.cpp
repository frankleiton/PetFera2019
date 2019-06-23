#include <iostream>
#include "AnimalExotico.cpp"
#include "Reptil.cpp"

using namespace std;

class ReptilExotico: public AnimalExotico, Reptil
{
private:
    /* data */
public:
    ReptilExotico(/* args */);
    ~ReptilExotico();
};

ReptilExotico::ReptilExotico(/* args */)
{
}

ReptilExotico::~ReptilExotico()
{
}
