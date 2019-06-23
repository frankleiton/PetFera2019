#include <iostream>
#include "AnimalNativo.cpp"
#include "Anfibio.cpp"

using namespace std;

class AnfibioNativo : public AnimalNativo, Anfibio
{
private:
    /* data */
public:
    AnfibioNativo(/* args */);
    ~AnfibioNativo();
};

AnfibioNativo::AnfibioNativo(/* args */)
{
}

AnfibioNativo::~AnfibioNativo()
{
}
