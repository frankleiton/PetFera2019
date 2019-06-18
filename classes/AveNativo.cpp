#include <iostream>
#include "AnimalNativo.cpp"
#include "Ave.cpp"

using namespace std;

class AveNativo: public AnimalNativo, Ave
{
private:
    /* data */
public:
    AveNativo(/* args */);
    ~AveNativo();
};

AveNativo::AveNativo(/* args */)
{
}

AveNativo::~AveNativo()
{
}
