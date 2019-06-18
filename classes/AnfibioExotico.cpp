#include <iostream>
#include "AnimalExotico.cpp"
#include "Anfibio.cpp"

using namespace std;

class AnfibioExotico : public AnimalExotico, Anfibio
{
private:
    /* data */
public:
    AnfibioExotico(/* args */);
    ~AnfibioExotico();
};

AnfibioExotico::AnfibioExotico(/* args */)
{
}

AnfibioExotico::~AnfibioExotico()
{
}
